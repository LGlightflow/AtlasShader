// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AtlasTextureDataAsset.generated.h"

// µÚ¶þÖÖ
UENUM(BlueprintType)
enum EAtlasChannel : uint8
{
	R,
	G,
	B,
	A,
	RGB,
	RGBA
};
/**
 * 
 */
USTRUCT(BlueprintType)
struct FInTextureInfo
{
	GENERATED_BODY()

	// 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atlas")
	FSoftObjectPath SourceTexturePath; //Texture2D

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Atlas")
	TEnumAsByte<EAtlasChannel> Channel;

	// x = U Offset, y = V Offset
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atlas")
	FVector2D UVOffset = FVector2D::ZeroVector;

	// x = U Scale, y = V Scale
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atlas")
	FVector2D UVScale = FVector2D(1.0f, 1.0f);

};


USTRUCT(BlueprintType)
struct FAtlasMapping
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* AtlasTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInTextureInfo> Mappings;
};


UCLASS(BlueprintType)
class ATLASSHADER_API UAtlasTextureDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAtlasMapping> AtlasTextureMappings;
};
