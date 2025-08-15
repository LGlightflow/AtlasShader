// Fill out your copyright notice in the Description page of Project Settings.


#include "AtlasPackBlueprintLibrary.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"
#include "Data/AtlasTextureDataAsset.h"

void PackMatsIntoAtlases_QuadTree(const TArray<cv::Mat>& Mats, int32 AtlasSize, TArray<cv::Mat>& OutAtlases, TArray<TArray<int32>>& OutAtlasImageLists, TArray<FIntRect>& OutRects)
{
	// init
	OutAtlases.Empty();
	OutAtlasImageLists.Empty();

	TArray<int32> Remaining;
	Remaining.Reserve(Mats.Num());
	for (int i = 0; i < Mats.Num(); ++i) Remaining.Add(i);

	// initialize OutRects
	OutRects.Init(FIntRect(-1, -1, 0, 0), Mats.Num());

	while (Remaining.Num() > 0)
	{
		cv::Mat Atlas = cv::Mat::zeros(AtlasSize, AtlasSize, CV_8UC4); // BGRA zeros
		FPackNode Root(0, 0, AtlasSize, AtlasSize);

		TArray<int32> NextRemaining;
		TArray<int32> PlacedIndices;

		// Optionally sort Remaining by size descending to improve packing (big first)
		Remaining.Sort([&](int A, int B) {
			int As = Mats[A].cols * Mats[A].rows;
			int Bs = Mats[B].cols * Mats[B].rows;
			return As > Bs;
			});

		for (int32 idx : Remaining)
		{
			const cv::Mat& ImgRGBA = Mats[idx]; // assume RGBA
			cv::Size s(ImgRGBA.cols, ImgRGBA.rows);

			FPackNode* Node = Root.Insert(s);
			if (!Node)
			{
				NextRemaining.Add(idx);
				continue;
			}

			// convert RGBA -> BGRA for storing in atlas (if needed)
			cv::Mat ImgBGRA;
			if (ImgRGBA.channels() == 4) {
				cv::cvtColor(ImgRGBA, ImgBGRA, cv::COLOR_RGBA2BGRA);
			}
			else if (ImgRGBA.channels() == 3) {
				cv::cvtColor(ImgRGBA, ImgBGRA, cv::COLOR_BGR2BGRA);
			}
			else {
				cv::Mat tmp;
				cv::cvtColor(ImgRGBA, tmp, cv::COLOR_GRAY2BGRA);
				ImgBGRA = tmp;
			}

			cv::Rect r = Node->Rect;
			ImgBGRA.copyTo(Atlas(r));

			OutRects[idx] = FIntRect(r.x, r.y, r.width, r.height);
			PlacedIndices.Add(idx);
		}

		OutAtlases.Add(Atlas.clone()); // store atlas
		OutAtlasImageLists.Add(PlacedIndices);

		Remaining = MoveTemp(NextRemaining);
	}
}
//TODO: 传软引用路径
bool UAtlasPackBlueprintLibrary::WriteAtlasJsonToFile(const FString& SaveDir, const TArray<cv::Mat>& Atlases, const TArray<TArray<int32>>& AtlasImageLists, const TArray<FIntRect>& ImageRects, const TArray<FString>& ImageNames)
{
	TSharedPtr<FJsonObject> RootObj = MakeShared<FJsonObject>();
	TArray<TSharedPtr<FJsonValue>> AtlasArray;

	for (int a = 0; a < Atlases.Num(); ++a)
	{
		TSharedPtr<FJsonObject> AtlasObj = MakeShared<FJsonObject>();
		FString AtlasFile = FString::Printf(TEXT("atlas_%d.png"), a);
		AtlasObj->SetStringField(TEXT("atlas_file"), AtlasFile);

		TArray<TSharedPtr<FJsonValue>> MapsArray;
		for (int32 idx : AtlasImageLists[a])
		{
			if (!ImageNames.IsValidIndex(idx)) continue;
			TSharedPtr<FJsonObject> MapObj = MakeShared<FJsonObject>();
			MapObj->SetStringField(TEXT("source"), ImageNames[idx]);

			const FIntRect& R = ImageRects[idx];
			double u = double(R.Min.X) / double(Atlases[a].cols);
			double v = double(R.Min.Y) / double(Atlases[a].rows);
			double su = double(R.Width()) / double(Atlases[a].cols);
			double sv = double(R.Height()) / double(Atlases[a].rows);

			TArray<TSharedPtr<FJsonValue>> UVOff;
			UVOff.Add(MakeShared<FJsonValueNumber>(u));
			UVOff.Add(MakeShared<FJsonValueNumber>(v));
			MapObj->SetArrayField(TEXT("uv_offset"), UVOff);

			TArray<TSharedPtr<FJsonValue>> UVScale;
			UVScale.Add(MakeShared<FJsonValueNumber>(su));
			UVScale.Add(MakeShared<FJsonValueNumber>(sv));
			MapObj->SetArrayField(TEXT("uv_scale"), UVScale);

			TArray<TSharedPtr<FJsonValue>> Prect;
			Prect.Add(MakeShared<FJsonValueNumber>(R.Min.X));
			Prect.Add(MakeShared<FJsonValueNumber>(R.Min.Y));
			Prect.Add(MakeShared<FJsonValueNumber>(R.Width()));
			Prect.Add(MakeShared<FJsonValueNumber>(R.Height()));
			MapObj->SetArrayField(TEXT("pixel_rect"), Prect);

			MapsArray.Add(MakeShared<FJsonValueObject>(MapObj));
		}

		AtlasObj->SetArrayField(TEXT("mappings"), MapsArray);
		AtlasArray.Add(MakeShared<FJsonValueObject>(AtlasObj));
	}

	RootObj->SetArrayField(TEXT("atlases"), AtlasArray);

	// Serialize
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	if (!FJsonSerializer::Serialize(RootObj.ToSharedRef(), Writer)) return false;

	// ensure dir
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	PlatformFile.CreateDirectoryTree(*SaveDir);

	FString JsonPath = FPaths::Combine(SaveDir, TEXT("atlas_layout.json"));
	return FFileHelper::SaveStringToFile(OutputString, *JsonPath);
}
// TODO: 法线 mask等
// TODO: 需要将图集引用保存到data asset中
TArray<UTexture2D*>  UAtlasPackBlueprintLibrary::CombineTexturesToAtlas(const TArray<UTexture2D*>& Textures, UAtlasTextureDataAsset* OutDataAsset, bool bSavePNG, bool bSaveJSON, const FString& SaveDirectory, int32 AtlasSize, TextureMipGenSettings MipGenSetting)
{
	TArray<UTexture2D*> AtlasTextures;
	if (Textures.Num() == 0) return AtlasTextures;
	if (AtlasSize <= 0) return AtlasTextures;
	auto IsPow2 = [](int32 v) { return v > 0 && (v & (v - 1)) == 0; };
	if (!IsPow2(AtlasSize)) {
		UE_LOG(LogTemp, Warning, TEXT("AtlasSize must be power-of-two"));
		return AtlasTextures;
	}


	// 1) convert to cv::Mat (RGBA)
	TArray<cv::Mat> Mats;
	TArray<FString> Names;
	Mats.Reserve(Textures.Num());
	Names.Reserve(Textures.Num());

	for (UTexture2D* Tex : Textures) {
		if (!Tex) continue;
		cv::Mat mat = UOpenCVBlueprintFunctionLibrary::ConvertTextureToMat(Tex); // returns RGBA Todo:support other types
		if (mat.empty()) {
			UE_LOG(LogTemp, Warning, TEXT("ConvertTextureToMat failed: %s"), *GetNameSafe(Tex));
			continue;
		}
		// ensure 4 channels RGBA
		if (mat.channels() == 3) cv::cvtColor(mat, mat, cv::COLOR_BGR2RGBA);
		if (mat.channels() == 1) cv::cvtColor(mat, mat, cv::COLOR_GRAY2RGBA);

		Mats.Add(mat);
		Names.Add(Tex->GetPathName());
	}

	if (Mats.Num() == 0) return AtlasTextures;

	// 2) pack into atlases
	TArray<cv::Mat> Atlases;
	TArray<TArray<int32>> AtlasesImageLists;
	TArray<FIntRect> ImageRects; 
	ImageRects.Init(FIntRect(-1, -1, 0, 0), Mats.Num());

	PackMatsIntoAtlases_QuadTree(Mats, AtlasSize, Atlases, AtlasesImageLists, ImageRects);

	// 3) write atlases PNGs to disk and create transient UTexture2D, fill OutDataAsset
	FString FullSaveDir = SaveDirectory;
	if (FullSaveDir.IsEmpty()) FullSaveDir = FPaths::ProjectSavedDir();
	FullSaveDir = FPaths::ConvertRelativePathToFull(FullSaveDir);
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	PlatformFile.CreateDirectoryTree(*FullSaveDir);

	// prepare OutDataAsset
	if (OutDataAsset) {
		OutDataAsset->AtlasTextureMappings.Empty();
	}


	for (int32 a = 0; a < Atlases.Num(); ++a)
	{
		if (bSavePNG)
		{
			// save PNG
			FString AtlasFileName = FString::Printf(TEXT("atlas_%d.png"), a);
			FString AtlasFullPath = FPaths::Combine(FullSaveDir, AtlasFileName);
			std::string AtlasAnsi = TCHAR_TO_UTF8(*AtlasFullPath);
			// Atlases[a] is BGRA already, write directly
			cv::imwrite(AtlasAnsi, Atlases[a]);
		}
		
		// create transient UE texture
		int32 W = Atlases[a].cols;
		int32 H = Atlases[a].rows;
		UTexture2D* NewTex = UTexture2D::CreateTransient(W, H, PF_B8G8R8A8);
		if (!NewTex) continue;
		NewTex->NeverStream = true;
		NewTex->MipGenSettings = MipGenSetting;
		NewTex->SRGB = false;
		NewTex->CompressionSettings = TC_Default;

		FTexture2DMipMap& Mip0 = NewTex->GetPlatformData()->Mips[0];
		void* Dest = Mip0.BulkData.Lock(LOCK_READ_WRITE);
		if (Atlases[a].isContinuous()) {
			FMemory::Memcpy(Dest, Atlases[a].data, W * H * 4);
		}
		else {
			uint8* dst8 = (uint8*)Dest;
			for (int y = 0; y < H; ++y)
				FMemory::Memcpy(dst8 + y * W * 4, Atlases[a].ptr(y), W * 4);
		}
		Mip0.BulkData.Unlock();
		NewTex->UpdateResource();
		AtlasTextures.Add(NewTex);

		// fill OutDataAsset mapping entry
		if (OutDataAsset) {
			FAtlasMapping mapping;
			mapping.AtlasTexture = NewTex;
			mapping.Mappings.Empty();

			for (int32 idx : AtlasesImageLists[a]) {
				if (!Names.IsValidIndex(idx)) continue;
				FInTextureInfo info;
				info.SourceTexturePath = FSoftObjectPath(Names[idx]);
				// default channel RGBA (you can change logic to detect)
				info.Channel = TEnumAsByte<EAtlasChannel>(EAtlasChannel::RGBA);
				const FIntRect& R = ImageRects[idx];
				info.UVOffset = FVector2D((float)R.Min.X / (float)W, (float)R.Min.Y / (float)H);
				info.UVScale = FVector2D((float)R.Width() / (float)W, (float)R.Height() / (float)H);
				mapping.Mappings.Add(info);
			}

			OutDataAsset->AtlasTextureMappings.Add(mapping);
		}
	}

	if (bSaveJSON)
	{
		// 4) write JSON layout
		bool bJsonOk = WriteAtlasJsonToFile(FullSaveDir, Atlases, AtlasesImageLists, ImageRects, Names);
		if (!bJsonOk) {
			UE_LOG(LogTemp, Warning, TEXT("Failed to write atlas JSON to %s"), *FullSaveDir);
		}

	}

	// 5) return first created texture (or nullptr)
	return AtlasTextures;
}
