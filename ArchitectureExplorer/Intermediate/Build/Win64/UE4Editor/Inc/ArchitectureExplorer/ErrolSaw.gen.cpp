// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/ErrolSaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrolSaw() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolSaw_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolSaw();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void AErrolSaw::StaticRegisterNativesAErrolSaw()
	{
	}
	UClass* Z_Construct_UClass_AErrolSaw_NoRegister()
	{
		return AErrolSaw::StaticClass();
	}
	struct Z_Construct_UClass_AErrolSaw_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AErrolSaw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolSaw_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ErrolSaw.h" },
		{ "ModuleRelativePath", "ErrolSaw.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AErrolSaw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AErrolSaw>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AErrolSaw_Statics::ClassParams = {
		&AErrolSaw::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AErrolSaw_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolSaw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AErrolSaw()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AErrolSaw_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AErrolSaw, 2598362932);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AErrolSaw>()
	{
		return AErrolSaw::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AErrolSaw(Z_Construct_UClass_AErrolSaw, &AErrolSaw::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AErrolSaw"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AErrolSaw);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
