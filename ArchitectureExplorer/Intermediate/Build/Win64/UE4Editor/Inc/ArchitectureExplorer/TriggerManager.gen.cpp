// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/TriggerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerManager() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ATriggerManager_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ATriggerManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ATriggerManager::StaticRegisterNativesATriggerManager()
	{
	}
	UClass* Z_Construct_UClass_ATriggerManager_NoRegister()
	{
		return ATriggerManager::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triggers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TriggerCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerManager.h" },
		{ "ModuleRelativePath", "TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerManager_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerManager_Statics::NewProp_Triggers_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATriggerManager_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerManager, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATriggerManager_Statics::NewProp_Triggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerManager_Statics::NewProp_Triggers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerManager_Statics::NewProp_TriggerCount_MetaData[] = {
		{ "Category", "TriggerManager" },
		{ "ModuleRelativePath", "TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATriggerManager_Statics::NewProp_TriggerCount = { "TriggerCount", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerManager, TriggerCount), METADATA_PARAMS(Z_Construct_UClass_ATriggerManager_Statics::NewProp_TriggerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerManager_Statics::NewProp_TriggerCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerManager_Statics::NewProp_Triggers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerManager_Statics::NewProp_Triggers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerManager_Statics::NewProp_TriggerCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerManager_Statics::ClassParams = {
		&ATriggerManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATriggerManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerManager, 2250622745);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ATriggerManager>()
	{
		return ATriggerManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerManager(Z_Construct_UClass_ATriggerManager, &ATriggerManager::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ATriggerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
