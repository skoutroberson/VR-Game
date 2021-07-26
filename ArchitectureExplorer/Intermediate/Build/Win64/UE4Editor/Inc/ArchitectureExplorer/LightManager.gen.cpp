// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/LightManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightManager() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ALightManager_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ALightManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void ALightManager::StaticRegisterNativesALightManager()
	{
	}
	UClass* Z_Construct_UClass_ALightManager_NoRegister()
	{
		return ALightManager::StaticClass();
	}
	struct Z_Construct_UClass_ALightManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightManager.h" },
		{ "ModuleRelativePath", "LightManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightManager_Statics::ClassParams = {
		&ALightManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightManager, 2192761301);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ALightManager>()
	{
		return ALightManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightManager(Z_Construct_UClass_ALightManager, &ALightManager::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ALightManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
