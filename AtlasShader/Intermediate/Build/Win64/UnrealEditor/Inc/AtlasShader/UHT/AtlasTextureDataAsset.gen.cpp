// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlasShader/Public/Data/AtlasTextureDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlasTextureDataAsset() {}

// Begin Cross Module References
ATLASSHADER_API UClass* Z_Construct_UClass_UAtlasTextureDataAsset();
ATLASSHADER_API UClass* Z_Construct_UClass_UAtlasTextureDataAsset_NoRegister();
ATLASSHADER_API UEnum* Z_Construct_UEnum_AtlasShader_EAtlasChannel();
ATLASSHADER_API UScriptStruct* Z_Construct_UScriptStruct_FAtlasMapping();
ATLASSHADER_API UScriptStruct* Z_Construct_UScriptStruct_FInTextureInfo();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_AtlasShader();
// End Cross Module References

// Begin Enum EAtlasChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtlasChannel;
static UEnum* EAtlasChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAtlasChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAtlasChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AtlasShader_EAtlasChannel, (UObject*)Z_Construct_UPackage__Script_AtlasShader(), TEXT("EAtlasChannel"));
	}
	return Z_Registration_Info_UEnum_EAtlasChannel.OuterSingleton;
}
template<> ATLASSHADER_API UEnum* StaticEnum<EAtlasChannel>()
{
	return EAtlasChannel_StaticEnum();
}
struct Z_Construct_UEnum_AtlasShader_EAtlasChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "A.Name", "A" },
		{ "B.Name", "B" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xda\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "G.Name", "G" },
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
		{ "R.Name", "R" },
		{ "RGB.Name", "RGB" },
		{ "RGBA.Name", "RGBA" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xda\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "R", (int64)R },
		{ "G", (int64)G },
		{ "B", (int64)B },
		{ "A", (int64)A },
		{ "RGB", (int64)RGB },
		{ "RGBA", (int64)RGBA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AtlasShader_EAtlasChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AtlasShader,
	nullptr,
	"EAtlasChannel",
	"EAtlasChannel",
	Z_Construct_UEnum_AtlasShader_EAtlasChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AtlasShader_EAtlasChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AtlasShader_EAtlasChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AtlasShader_EAtlasChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AtlasShader_EAtlasChannel()
{
	if (!Z_Registration_Info_UEnum_EAtlasChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtlasChannel.InnerSingleton, Z_Construct_UEnum_AtlasShader_EAtlasChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAtlasChannel.InnerSingleton;
}
// End Enum EAtlasChannel

// Begin ScriptStruct FInTextureInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InTextureInfo;
class UScriptStruct* FInTextureInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InTextureInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InTextureInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInTextureInfo, (UObject*)Z_Construct_UPackage__Script_AtlasShader(), TEXT("InTextureInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InTextureInfo.OuterSingleton;
}
template<> ATLASSHADER_API UScriptStruct* StaticStruct<FInTextureInfo>()
{
	return FInTextureInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInTextureInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTexturePath_MetaData[] = {
		{ "Category", "Atlas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Atlas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Texture2D\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture2D" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVOffset_MetaData[] = {
		{ "Category", "Atlas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// x = U Offset, y = V Offset\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "x = U Offset, y = V Offset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[] = {
		{ "Category", "Atlas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// x = U Scale, y = V Scale\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "x = U Scale, y = V Scale" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTexturePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInTextureInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInTextureInfo_Statics::NewProp_SourceTexturePath = { "SourceTexturePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInTextureInfo, SourceTexturePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTexturePath_MetaData), NewProp_SourceTexturePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInTextureInfo_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInTextureInfo, Channel), Z_Construct_UEnum_AtlasShader_EAtlasChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 2060684585
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInTextureInfo_Statics::NewProp_UVOffset = { "UVOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInTextureInfo, UVOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVOffset_MetaData), NewProp_UVOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInTextureInfo_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInTextureInfo, UVScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVScale_MetaData), NewProp_UVScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInTextureInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInTextureInfo_Statics::NewProp_SourceTexturePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInTextureInfo_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInTextureInfo_Statics::NewProp_UVOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInTextureInfo_Statics::NewProp_UVScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInTextureInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInTextureInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AtlasShader,
	nullptr,
	&NewStructOps,
	"InTextureInfo",
	Z_Construct_UScriptStruct_FInTextureInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInTextureInfo_Statics::PropPointers),
	sizeof(FInTextureInfo),
	alignof(FInTextureInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInTextureInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInTextureInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInTextureInfo()
{
	if (!Z_Registration_Info_UScriptStruct_InTextureInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InTextureInfo.InnerSingleton, Z_Construct_UScriptStruct_FInTextureInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InTextureInfo.InnerSingleton;
}
// End ScriptStruct FInTextureInfo

// Begin ScriptStruct FAtlasMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtlasMapping;
class UScriptStruct* FAtlasMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtlasMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtlasMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlasMapping, (UObject*)Z_Construct_UPackage__Script_AtlasShader(), TEXT("AtlasMapping"));
	}
	return Z_Registration_Info_UScriptStruct_AtlasMapping.OuterSingleton;
}
template<> ATLASSHADER_API UScriptStruct* StaticStruct<FAtlasMapping>()
{
	return FAtlasMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAtlasMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasTexture_MetaData[] = {
		{ "Category", "AtlasMapping" },
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mappings_MetaData[] = {
		{ "Category", "AtlasMapping" },
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AtlasTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Mappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlasMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtlasMapping_Statics::NewProp_AtlasTexture = { "AtlasTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtlasMapping, AtlasTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasTexture_MetaData), NewProp_AtlasTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlasMapping_Statics::NewProp_Mappings_Inner = { "Mappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInTextureInfo, METADATA_PARAMS(0, nullptr) }; // 1534853636
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlasMapping_Statics::NewProp_Mappings = { "Mappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAtlasMapping, Mappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mappings_MetaData), NewProp_Mappings_MetaData) }; // 1534853636
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlasMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlasMapping_Statics::NewProp_AtlasTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlasMapping_Statics::NewProp_Mappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlasMapping_Statics::NewProp_Mappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlasMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlasMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AtlasShader,
	nullptr,
	&NewStructOps,
	"AtlasMapping",
	Z_Construct_UScriptStruct_FAtlasMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlasMapping_Statics::PropPointers),
	sizeof(FAtlasMapping),
	alignof(FAtlasMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlasMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAtlasMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAtlasMapping()
{
	if (!Z_Registration_Info_UScriptStruct_AtlasMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtlasMapping.InnerSingleton, Z_Construct_UScriptStruct_FAtlasMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AtlasMapping.InnerSingleton;
}
// End ScriptStruct FAtlasMapping

// Begin Class UAtlasTextureDataAsset
void UAtlasTextureDataAsset::StaticRegisterNativesUAtlasTextureDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtlasTextureDataAsset);
UClass* Z_Construct_UClass_UAtlasTextureDataAsset_NoRegister()
{
	return UAtlasTextureDataAsset::StaticClass();
}
struct Z_Construct_UClass_UAtlasTextureDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/AtlasTextureDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasTextureMappings_MetaData[] = {
		{ "Category", "AtlasTextureDataAsset" },
		{ "ModuleRelativePath", "Public/Data/AtlasTextureDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasTextureMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AtlasTextureMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlasTextureDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtlasTextureDataAsset_Statics::NewProp_AtlasTextureMappings_Inner = { "AtlasTextureMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAtlasMapping, METADATA_PARAMS(0, nullptr) }; // 1917129237
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtlasTextureDataAsset_Statics::NewProp_AtlasTextureMappings = { "AtlasTextureMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtlasTextureDataAsset, AtlasTextureMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasTextureMappings_MetaData), NewProp_AtlasTextureMappings_MetaData) }; // 1917129237
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlasTextureDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlasTextureDataAsset_Statics::NewProp_AtlasTextureMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlasTextureDataAsset_Statics::NewProp_AtlasTextureMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtlasTextureDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtlasTextureDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AtlasShader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtlasTextureDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtlasTextureDataAsset_Statics::ClassParams = {
	&UAtlasTextureDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAtlasTextureDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtlasTextureDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtlasTextureDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtlasTextureDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtlasTextureDataAsset()
{
	if (!Z_Registration_Info_UClass_UAtlasTextureDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtlasTextureDataAsset.OuterSingleton, Z_Construct_UClass_UAtlasTextureDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtlasTextureDataAsset.OuterSingleton;
}
template<> ATLASSHADER_API UClass* StaticClass<UAtlasTextureDataAsset>()
{
	return UAtlasTextureDataAsset::StaticClass();
}
UAtlasTextureDataAsset::UAtlasTextureDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlasTextureDataAsset);
UAtlasTextureDataAsset::~UAtlasTextureDataAsset() {}
// End Class UAtlasTextureDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAtlasChannel_StaticEnum, TEXT("EAtlasChannel"), &Z_Registration_Info_UEnum_EAtlasChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2060684585U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInTextureInfo::StaticStruct, Z_Construct_UScriptStruct_FInTextureInfo_Statics::NewStructOps, TEXT("InTextureInfo"), &Z_Registration_Info_UScriptStruct_InTextureInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInTextureInfo), 1534853636U) },
		{ FAtlasMapping::StaticStruct, Z_Construct_UScriptStruct_FAtlasMapping_Statics::NewStructOps, TEXT("AtlasMapping"), &Z_Registration_Info_UScriptStruct_AtlasMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtlasMapping), 1917129237U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtlasTextureDataAsset, UAtlasTextureDataAsset::StaticClass, TEXT("UAtlasTextureDataAsset"), &Z_Registration_Info_UClass_UAtlasTextureDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtlasTextureDataAsset), 648835791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_4192147691(TEXT("/Script/AtlasShader"),
	Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
