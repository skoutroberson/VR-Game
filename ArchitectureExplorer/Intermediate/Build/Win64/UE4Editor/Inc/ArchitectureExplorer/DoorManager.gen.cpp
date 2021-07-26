// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/DoorManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorManager() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADoorManager_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADoorManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void ADoorManager::StaticRegisterNativesADoorManager()
	{
	}
	UClass* Z_Construct_UClass_ADoorManager_NoRegister()
	{
		return ADoorManager::StaticClass();
	}
	struct Z_Construct_UClass_ADoorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoorManager.h" },
		{ "ModuleRelativePath", "DoorManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoorManager_Statics::ClassParams = {
		&ADoorManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADoorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoorManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoorManager, 2129794778);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ADoorManager>()
	{
		return ADoorManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorManager(Z_Construct_UClass_ADoorManager, &ADoorManager::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ADoorManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
