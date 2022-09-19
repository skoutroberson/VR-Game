// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Stage1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStage1() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage1_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage1();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void AStage1::StaticRegisterNativesAStage1()
	{
	}
	UClass* Z_Construct_UClass_AStage1_NoRegister()
	{
		return AStage1::StaticClass();
	}
	struct Z_Construct_UClass_AStage1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStage1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStage,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Stage1.h" },
		{ "ModuleRelativePath", "Stage1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStage1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStage1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStage1_Statics::ClassParams = {
		&AStage1::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStage1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStage1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStage1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStage1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStage1, 3532100035);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AStage1>()
	{
		return AStage1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStage1(Z_Construct_UClass_AStage1, &AStage1::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AStage1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStage1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
