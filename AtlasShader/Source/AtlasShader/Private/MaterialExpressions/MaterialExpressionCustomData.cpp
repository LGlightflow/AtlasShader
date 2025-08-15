// Fill out your copyright notice in the Description page of Project Settings.


#include "MaterialExpressions/MaterialExpressionCustomData.h"
#include "MaterialCompiler.h"
#include "MaterialHLSLGenerator.h"

#define LOCTEXT_NAMESPACE "MaterialExpressionCustomData"


///////////////////////////////////////////////////////////////////////////////
// Float
///////////////////////////////////////////////////////////////////////////////

UMaterialExpressionCustomData::UMaterialExpressionCustomData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITORONLY_DATA
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		FText NAME_Custom;
		FConstructorStatics()
			: NAME_Custom(LOCTEXT("Custom", "Custom"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	MenuCategories.Add(ConstructorStatics.NAME_Custom);

	bShaderInputData = true;
#endif
}


int32 UMaterialExpressionCustomData::Compile(FMaterialCompiler* Compiler, int32 OutputIndex)
{
	int32 DefaultArgument = DefaultValue.GetTracedInput().Expression ? DefaultValue.Compile(Compiler) : Compiler->Constant(ConstDefaultValue);
	return Compiler->CustomPrimitiveData(OutputIndex, EMaterialValueType::MCT_Float); //HLSL
	//return Compiler->PerInstanceCustomData(DataIndex, DefaultArgument);
}


void UMaterialExpressionCustomData::GetCaption(TArray<FString>& OutCaptions) const
{
	OutCaptions.Add(FString::Printf(TEXT("Plugin_PrimitiveCustomData_[%d]"), DataIndex));
}


///////////////////////////////////////////////////////////////////////////////
// Float4
///////////////////////////////////////////////////////////////////////////////

UMaterialExpressionCustomDataFloat4::UMaterialExpressionCustomDataFloat4(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITORONLY_DATA
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		FText NAME_Custom;
		FConstructorStatics()
			: NAME_Custom(LOCTEXT("Custom", "Custom"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	MenuCategories.Add(ConstructorStatics.NAME_Custom);

	bShaderInputData = true;
#endif
}

int32 UMaterialExpressionCustomDataFloat4::Compile(FMaterialCompiler* Compiler, int32 OutputIndex)
{
	int32 DefaultArgument = DefaultValue.GetTracedInput().Expression ? DefaultValue.Compile(Compiler) : Compiler->Constant(ConstDefaultValue);
	return Compiler->CustomPrimitiveData(OutputIndex, EMaterialValueType::MCT_Float4);
	//return Compiler->PerInstanceCustomData(DataIndex, DefaultArgument);
}

void UMaterialExpressionCustomDataFloat4::GetCaption(TArray<FString>& OutCaptions) const
{
	OutCaptions.Add(FString::Printf(TEXT("Plugin_PrimitiveCustomDataFloat4_[%d]"), DataIndex));
}




///////////////////////////////////////////////////////////////////////////////
// 贴图
///////////////////////////////////////////////////////////////////////////////

UMaterialExpressionCustomDataTexture::UMaterialExpressionCustomDataTexture(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITORONLY_DATA
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		FText NAME_Custom;
		FConstructorStatics()
			: NAME_Custom(LOCTEXT("Custom", "Custom"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	MenuCategories.Add(ConstructorStatics.NAME_Custom);

	bShaderInputData = true;
#endif
}

int32 UMaterialExpressionCustomDataTexture::Compile(FMaterialCompiler* Compiler, int32 OutputIndex)
{
	int32 DefaultArgument = DefaultValue.GetTracedInput().Expression ? DefaultValue.Compile(Compiler) : Compiler->Constant(ConstDefaultValue);
	return Compiler->CustomPrimitiveData(OutputIndex, EMaterialValueType::MCT_Texture2D);

}

void UMaterialExpressionCustomDataTexture::GetCaption(TArray<FString>& OutCaptions) const
{
	OutCaptions.Add(FString::Printf(TEXT("Plugin_PrimitiveCustomDataTexture_[%d]"), DataIndex));
}
