// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Stage4.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStage4() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage4_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage4();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void AStage4::StaticRegisterNativesAStage4()
	{
	}
	UClass* Z_Construct_UClass_AStage4_NoRegister()
	{
		return AStage4::StaticClass();
	}
	struct Z_Construct_UClass_AStage4_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStage4_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStage,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage4_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Stage4.h" },
		{ "ModuleRelativePath", "Stage4.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStage4_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStage4>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStage4_Statics::ClassParams = {
		&AStage4::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStage4_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStage4_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStage4()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStage4_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStage4, 1540926863);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AStage4>()
	{
		return AStage4::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStage4(Z_Construct_UClass_AStage4, &AStage4::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AStage4"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStage4);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
