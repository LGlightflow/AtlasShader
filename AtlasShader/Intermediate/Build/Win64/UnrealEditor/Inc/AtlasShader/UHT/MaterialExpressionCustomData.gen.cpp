// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlasShader/Public/MaterialExpressions/MaterialExpressionCustomData.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCustomData() {}

// Begin Cross Module References
ATLASSHADER_API UClass* Z_Construct_UClass_UMaterialExpressionCustomData();
ATLASSHADER_API UClass* Z_Construct_UClass_UMaterialExpressionCustomData_NoRegister();
ATLASSHADER_API UClass* Z_Construct_UClass_UMaterialExpressionCustomDataFloat4();
ATLASSHADER_API UClass* Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_NoRegister();
ATLASSHADER_API UClass* Z_Construct_UClass_UMaterialExpressionCustomDataTexture();
ATLASSHADER_API UClass* Z_Construct_UClass_UMaterialExpressionCustomDataTexture_NoRegister();
ATLASSHADER_API UEnum* Z_Construct_UEnum_AtlasShader_EFloatOutputType();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_AtlasShader();
// End Cross Module References

// Begin Enum EFloatOutputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFloatOutputType;
static UEnum* EFloatOutputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFloatOutputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFloatOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AtlasShader_EFloatOutputType, (UObject*)Z_Construct_UPackage__Script_AtlasShader(), TEXT("EFloatOutputType"));
	}
	return Z_Registration_Info_UEnum_EFloatOutputType.OuterSingleton;
}
template<> ATLASSHADER_API UEnum* StaticEnum<EFloatOutputType>()
{
	return EFloatOutputType_StaticEnum();
}
struct Z_Construct_UEnum_AtlasShader_EFloatOutputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Float1.DisplayName", "float1" },
		{ "Float1.Name", "EFloatOutputType::Float1" },
		{ "Float2.DisplayName", "float2" },
		{ "Float2.Name", "EFloatOutputType::Float2" },
		{ "Float3.DisplayName", "float3" },
		{ "Float3.Name", "EFloatOutputType::Float3" },
		{ "Float4.DisplayName", "float4" },
		{ "Float4.Name", "EFloatOutputType::Float4" },
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFloatOutputType::Float1", (int64)EFloatOutputType::Float1 },
		{ "EFloatOutputType::Float2", (int64)EFloatOutputType::Float2 },
		{ "EFloatOutputType::Float3", (int64)EFloatOutputType::Float3 },
		{ "EFloatOutputType::Float4", (int64)EFloatOutputType::Float4 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AtlasShader_EFloatOutputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AtlasShader,
	nullptr,
	"EFloatOutputType",
	"EFloatOutputType",
	Z_Construct_UEnum_AtlasShader_EFloatOutputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AtlasShader_EFloatOutputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AtlasShader_EFloatOutputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AtlasShader_EFloatOutputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AtlasShader_EFloatOutputType()
{
	if (!Z_Registration_Info_UEnum_EFloatOutputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFloatOutputType.InnerSingleton, Z_Construct_UEnum_AtlasShader_EFloatOutputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFloatOutputType.InnerSingleton;
}
// End Enum EFloatOutputType

// Begin Class UMaterialExpressionCustomData
void UMaterialExpressionCustomData::StaticRegisterNativesUMaterialExpressionCustomData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCustomData);
UClass* Z_Construct_UClass_UMaterialExpressionCustomData_NoRegister()
{
	return UMaterialExpressionCustomData::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionCustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressions/MaterialExpressionCustomData.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
		{ "RequiredInput", "false" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstDefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
		{ "OverridingInputProperty", "DefaultValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, meta = (ShowAsInputPin = \"Advanced\")*/" },
#endif
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", meta = (ShowAsInputPin = \"Advanced\")" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstDefaultValue;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCustomData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCustomData_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustomData, DefaultValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionCustomData_Statics::NewProp_ConstDefaultValue = { "ConstDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustomData, ConstDefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstDefaultValue_MetaData), NewProp_ConstDefaultValue_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionCustomData_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustomData, DataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataIndex_MetaData), NewProp_DataIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustomData_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustomData_Statics::NewProp_ConstDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustomData_Statics::NewProp_DataIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionCustomData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_AtlasShader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCustomData_Statics::ClassParams = {
	&UMaterialExpressionCustomData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionCustomData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomData_Statics::PropPointers),
	0,
	0x001020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionCustomData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionCustomData()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionCustomData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCustomData.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCustomData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionCustomData.OuterSingleton;
}
template<> ATLASSHADER_API UClass* StaticClass<UMaterialExpressionCustomData>()
{
	return UMaterialExpressionCustomData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCustomData);
UMaterialExpressionCustomData::~UMaterialExpressionCustomData() {}
// End Class UMaterialExpressionCustomData

// Begin Class UMaterialExpressionCustomDataFloat4
void UMaterialExpressionCustomDataFloat4::StaticRegisterNativesUMaterialExpressionCustomDataFloat4()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCustomDataFloat4);
UClass* Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_NoRegister()
{
	return UMaterialExpressionCustomDataFloat4::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressions/MaterialExpressionCustomData.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
		{ "RequiredInput", "false" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstDefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
		{ "OverridingInputProperty", "DefaultValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, meta = (ShowAsInputPin = \"Advanced\")*/" },
#endif
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", meta = (ShowAsInputPin = \"Advanced\")" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstDefaultValue;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCustomDataFloat4>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustomDataFloat4, DefaultValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::NewProp_ConstDefaultValue = { "ConstDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustomDataFloat4, ConstDefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstDefaultValue_MetaData), NewProp_ConstDefaultValue_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustomDataFloat4, DataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataIndex_MetaData), NewProp_DataIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::NewProp_ConstDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::NewProp_DataIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_AtlasShader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::ClassParams = {
	&UMaterialExpressionCustomDataFloat4::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::PropPointers),
	0,
	0x001020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionCustomDataFloat4()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionCustomDataFloat4.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCustomDataFloat4.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCustomDataFloat4_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionCustomDataFloat4.OuterSingleton;
}
template<> ATLASSHADER_API UClass* StaticClass<UMaterialExpressionCustomDataFloat4>()
{
	return UMaterialExpressionCustomDataFloat4::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCustomDataFloat4);
UMaterialExpressionCustomDataFloat4::~UMaterialExpressionCustomDataFloat4() {}
// End Class UMaterialExpressionCustomDataFloat4

// Begin Class UMaterialExpressionCustomDataTexture
void UMaterialExpressionCustomDataTexture::StaticRegisterNativesUMaterialExpressionCustomDataTexture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCustomDataTexture);
UClass* Z_Construct_UClass_UMaterialExpressionCustomDataTexture_NoRegister()
{
	return UMaterialExpressionCustomDataTexture::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressions/MaterialExpressionCustomData.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
		{ "RequiredInput", "false" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstDefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
		{ "OverridingInputProperty", "DefaultValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, meta = (ShowAsInputPin = \"Advanced\")*/" },
#endif
		{ "ModuleRelativePath", "Public/MaterialExpressions/MaterialExpressionCustomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", meta = (ShowAsInputPin = \"Advanced\")" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstDefaultValue;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCustomDataTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustomDataTexture, DefaultValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::NewProp_ConstDefaultValue = { "ConstDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustomDataTexture, ConstDefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstDefaultValue_MetaData), NewProp_ConstDefaultValue_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionCustomDataTexture, DataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataIndex_MetaData), NewProp_DataIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::NewProp_ConstDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::NewProp_DataIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_AtlasShader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::ClassParams = {
	&UMaterialExpressionCustomDataTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::PropPointers),
	0,
	0x001020B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionCustomDataTexture()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionCustomDataTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCustomDataTexture.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCustomDataTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionCustomDataTexture.OuterSingleton;
}
template<> ATLASSHADER_API UClass* StaticClass<UMaterialExpressionCustomDataTexture>()
{
	return UMaterialExpressionCustomDataTexture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCustomDataTexture);
UMaterialExpressionCustomDataTexture::~UMaterialExpressionCustomDataTexture() {}
// End Class UMaterialExpressionCustomDataTexture

// Begin Registration
struct Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_MaterialExpressions_MaterialExpressionCustomData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFloatOutputType_StaticEnum, TEXT("EFloatOutputType"), &Z_Registration_Info_UEnum_EFloatOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3888106566U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCustomData, UMaterialExpressionCustomData::StaticClass, TEXT("UMaterialExpressionCustomData"), &Z_Registration_Info_UClass_UMaterialExpressionCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCustomData), 1359137453U) },
		{ Z_Construct_UClass_UMaterialExpressionCustomDataFloat4, UMaterialExpressionCustomDataFloat4::StaticClass, TEXT("UMaterialExpressionCustomDataFloat4"), &Z_Registration_Info_UClass_UMaterialExpressionCustomDataFloat4, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCustomDataFloat4), 1950092801U) },
		{ Z_Construct_UClass_UMaterialExpressionCustomDataTexture, UMaterialExpressionCustomDataTexture::StaticClass, TEXT("UMaterialExpressionCustomDataTexture"), &Z_Registration_Info_UClass_UMaterialExpressionCustomDataTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCustomDataTexture), 1431549739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_MaterialExpressions_MaterialExpressionCustomData_h_601047309(TEXT("/Script/AtlasShader"),
	Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_MaterialExpressions_MaterialExpressionCustomData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_MaterialExpressions_MaterialExpressionCustomData_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_MaterialExpressions_MaterialExpressionCustomData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_MaterialExpressions_MaterialExpressionCustomData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
