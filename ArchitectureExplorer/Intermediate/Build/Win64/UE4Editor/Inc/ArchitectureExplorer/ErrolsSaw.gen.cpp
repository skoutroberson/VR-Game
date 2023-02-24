// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/ErrolsSaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrolsSaw() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolsSaw_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolsSaw();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void AErrolsSaw::StaticRegisterNativesAErrolsSaw()
	{
	}
	UClass* Z_Construct_UClass_AErrolsSaw_NoRegister()
	{
		return AErrolsSaw::StaticClass();
	}
	struct Z_Construct_UClass_AErrolsSaw_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AErrolsSaw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolsSaw_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ErrolsSaw.h" },
		{ "ModuleRelativePath", "ErrolsSaw.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AErrolsSaw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AErrolsSaw>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AErrolsSaw_Statics::ClassParams = {
		&AErrolsSaw::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AErrolsSaw_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolsSaw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AErrolsSaw()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AErrolsSaw_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AErrolsSaw, 2672346651);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AErrolsSaw>()
	{
		return AErrolsSaw::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AErrolsSaw(Z_Construct_UClass_AErrolsSaw, &AErrolsSaw::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AErrolsSaw"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AErrolsSaw);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
