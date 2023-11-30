// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/BloodStainManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodStainManager() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ABloodStainManager_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ABloodStainManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_ABloodStainManager_DestroyBloodStains = FName(TEXT("DestroyBloodStains"));
	void ABloodStainManager::DestroyBloodStains()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABloodStainManager_DestroyBloodStains),NULL);
	}
	static FName NAME_ABloodStainManager_DestroyStain = FName(TEXT("DestroyStain"));
	void ABloodStainManager::DestroyStain()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABloodStainManager_DestroyStain),NULL);
	}
	static FName NAME_ABloodStainManager_SpawnBloodStain = FName(TEXT("SpawnBloodStain"));
	void ABloodStainManager::SpawnBloodStain(AActor* BS)
	{
		BloodStainManager_eventSpawnBloodStain_Parms Parms;
		Parms.BS=BS;
		ProcessEvent(FindFunctionChecked(NAME_ABloodStainManager_SpawnBloodStain),&Parms);
	}
	void ABloodStainManager::StaticRegisterNativesABloodStainManager()
	{
	}
	struct Z_Construct_UFunction_ABloodStainManager_DestroyBloodStains_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodStainManager_DestroyBloodStains_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BloodStainManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodStainManager_DestroyBloodStains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodStainManager, nullptr, "DestroyBloodStains", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodStainManager_DestroyBloodStains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodStainManager_DestroyBloodStains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodStainManager_DestroyBloodStains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodStainManager_DestroyBloodStains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodStainManager_DestroyStain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodStainManager_DestroyStain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BloodStainManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodStainManager_DestroyStain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodStainManager, nullptr, "DestroyStain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodStainManager_DestroyStain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodStainManager_DestroyStain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodStainManager_DestroyStain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodStainManager_DestroyStain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics::NewProp_BS = { "BS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodStainManager_eventSpawnBloodStain_Parms, BS), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics::NewProp_BS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BloodStainManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloodStainManager, nullptr, "SpawnBloodStain", nullptr, nullptr, sizeof(BloodStainManager_eventSpawnBloodStain_Parms), Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABloodStainManager_NoRegister()
	{
		return ABloodStainManager::StaticClass();
	}
	struct Z_Construct_UClass_ABloodStainManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyingBloodStains_MetaData[];
#endif
		static void NewProp_bDestroyingBloodStains_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyingBloodStains;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloodStainManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABloodStainManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloodStainManager_DestroyBloodStains, "DestroyBloodStains" }, // 1488189360
		{ &Z_Construct_UFunction_ABloodStainManager_DestroyStain, "DestroyStain" }, // 3960337870
		{ &Z_Construct_UFunction_ABloodStainManager_SpawnBloodStain, "SpawnBloodStain" }, // 1347313177
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodStainManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodStainManager.h" },
		{ "ModuleRelativePath", "BloodStainManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloodStainManager_Statics::NewProp_bDestroyingBloodStains_MetaData[] = {
		{ "Category", "BloodStainManager" },
		{ "ModuleRelativePath", "BloodStainManager.h" },
	};
#endif
	void Z_Construct_UClass_ABloodStainManager_Statics::NewProp_bDestroyingBloodStains_SetBit(void* Obj)
	{
		((ABloodStainManager*)Obj)->bDestroyingBloodStains = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABloodStainManager_Statics::NewProp_bDestroyingBloodStains = { "bDestroyingBloodStains", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABloodStainManager), &Z_Construct_UClass_ABloodStainManager_Statics::NewProp_bDestroyingBloodStains_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABloodStainManager_Statics::NewProp_bDestroyingBloodStains_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodStainManager_Statics::NewProp_bDestroyingBloodStains_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloodStainManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloodStainManager_Statics::NewProp_bDestroyingBloodStains,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloodStainManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloodStainManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloodStainManager_Statics::ClassParams = {
		&ABloodStainManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABloodStainManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloodStainManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloodStainManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloodStainManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloodStainManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloodStainManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloodStainManager, 1172427572);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ABloodStainManager>()
	{
		return ABloodStainManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloodStainManager(Z_Construct_UClass_ABloodStainManager, &ABloodStainManager::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ABloodStainManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloodStainManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
