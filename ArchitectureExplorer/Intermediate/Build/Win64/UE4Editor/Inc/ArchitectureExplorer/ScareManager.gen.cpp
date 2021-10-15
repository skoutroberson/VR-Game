// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/ScareManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScareManager() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AScareManager_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AScareManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	static FName NAME_AScareManager_StartScare1 = FName(TEXT("StartScare1"));
	void AScareManager::StartScare1()
	{
		ProcessEvent(FindFunctionChecked(NAME_AScareManager_StartScare1),NULL);
	}
	void AScareManager::StaticRegisterNativesAScareManager()
	{
	}
	struct Z_Construct_UFunction_AScareManager_StartScare1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScareManager_StartScare1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scares" },
		{ "ModuleRelativePath", "ScareManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScareManager_StartScare1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScareManager, nullptr, "StartScare1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScareManager_StartScare1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScareManager_StartScare1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScareManager_StartScare1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScareManager_StartScare1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AScareManager_NoRegister()
	{
		return AScareManager::StaticClass();
	}
	struct Z_Construct_UClass_AScareManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScareManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AScareManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScareManager_StartScare1, "StartScare1" }, // 2838389874
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScareManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScareManager.h" },
		{ "ModuleRelativePath", "ScareManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScareManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScareManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScareManager_Statics::ClassParams = {
		&AScareManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScareManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScareManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScareManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScareManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScareManager, 1267522331);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AScareManager>()
	{
		return AScareManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScareManager(Z_Construct_UClass_AScareManager, &AScareManager::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AScareManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScareManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
