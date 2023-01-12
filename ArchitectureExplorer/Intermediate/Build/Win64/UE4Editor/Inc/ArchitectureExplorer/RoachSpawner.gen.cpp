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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARoach_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARoachSpawner::execDeleteRoach)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteRoach();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoachSpawner::execSpawnRoach)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnRoach();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoachSpawner::execDeleteRoaches)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfRoaches);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteRoaches(Z_Param_NumberOfRoaches);
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
			{ "DeleteRoach", &ARoachSpawner::execDeleteRoach },
			{ "DeleteRoaches", &ARoachSpawner::execDeleteRoaches },
			{ "SpawnRoach", &ARoachSpawner::execSpawnRoach },
			{ "SpawnRoaches", &ARoachSpawner::execSpawnRoaches },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARoachSpawner_DeleteRoach_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoachSpawner_DeleteRoach_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoachSpawner_DeleteRoach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoachSpawner, nullptr, "DeleteRoach", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoachSpawner_DeleteRoach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_DeleteRoach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoachSpawner_DeleteRoach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoachSpawner_DeleteRoach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics
	{
		struct RoachSpawner_eventDeleteRoaches_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics::NewProp_NumberOfRoaches = { "NumberOfRoaches", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoachSpawner_eventDeleteRoaches_Parms, NumberOfRoaches), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics::NewProp_NumberOfRoaches,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoachSpawner, nullptr, "DeleteRoaches", nullptr, nullptr, sizeof(RoachSpawner_eventDeleteRoaches_Parms), Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoachSpawner_DeleteRoaches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoachSpawner_DeleteRoaches_Statics::FuncParams);
		}
		return ReturnFunction;
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoachSpawner_SpawnRoach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoachSpawner, nullptr, "SpawnRoach", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoachSpawner_SpawnRoach_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_SpawnRoach_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Roaches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roaches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Roaches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoachBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoachBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepSphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SweepSphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SweepLength;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnBoxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnBoxes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoachSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARoachSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoachSpawner_DeleteRoach, "DeleteRoach" }, // 183331521
		{ &Z_Construct_UFunction_ARoachSpawner_DeleteRoaches, "DeleteRoaches" }, // 1696719957
		{ &Z_Construct_UFunction_ARoachSpawner_SpawnRoach, "SpawnRoach" }, // 1308915396
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_Inner = { "Roaches", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches = { "Roaches", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, Roaches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "Comment", "// needs to be set in the editor to the BP_Roach class\n" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
		{ "ToolTip", "needs to be set in the editor to the BP_Roach class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP = { "RoachBP", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, RoachBP), Z_Construct_UClass_ARoach_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepSphereRadius_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepSphereRadius = { "SweepSphereRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, SweepSphereRadius), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepSphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepSphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepLength_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepLength = { "SweepLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, SweepLength), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepLength_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SpawnBoxes_Inner = { "SpawnBoxes", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SpawnBoxes_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SpawnBoxes = { "SpawnBoxes", nullptr, (EPropertyFlags)0x0010008000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, SpawnBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SpawnBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SpawnBoxes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoachSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepSphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SpawnBoxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SpawnBoxes,
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
	IMPLEMENT_CLASS(ARoachSpawner, 2015881391);
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
