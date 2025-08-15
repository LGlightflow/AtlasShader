// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/CustomDataInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ATLASSHADER_CustomDataInterface_generated_h
#error "CustomDataInterface.generated.h already included, missing '#pragma once' in CustomDataInterface.h"
#endif
#define ATLASSHADER_CustomDataInterface_generated_h

#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ATLASSHADER_API UCustomDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCustomDataInterface(UCustomDataInterface&&); \
	UCustomDataInterface(const UCustomDataInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ATLASSHADER_API, UCustomDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomDataInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomDataInterface) \
	ATLASSHADER_API virtual ~UCustomDataInterface();


#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCustomDataInterface(); \
	friend struct Z_Construct_UClass_UCustomDataInterface_Statics; \
public: \
	DECLARE_CLASS(UCustomDataInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AtlasShader"), ATLASSHADER_API) \
	DECLARE_SERIALIZER(UCustomDataInterface)


#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICustomDataInterface() {} \
public: \
	typedef UCustomDataInterface UClassType; \
	typedef ICustomDataInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_12_PROLOG
#define FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ATLASSHADER_API UClass* StaticClass<class UCustomDataInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bak_Bak77_Plugins_AtlasShader_Source_AtlasShader_Public_Interface_CustomDataInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
