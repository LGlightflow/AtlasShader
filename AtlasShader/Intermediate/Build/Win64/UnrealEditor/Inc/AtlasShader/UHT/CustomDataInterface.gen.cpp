// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlasShader/Public/Interface/CustomDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomDataInterface() {}

// Begin Cross Module References
ATLASSHADER_API UClass* Z_Construct_UClass_UCustomDataInterface();
ATLASSHADER_API UClass* Z_Construct_UClass_UCustomDataInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AtlasShader();
// End Cross Module References

// Begin Interface UCustomDataInterface
void UCustomDataInterface::StaticRegisterNativesUCustomDataInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomDataInterface);
UClass* Z_Construct_UClass_UCustomDataInterface_NoRegister()
{
	return UCustomDataInterface::StaticClass();
}
struct Z_Construct_UClass_UCustomDataInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interface/CustomDataInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICustomDataInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomDataInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AtlasShader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomDataInterface_Statics::ClassParams = {
	&UCustomDataInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomDataInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomDataInterface()
{
	if (!Z_Registration_Info_UClass_UCustomDataInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomDataInterface.OuterSingleton, Z_Construct_UClass_UCustomDataInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomDataInterface.OuterSingleton;
}
template<> ATLASSHADER_API UClass* StaticClass<UCustomDataInterface>()
{
	return UCustomDataInterface::StaticClass();
}
UCustomDataInterface::UCustomDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomDataInterface);
UCustomDataInterface::~UCustomDataInterface() {}
// End Interface UCustomDataInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomDataInterface, UCustomDataInterface::StaticClass, TEXT("UCustomDataInterface"), &Z_Registration_Info_UClass_UCustomDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomDataInterface), 3014976396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_3951808616(TEXT("/Script/AtlasShader"),
	Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
