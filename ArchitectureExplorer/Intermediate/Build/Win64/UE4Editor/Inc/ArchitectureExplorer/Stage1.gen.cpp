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
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage1_Statics::NewProp_Trigger0_MetaData[] = {
		{ "Category", "Stage1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Stage1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStage1_Statics::NewProp_Trigger0 = { "Trigger0", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStage1, Trigger0), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStage1_Statics::NewProp_Trigger0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStage1_Statics::NewProp_Trigger0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStage1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStage1_Statics::NewProp_Trigger0,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStage1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStage1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStage1_Statics::ClassParams = {
		&AStage1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStage1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStage1_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AStage1, 57702092);
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
