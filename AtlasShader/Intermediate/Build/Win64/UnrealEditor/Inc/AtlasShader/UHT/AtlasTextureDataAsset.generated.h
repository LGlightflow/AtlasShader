// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/AtlasTextureDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ATLASSHADER_AtlasTextureDataAsset_generated_h
#error "AtlasTextureDataAsset.generated.h already included, missing '#pragma once' in AtlasTextureDataAsset.h"
#endif
#define ATLASSHADER_AtlasTextureDataAsset_generated_h

#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInTextureInfo_Statics; \
	ATLASSHADER_API static class UScriptStruct* StaticStruct();


template<> ATLASSHADER_API UScriptStruct* StaticStruct<struct FInTextureInfo>();

#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtlasMapping_Statics; \
	ATLASSHADER_API static class UScriptStruct* StaticStruct();


template<> ATLASSHADER_API UScriptStruct* StaticStruct<struct FAtlasMapping>();

#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtlasTextureDataAsset(); \
	friend struct Z_Construct_UClass_UAtlasTextureDataAsset_Statics; \
public: \
	DECLARE_CLASS(UAtlasTextureDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AtlasShader"), NO_API) \
	DECLARE_SERIALIZER(UAtlasTextureDataAsset)


#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtlasTextureDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtlasTextureDataAsset(UAtlasTextureDataAsset&&); \
	UAtlasTextureDataAsset(const UAtlasTextureDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtlasTextureDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtlasTextureDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtlasTextureDataAsset) \
	NO_API virtual ~UAtlasTextureDataAsset();


#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_59_PROLOG
#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_62_INCLASS_NO_PURE_DECLS \
	FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ATLASSHADER_API UClass* StaticClass<class UAtlasTextureDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Data_AtlasTextureDataAsset_h


#define FOREACH_ENUM_EATLASCHANNEL(op) \
	op(R) \
	op(G) \
	op(B) \
	op(A) \
	op(RGB) \
	op(RGBA) 

enum EAtlasChannel : uint8;
template<> ATLASSHADER_API UEnum* StaticEnum<EAtlasChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
