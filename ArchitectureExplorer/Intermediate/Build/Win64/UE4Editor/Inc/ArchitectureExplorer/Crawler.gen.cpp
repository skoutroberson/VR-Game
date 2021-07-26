// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Crawler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrawler() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ACrawler_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ACrawler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACrawler::StaticRegisterNativesACrawler()
	{
	}
	UClass* Z_Construct_UClass_ACrawler_NoRegister()
	{
		return ACrawler::StaticClass();
	}
	struct Z_Construct_UClass_ACrawler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrawlerRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrawlerRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Body;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrawler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrawler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Crawler.h" },
		{ "ModuleRelativePath", "Crawler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrawler_Statics::NewProp_CrawlerRoot_MetaData[] = {
		{ "Category", "Crawler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Crawler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrawler_Statics::NewProp_CrawlerRoot = { "CrawlerRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrawler, CrawlerRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrawler_Statics::NewProp_CrawlerRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrawler_Statics::NewProp_CrawlerRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrawler_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Crawler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Crawler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrawler_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrawler, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrawler_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrawler_Statics::NewProp_Body_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrawler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrawler_Statics::NewProp_CrawlerRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrawler_Statics::NewProp_Body,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrawler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrawler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrawler_Statics::ClassParams = {
		&ACrawler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACrawler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrawler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrawler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrawler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrawler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrawler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrawler, 3041384569);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ACrawler>()
	{
		return ACrawler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrawler(Z_Construct_UClass_ACrawler, &ACrawler::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ACrawler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrawler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
