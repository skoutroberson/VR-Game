// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Stage3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStage3() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage3_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage3();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void AStage3::StaticRegisterNativesAStage3()
	{
	}
	UClass* Z_Construct_UClass_AStage3_NoRegister()
	{
		return AStage3::StaticClass();
	}
	struct Z_Construct_UClass_AStage3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStage3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStage,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage3_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Stage3.h" },
		{ "ModuleRelativePath", "Stage3.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStage3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStage3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStage3_Statics::ClassParams = {
		&AStage3::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStage3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStage3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStage3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStage3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStage3, 4121676884);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AStage3>()
	{
		return AStage3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStage3(Z_Construct_UClass_AStage3, &AStage3::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AStage3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStage3);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
