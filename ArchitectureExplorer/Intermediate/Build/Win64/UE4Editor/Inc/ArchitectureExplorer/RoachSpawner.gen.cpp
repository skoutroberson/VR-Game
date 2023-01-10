// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/RoachSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoachSpawner() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARoachSpawner_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARoachSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARoach_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARoachSpawner::execSpawnRoach)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnRoach();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoachSpawner::execSpawnRoaches)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfRoaches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnRoaches(Z_Param_NumberOfRoaches);
		P_NATIVE_END;
	}
	void ARoachSpawner::StaticRegisterNativesARoachSpawner()
	{
		UClass* Class = ARoachSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnRoach", &ARoachSpawner::execSpawnRoach },
			{ "SpawnRoaches", &ARoachSpawner::execSpawnRoaches },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARoachSpawner_SpawnRoach_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoachSpawner_SpawnRoach_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// spawn 1 roach per frame and increment RoachCount until it equals TargetRoachCount then turn bSpawningRoaches off and tick off\n" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
		{ "ToolTip", "spawn 1 roach per frame and increment RoachCount until it equals TargetRoachCount then turn bSpawningRoaches off and tick off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoachSpawner_SpawnRoach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoachSpawner, nullptr, "SpawnRoach", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoachSpawner_SpawnRoach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_SpawnRoach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoachSpawner_SpawnRoach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoachSpawner_SpawnRoach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics
	{
		struct RoachSpawner_eventSpawnRoaches_Parms
		{
			int32 NumberOfRoaches;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfRoaches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics::NewProp_NumberOfRoaches = { "NumberOfRoaches", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoachSpawner_eventSpawnRoaches_Parms, NumberOfRoaches), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics::NewProp_NumberOfRoaches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoachSpawner, nullptr, "SpawnRoaches", nullptr, nullptr, sizeof(RoachSpawner_eventSpawnRoaches_Parms), Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoachSpawner_SpawnRoaches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoachSpawner_SpawnRoaches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARoachSpawner_NoRegister()
	{
		return ARoachSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ARoachSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRoachCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxRoachCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoachCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RoachCount;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Roaches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roaches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Roaches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoachBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoachBP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoachSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARoachSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoachSpawner_SpawnRoach, "SpawnRoach" }, // 3737078555
		{ &Z_Construct_UFunction_ARoachSpawner_SpawnRoaches, "SpawnRoaches" }, // 4153748074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoachSpawner.h" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "Comment", "// Maximum roaches that this spawner can spawn DONT CHANGE AT RUNTIME\n" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
		{ "ToolTip", "Maximum roaches that this spawner can spawn DONT CHANGE AT RUNTIME" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount = { "MaxRoachCount", nullptr, (EPropertyFlags)0x0010000002000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, MaxRoachCount), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount = { "RoachCount", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, RoachCount), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_Inner = { "Roaches", nullptr, (EPropertyFlags)0x0004000000020000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARoach_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches = { "Roaches", nullptr, (EPropertyFlags)0x0014000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, Roaches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP = { "RoachBP", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, RoachBP), Z_Construct_UClass_ARoach_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoachSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoachSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoachSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoachSpawner_Statics::ClassParams = {
		&ARoachSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARoachSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoachSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoachSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoachSpawner, 3963436485);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ARoachSpawner>()
	{
		return ARoachSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoachSpawner(Z_Construct_UClass_ARoachSpawner, &ARoachSpawner::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ARoachSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoachSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
