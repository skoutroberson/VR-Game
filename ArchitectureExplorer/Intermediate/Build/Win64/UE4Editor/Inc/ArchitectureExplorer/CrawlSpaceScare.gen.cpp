// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/CrawlSpaceScare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrawlSpaceScare() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ACrawlSpaceScare_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ACrawlSpaceScare();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AScare();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void ACrawlSpaceScare::StaticRegisterNativesACrawlSpaceScare()
	{
	}
	UClass* Z_Construct_UClass_ACrawlSpaceScare_NoRegister()
	{
		return ACrawlSpaceScare::StaticClass();
	}
	struct Z_Construct_UClass_ACrawlSpaceScare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrawlSpaceScare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScare,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrawlSpaceScare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CrawlSpaceScare.h" },
		{ "ModuleRelativePath", "CrawlSpaceScare.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrawlSpaceScare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrawlSpaceScare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrawlSpaceScare_Statics::ClassParams = {
		&ACrawlSpaceScare::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACrawlSpaceScare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrawlSpaceScare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrawlSpaceScare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrawlSpaceScare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrawlSpaceScare, 3420162943);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ACrawlSpaceScare>()
	{
		return ACrawlSpaceScare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrawlSpaceScare(Z_Construct_UClass_ACrawlSpaceScare, &ACrawlSpaceScare::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ACrawlSpaceScare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrawlSpaceScare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif