// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OpenCVBlueprintFunctionLibrary.h"
#include "Data/AtlasTextureDataAsset.h"
#include "AtlasPackBlueprintLibrary.generated.h"


struct FPackNode
{
	cv::Rect Rect;
	bool bUsed = false;
	std::unique_ptr<FPackNode> Child[2];

	FPackNode(int x, int y, int w, int h) : Rect(x, y, w, h) {}
	FPackNode* Insert(const cv::Size& ImgSize)
	{
		if (Child[0]) {
			if (FPackNode* n = Child[0]->Insert(ImgSize)) return n;
			return Child[1]->Insert(ImgSize);
		}

		if (bUsed) return nullptr;
		if (ImgSize.width > Rect.width || ImgSize.height > Rect.height) return nullptr;

		if (ImgSize.width == Rect.width && ImgSize.height == Rect.height) {
			bUsed = true;
			return this;
		}

		int dw = Rect.width - ImgSize.width;
		int dh = Rect.height - ImgSize.height;

		if (dw > dh) {
			Child[0] = std::make_unique<FPackNode>(Rect.x, Rect.y, ImgSize.width, Rect.height);
			Child[1] = std::make_unique<FPackNode>(Rect.x + ImgSize.width, Rect.y, Rect.width - ImgSize.width, Rect.height);
		}
		else {
			Child[0] = std::make_unique<FPackNode>(Rect.x, Rect.y, Rect.width, ImgSize.height);
			Child[1] = std::make_unique<FPackNode>(Rect.x, Rect.y + ImgSize.height, Rect.width, Rect.height - ImgSize.height);
		}

		return Child[0]->Insert(ImgSize);
	}
};


static void PackMatsIntoAtlases_QuadTree(
	const TArray<cv::Mat>& Mats,
	int32 AtlasSize,
	TArray<cv::Mat>& OutAtlases,
	TArray<TArray<int32>>& OutAtlasImageLists,
	TArray<FIntRect>& OutRects);



/**
 * 
 */
UCLASS()
class ATLASCVUTIL_API UAtlasPackBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	static bool WriteAtlasJsonToFile(
		const FString& SaveDir,
		const TArray<cv::Mat>& Atlases,
		const TArray<TArray<int32>>& AtlasImageLists,
		const TArray<FIntRect>& ImageRects,
		const TArray<FString>& ImageNames);

public:
	UFUNCTION(BlueprintCallable)
	static TArray<UTexture2D*>  CombineTexturesToAtlas(
		const TArray<UTexture2D*>& Textures,
		UAtlasTextureDataAsset* OutDataAsset,// optional - pass nullptr to skip
		bool bSavePNG,
		bool bSaveJSON,  
		const FString& SaveDirectory,                // local folder to write png/json
		int32 AtlasSize = 1024,
		int Padding = 1,
		TextureMipGenSettings MipGenSetting = TMGS_Sharpen4,
		bool bSRGB = true,
		TextureCompressionSettings CompressionSetting = TC_Default);

	UFUNCTION(BlueprintCallable)
	static void RebindAtlasTexturesFromPaths(UAtlasTextureDataAsset* InDataAsset, const TArray<FSoftObjectPath>& AtlasTexturePaths);
};
