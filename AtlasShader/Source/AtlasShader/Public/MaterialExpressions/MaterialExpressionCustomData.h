// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionCustomData.generated.h"

UENUM(BlueprintType)
enum class EFloatOutputType : uint8
{
	Float1 UMETA(DisplayName = "float1"),
	Float2 UMETA(DisplayName = "float2"),
	Float3 UMETA(DisplayName = "float3"),
	Float4 UMETA(DisplayName = "float4"),
};

/**
 * 
 */
UCLASS(collapsecategories, hidecategories = Object)
class ATLASSHADER_API UMaterialExpressionCustomData : public UMaterialExpression
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(meta = (RequiredInput = "false", ToolTip = "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided."))
	FExpressionInput DefaultValue;

	UPROPERTY(EditAnywhere, Category = MaterialExpressionPerInstanceCustomData, meta = (OverridingInputProperty = "DefaultValue"))
	float ConstDefaultValue;

	UPROPERTY(EditAnywhere, Category = MaterialExpressionPerInstanceCustomData/*, meta = (ShowAsInputPin = "Advanced")*/)
	uint32 DataIndex;

	//~ Begin UMaterialExpression Interface
#if WITH_EDITOR
	virtual int32 Compile(class FMaterialCompiler* Compiler, int32 OutputIndex) override;
	virtual void GetCaption(TArray<FString>& OutCaptions) const override;

	//virtual bool GenerateHLSLExpression(FMaterialHLSLGenerator& Generator, UE::HLSLTree::FScope& Scope, int32 OutputIndex, UE::HLSLTree::FExpression const*& OutExpression) const override;
#endif
	//~ End UMaterialExpression Interface
};

UCLASS(collapsecategories, hidecategories = Object)
class ATLASSHADER_API UMaterialExpressionCustomDataFloat4 : public UMaterialExpression
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(meta = (RequiredInput = "false", ToolTip = "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided."))
	FExpressionInput DefaultValue;

	UPROPERTY(EditAnywhere, Category = MaterialExpressionPerInstanceCustomData, meta = (OverridingInputProperty = "DefaultValue"))
	float ConstDefaultValue;

	UPROPERTY(EditAnywhere, Category = MaterialExpressionPerInstanceCustomData/*, meta = (ShowAsInputPin = "Advanced")*/)
	uint32 DataIndex;

	//~ Begin UMaterialExpression Interface
#if WITH_EDITOR
	virtual int32 Compile(class FMaterialCompiler* Compiler, int32 OutputIndex) override;
	virtual void GetCaption(TArray<FString>& OutCaptions) const override;

	//virtual bool GenerateHLSLExpression(FMaterialHLSLGenerator& Generator, UE::HLSLTree::FScope& Scope, int32 OutputIndex, UE::HLSLTree::FExpression const*& OutExpression) const override;
#endif
	//~ End UMaterialExpression Interface
};


UCLASS(collapsecategories, hidecategories = Object)
class ATLASSHADER_API UMaterialExpressionCustomDataTexture : public UMaterialExpression
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(meta = (RequiredInput = "false", ToolTip = "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided."))
	FExpressionInput DefaultValue;

	UPROPERTY(EditAnywhere, Category = MaterialExpressionPerInstanceCustomData, meta = (OverridingInputProperty = "DefaultValue"))
	float ConstDefaultValue;

	UPROPERTY(EditAnywhere, Category = MaterialExpressionPerInstanceCustomData/*, meta = (ShowAsInputPin = "Advanced")*/)
	uint32 DataIndex;

	//~ Begin UMaterialExpression Interface
#if WITH_EDITOR
	virtual int32 Compile(class FMaterialCompiler* Compiler, int32 OutputIndex) override;
	virtual void GetCaption(TArray<FString>& OutCaptions) const override;

	//virtual bool GenerateHLSLExpression(FMaterialHLSLGenerator& Generator, UE::HLSLTree::FScope& Scope, int32 OutputIndex, UE::HLSLTree::FExpression const*& OutExpression) const override;
#endif
	//~ End UMaterialExpression Interface
};
