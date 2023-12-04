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
	DEFINE_FUNCTION(ARoachSpawner::execStopRoachesFleeing)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AmountToStop);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumToStopPerFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRoachesFleeing(Z_Param_AmountToStop,Z_Param_NumToStopPerFrame);
		P_NATIVE_END;
	}
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
	DEFINE_FUNCTION(ARoachSpawner::execMoveRoaches)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AmountToMove);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumToMovePerFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRoaches(Z_Param_AmountToMove,Z_Param_NumToMovePerFrame);
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
	static FName NAME_ARoachSpawner_StopFleeingDelayed = FName(TEXT("StopFleeingDelayed"));
	void ARoachSpawner::StopFleeingDelayed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARoachSpawner_StopFleeingDelayed),NULL);
	}
	void ARoachSpawner::StaticRegisterNativesARoachSpawner()
	{
		UClass* Class = ARoachSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteRoach", &ARoachSpawner::execDeleteRoach },
			{ "DeleteRoaches", &ARoachSpawner::execDeleteRoaches },
			{ "MoveRoaches", &ARoachSpawner::execMoveRoaches },
			{ "SpawnRoach", &ARoachSpawner::execSpawnRoach },
			{ "SpawnRoaches", &ARoachSpawner::execSpawnRoaches },
			{ "StopRoachesFleeing", &ARoachSpawner::execStopRoachesFleeing },
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
		{ "Comment", "// deletes all roaches this spawner created\n" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
		{ "ToolTip", "deletes all roaches this spawner created" },
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
	struct Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics
	{
		struct RoachSpawner_eventMoveRoaches_Parms
		{
			int32 AmountToMove;
			int32 NumToMovePerFrame;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AmountToMove;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumToMovePerFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::NewProp_AmountToMove = { "AmountToMove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoachSpawner_eventMoveRoaches_Parms, AmountToMove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::NewProp_NumToMovePerFrame = { "NumToMovePerFrame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoachSpawner_eventMoveRoaches_Parms, NumToMovePerFrame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::NewProp_AmountToMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::NewProp_NumToMovePerFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// moves all roaches to new random locations\n" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
		{ "ToolTip", "moves all roaches to new random locations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoachSpawner, nullptr, "MoveRoaches", nullptr, nullptr, sizeof(RoachSpawner_eventMoveRoaches_Parms), Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoachSpawner_MoveRoaches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoachSpawner_MoveRoaches_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ARoachSpawner_StopFleeingDelayed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoachSpawner_StopFleeingDelayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoachSpawner_StopFleeingDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoachSpawner, nullptr, "StopFleeingDelayed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoachSpawner_StopFleeingDelayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_StopFleeingDelayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoachSpawner_StopFleeingDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoachSpawner_StopFleeingDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics
	{
		struct RoachSpawner_eventStopRoachesFleeing_Parms
		{
			int32 AmountToStop;
			int32 NumToStopPerFrame;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AmountToStop;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumToStopPerFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::NewProp_AmountToStop = { "AmountToStop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoachSpawner_eventStopRoachesFleeing_Parms, AmountToStop), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::NewProp_NumToStopPerFrame = { "NumToStopPerFrame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoachSpawner_eventStopRoachesFleeing_Parms, NumToStopPerFrame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::NewProp_AmountToStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::NewProp_NumToStopPerFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoachSpawner, nullptr, "StopRoachesFleeing", nullptr, nullptr, sizeof(RoachSpawner_eventStopRoachesFleeing_Parms), Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivated_MetaData[];
#endif
		static void NewProp_bActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivated;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRoachesMovePerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumRoachesMovePerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFleeOnSpawn_MetaData[];
#endif
		static void NewProp_bFleeOnSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFleeOnSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeMinTimerRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeMinTimerRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeMaxTimerRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeMaxTimerRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStoppingFlee_MetaData[];
#endif
		static void NewProp_bStoppingFlee_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStoppingFlee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRoachesStoppedFleeingPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumRoachesStoppedFleeingPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopFleeDelayMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopFleeDelayMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopFleeDelayMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopFleeDelayMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopFleeDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopFleeDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeLazinessModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeLazinessModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCopulateOnSpawn_MetaData[];
#endif
		static void NewProp_bCanCopulateOnSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCopulateOnSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeWaitTimeModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeWaitTimeModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopulateMinChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CopulateMinChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopulateMaxChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CopulateMaxChance;
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
		{ &Z_Construct_UFunction_ARoachSpawner_DeleteRoaches, "DeleteRoaches" }, // 2084815700
		{ &Z_Construct_UFunction_ARoachSpawner_MoveRoaches, "MoveRoaches" }, // 4163726484
		{ &Z_Construct_UFunction_ARoachSpawner_SpawnRoach, "SpawnRoach" }, // 1308915396
		{ &Z_Construct_UFunction_ARoachSpawner_SpawnRoaches, "SpawnRoaches" }, // 4153748074
		{ &Z_Construct_UFunction_ARoachSpawner_StopFleeingDelayed, "StopFleeingDelayed" }, // 144860394
		{ &Z_Construct_UFunction_ARoachSpawner_StopRoachesFleeing, "StopRoachesFleeing" }, // 4004258505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoachSpawner.h" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bActivated_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	void Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bActivated_SetBit(void* Obj)
	{
		((ARoachSpawner*)Obj)->bActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bActivated = { "bActivated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoachSpawner), &Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "Comment", "// Maximum roaches that this spawner can spawn DONT CHANGE AT RUNTIME\n" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
		{ "ToolTip", "Maximum roaches that this spawner can spawn DONT CHANGE AT RUNTIME" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount = { "MaxRoachCount", nullptr, (EPropertyFlags)0x0010000002000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, MaxRoachCount), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount = { "RoachCount", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, RoachCount), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_Inner = { "Roaches", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches = { "Roaches", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, Roaches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_NumRoachesMovePerFrame_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_NumRoachesMovePerFrame = { "NumRoachesMovePerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, NumRoachesMovePerFrame), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_NumRoachesMovePerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_NumRoachesMovePerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bFleeOnSpawn_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	void Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bFleeOnSpawn_SetBit(void* Obj)
	{
		((ARoachSpawner*)Obj)->bFleeOnSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bFleeOnSpawn = { "bFleeOnSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoachSpawner), &Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bFleeOnSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bFleeOnSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bFleeOnSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeMinTimerRate_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeMinTimerRate = { "FleeMinTimerRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, FleeMinTimerRate), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeMinTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeMinTimerRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeMaxTimerRate_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeMaxTimerRate = { "FleeMaxTimerRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, FleeMaxTimerRate), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeMaxTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeMaxTimerRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bStoppingFlee_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	void Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bStoppingFlee_SetBit(void* Obj)
	{
		((ARoachSpawner*)Obj)->bStoppingFlee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bStoppingFlee = { "bStoppingFlee", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoachSpawner), &Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bStoppingFlee_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bStoppingFlee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bStoppingFlee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_NumRoachesStoppedFleeingPerFrame_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_NumRoachesStoppedFleeingPerFrame = { "NumRoachesStoppedFleeingPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, NumRoachesStoppedFleeingPerFrame), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_NumRoachesStoppedFleeingPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_NumRoachesStoppedFleeingPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelayMin_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelayMin = { "StopFleeDelayMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, StopFleeDelayMin), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelayMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelayMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelayMax_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelayMax = { "StopFleeDelayMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, StopFleeDelayMax), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelayMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelayMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelay_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelay = { "StopFleeDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, StopFleeDelay), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeLazinessModifier_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeLazinessModifier = { "FleeLazinessModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, FleeLazinessModifier), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeLazinessModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeLazinessModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bCanCopulateOnSpawn_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	void Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bCanCopulateOnSpawn_SetBit(void* Obj)
	{
		((ARoachSpawner*)Obj)->bCanCopulateOnSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bCanCopulateOnSpawn = { "bCanCopulateOnSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoachSpawner), &Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bCanCopulateOnSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bCanCopulateOnSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bCanCopulateOnSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeWaitTimeModifier_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeWaitTimeModifier = { "FleeWaitTimeModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, FleeWaitTimeModifier), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeWaitTimeModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeWaitTimeModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeSpeedModifier_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeSpeedModifier = { "FleeSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, FleeSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_CopulateMinChance_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "Comment", "// keep at 0 if you want to roll for copulate chance, 1 if you want to always copulate on overlap while spawning/moving\n" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
		{ "ToolTip", "keep at 0 if you want to roll for copulate chance, 1 if you want to always copulate on overlap while spawning/moving" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_CopulateMinChance = { "CopulateMinChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, CopulateMinChance), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_CopulateMinChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_CopulateMinChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoachSpawner_Statics::NewProp_CopulateMaxChance_MetaData[] = {
		{ "Category", "RoachSpawner" },
		{ "ModuleRelativePath", "RoachSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARoachSpawner_Statics::NewProp_CopulateMaxChance = { "CopulateMaxChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoachSpawner, CopulateMaxChance), METADATA_PARAMS(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_CopulateMaxChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoachSpawner_Statics::NewProp_CopulateMaxChance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoachSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_MaxRoachCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_Roaches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_RoachBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepSphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SweepLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SpawnBoxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_SpawnBoxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_NumRoachesMovePerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bFleeOnSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeMinTimerRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeMaxTimerRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bStoppingFlee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_NumRoachesStoppedFleeingPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelayMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelayMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_StopFleeDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeLazinessModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_bCanCopulateOnSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeWaitTimeModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_FleeSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_CopulateMinChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoachSpawner_Statics::NewProp_CopulateMaxChance,
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
	IMPLEMENT_CLASS(ARoachSpawner, 2444539827);
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
