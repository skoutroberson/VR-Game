// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/DogController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDogController() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADogController_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADogController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void ADogController::StaticRegisterNativesADogController()
	{
	}
	UClass* Z_Construct_UClass_ADogController_NoRegister()
	{
		return ADogController::StaticClass();
	}
	struct Z_Construct_UClass_ADogController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADogController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADogController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DogController.h" },
		{ "ModuleRelativePath", "DogController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADogController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADogController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADogController_Statics::ClassParams = {
		&ADogController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADogController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADogController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADogController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADogController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADogController, 1475062766);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ADogController>()
	{
		return ADogController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADogController(Z_Construct_UClass_ADogController, &ADogController::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ADogController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADogController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
