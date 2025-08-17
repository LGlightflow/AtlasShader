// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlasCVUtil/Public/AtlasPackBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlasPackBlueprintLibrary() {}

// Begin Cross Module References
ATLASCVUTIL_API UClass* Z_Construct_UClass_UAtlasPackBlueprintLibrary();
ATLASCVUTIL_API UClass* Z_Construct_UClass_UAtlasPackBlueprintLibrary_NoRegister();
ATLASSHADER_API UClass* Z_Construct_UClass_UAtlasTextureDataAsset_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
UPackage* Z_Construct_UPackage__Script_AtlasCVUtil();
// End Cross Module References

// Begin Class UAtlasPackBlueprintLibrary Function CombineTexturesToAtlas
struct Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics
{
	struct AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms
	{
		TArray<UTexture2D*> Textures;
		UAtlasTextureDataAsset* OutDataAsset;
		bool bSavePNG;
		bool bSaveJSON;
		FString SaveDirectory;
		int32 AtlasSize;
		int32 Padding;
		TEnumAsByte<TextureMipGenSettings> MipGenSetting;
		bool bSRGB;
		TEnumAsByte<TextureCompressionSettings> CompressionSetting;
		TArray<UTexture2D*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// optional - pass nullptr to skip\n// local folder to write png/json\n" },
#endif
		{ "CPP_Default_AtlasSize", "1024" },
		{ "CPP_Default_bSRGB", "true" },
		{ "CPP_Default_CompressionSetting", "TC_Default" },
		{ "CPP_Default_MipGenSetting", "TMGS_Sharpen4" },
		{ "CPP_Default_Padding", "1" },
		{ "ModuleRelativePath", "Public/AtlasPackBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "optional - pass nullptr to skip\nlocal folder to write png/json" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDataAsset;
	static void NewProp_bSavePNG_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavePNG;
	static void NewProp_bSaveJSON_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveJSON;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AtlasSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Padding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipGenSetting;
	static void NewProp_bSRGB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSRGB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSetting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_OutDataAsset = { "OutDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms, OutDataAsset), Z_Construct_UClass_UAtlasTextureDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSavePNG_SetBit(void* Obj)
{
	((AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms*)Obj)->bSavePNG = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSavePNG = { "bSavePNG", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms), &Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSavePNG_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSaveJSON_SetBit(void* Obj)
{
	((AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms*)Obj)->bSaveJSON = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSaveJSON = { "bSaveJSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms), &Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSaveJSON_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms, SaveDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveDirectory_MetaData), NewProp_SaveDirectory_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_AtlasSize = { "AtlasSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms, AtlasSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms, Padding), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_MipGenSetting = { "MipGenSetting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms, MipGenSetting), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(0, nullptr) }; // 3164791778
void Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSRGB_SetBit(void* Obj)
{
	((AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms*)Obj)->bSRGB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSRGB = { "bSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms), &Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSRGB_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_CompressionSetting = { "CompressionSetting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms, CompressionSetting), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(0, nullptr) }; // 2977833603
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_Textures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_OutDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSavePNG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSaveJSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_SaveDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_AtlasSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_Padding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_MipGenSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_bSRGB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_CompressionSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlasPackBlueprintLibrary, nullptr, "CombineTexturesToAtlas", nullptr, nullptr, Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::AtlasPackBlueprintLibrary_eventCombineTexturesToAtlas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtlasPackBlueprintLibrary::execCombineTexturesToAtlas)
{
	P_GET_TARRAY_REF(UTexture2D*,Z_Param_Out_Textures);
	P_GET_OBJECT(UAtlasTextureDataAsset,Z_Param_OutDataAsset);
	P_GET_UBOOL(Z_Param_bSavePNG);
	P_GET_UBOOL(Z_Param_bSaveJSON);
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveDirectory);
	P_GET_PROPERTY(FIntProperty,Z_Param_AtlasSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_Padding);
	P_GET_PROPERTY(FByteProperty,Z_Param_MipGenSetting);
	P_GET_UBOOL(Z_Param_bSRGB);
	P_GET_PROPERTY(FByteProperty,Z_Param_CompressionSetting);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UTexture2D*>*)Z_Param__Result=UAtlasPackBlueprintLibrary::CombineTexturesToAtlas(Z_Param_Out_Textures,Z_Param_OutDataAsset,Z_Param_bSavePNG,Z_Param_bSaveJSON,Z_Param_SaveDirectory,Z_Param_AtlasSize,Z_Param_Padding,TextureMipGenSettings(Z_Param_MipGenSetting),Z_Param_bSRGB,TextureCompressionSettings(Z_Param_CompressionSetting));
	P_NATIVE_END;
}
// End Class UAtlasPackBlueprintLibrary Function CombineTexturesToAtlas

// Begin Class UAtlasPackBlueprintLibrary Function RebindAtlasTexturesFromPaths
struct Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AtlasPackBlueprintLibrary_eventRebindAtlasTexturesFromPaths_Parms
	{
		UAtlasTextureDataAsset* InDataAsset;
		TArray<FSoftObjectPath> AtlasTexturePaths;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlasPackBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasTexturePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasTexturePaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AtlasTexturePaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::NewProp_InDataAsset = { "InDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtlasPackBlueprintLibrary_eventRebindAtlasTexturesFromPaths_Parms, InDataAsset), Z_Construct_UClass_UAtlasTextureDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::NewProp_AtlasTexturePaths_Inner = { "AtlasTexturePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::NewProp_AtlasTexturePaths = { "AtlasTexturePaths", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtlasPackBlueprintLibrary_eventRebindAtlasTexturesFromPaths_Parms, AtlasTexturePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasTexturePaths_MetaData), NewProp_AtlasTexturePaths_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::NewProp_InDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::NewProp_AtlasTexturePaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::NewProp_AtlasTexturePaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlasPackBlueprintLibrary, nullptr, "RebindAtlasTexturesFromPaths", nullptr, nullptr, Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::AtlasPackBlueprintLibrary_eventRebindAtlasTexturesFromPaths_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::AtlasPackBlueprintLibrary_eventRebindAtlasTexturesFromPaths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtlasPackBlueprintLibrary::execRebindAtlasTexturesFromPaths)
{
	P_GET_OBJECT(UAtlasTextureDataAsset,Z_Param_InDataAsset);
	P_GET_TARRAY_REF(FSoftObjectPath,Z_Param_Out_AtlasTexturePaths);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAtlasPackBlueprintLibrary::RebindAtlasTexturesFromPaths(Z_Param_InDataAsset,Z_Param_Out_AtlasTexturePaths);
	P_NATIVE_END;
}
// End Class UAtlasPackBlueprintLibrary Function RebindAtlasTexturesFromPaths

// Begin Class UAtlasPackBlueprintLibrary
void UAtlasPackBlueprintLibrary::StaticRegisterNativesUAtlasPackBlueprintLibrary()
{
	UClass* Class = UAtlasPackBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CombineTexturesToAtlas", &UAtlasPackBlueprintLibrary::execCombineTexturesToAtlas },
		{ "RebindAtlasTexturesFromPaths", &UAtlasPackBlueprintLibrary::execRebindAtlasTexturesFromPaths },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtlasPackBlueprintLibrary);
UClass* Z_Construct_UClass_UAtlasPackBlueprintLibrary_NoRegister()
{
	return UAtlasPackBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UAtlasPackBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AtlasPackBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AtlasPackBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlasPackBlueprintLibrary_CombineTexturesToAtlas, "CombineTexturesToAtlas" }, // 308424627
		{ &Z_Construct_UFunction_UAtlasPackBlueprintLibrary_RebindAtlasTexturesFromPaths, "RebindAtlasTexturesFromPaths" }, // 3436510702
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlasPackBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAtlasPackBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AtlasCVUtil,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtlasPackBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtlasPackBlueprintLibrary_Statics::ClassParams = {
	&UAtlasPackBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtlasPackBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtlasPackBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtlasPackBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UAtlasPackBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtlasPackBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAtlasPackBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtlasPackBlueprintLibrary.OuterSingleton;
}
template<> ATLASCVUTIL_API UClass* StaticClass<UAtlasPackBlueprintLibrary>()
{
	return UAtlasPackBlueprintLibrary::StaticClass();
}
UAtlasPackBlueprintLibrary::UAtlasPackBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlasPackBlueprintLibrary);
UAtlasPackBlueprintLibrary::~UAtlasPackBlueprintLibrary() {}
// End Class UAtlasPackBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtlasPackBlueprintLibrary, UAtlasPackBlueprintLibrary::StaticClass, TEXT("UAtlasPackBlueprintLibrary"), &Z_Registration_Info_UClass_UAtlasPackBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtlasPackBlueprintLibrary), 3658599292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_603580553(TEXT("/Script/AtlasCVUtil"),
	Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
