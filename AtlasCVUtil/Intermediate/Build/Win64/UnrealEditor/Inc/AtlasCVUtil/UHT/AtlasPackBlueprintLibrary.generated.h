// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtlasPackBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtlasTextureDataAsset;
class UTexture2D;
#ifdef ATLASCVUTIL_AtlasPackBlueprintLibrary_generated_h
#error "AtlasPackBlueprintLibrary.generated.h already included, missing '#pragma once' in AtlasPackBlueprintLibrary.h"
#endif
#define ATLASCVUTIL_AtlasPackBlueprintLibrary_generated_h

#define FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCombineTexturesToAtlas);


#define FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtlasPackBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAtlasPackBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAtlasPackBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AtlasCVUtil"), NO_API) \
	DECLARE_SERIALIZER(UAtlasPackBlueprintLibrary)


#define FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtlasPackBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAtlasPackBlueprintLibrary(UAtlasPackBlueprintLibrary&&); \
	UAtlasPackBlueprintLibrary(const UAtlasPackBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtlasPackBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtlasPackBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtlasPackBlueprintLibrary) \
	NO_API virtual ~UAtlasPackBlueprintLibrary();


#define FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_63_PROLOG
#define FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_66_INCLASS_NO_PURE_DECLS \
	FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ATLASCVUTIL_API UClass* StaticClass<class UAtlasPackBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bak_Bak77_Plugins_AtlasCVUtil_Source_AtlasCVUtil_Public_AtlasPackBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
