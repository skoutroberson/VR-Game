// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Roach.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoach() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_CopulateState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_CockroachState();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARoach_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARoach();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static UEnum* CopulateState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_CopulateState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("CopulateState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<CopulateState>()
	{
		return CopulateState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CopulateState(CopulateState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("CopulateState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_CopulateState_Hash() { return 1087381676U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_CopulateState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CopulateState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_CopulateState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CopulateState::STATE_NONE", (int64)CopulateState::STATE_NONE },
				{ "CopulateState::STATE_COPULATING", (int64)CopulateState::STATE_COPULATING },
				{ "CopulateState::STATE_BEING_COPULATED", (int64)CopulateState::STATE_BEING_COPULATED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Roach.h" },
				{ "STATE_BEING_COPULATED.DisplayName", "Being Copulated" },
				{ "STATE_BEING_COPULATED.Name", "CopulateState::STATE_BEING_COPULATED" },
				{ "STATE_COPULATING.DisplayName", "Copulating" },
				{ "STATE_COPULATING.Name", "CopulateState::STATE_COPULATING" },
				{ "STATE_NONE.DisplayName", "None" },
				{ "STATE_NONE.Name", "CopulateState::STATE_NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"CopulateState",
				"CopulateState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* CockroachState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_CockroachState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("CockroachState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<CockroachState>()
	{
		return CockroachState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CockroachState(CockroachState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("CockroachState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_CockroachState_Hash() { return 386361387U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_CockroachState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CockroachState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_CockroachState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CockroachState::STATE_IDLE", (int64)CockroachState::STATE_IDLE },
				{ "CockroachState::STATE_WAIT", (int64)CockroachState::STATE_WAIT },
				{ "CockroachState::STATE_MOVE", (int64)CockroachState::STATE_MOVE },
				{ "CockroachState::STATE_FALL", (int64)CockroachState::STATE_FALL },
				{ "CockroachState::STATE_COPULATE", (int64)CockroachState::STATE_COPULATE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Roach.h" },
				{ "STATE_COPULATE.DisplayName", "Copulate" },
				{ "STATE_COPULATE.Name", "CockroachState::STATE_COPULATE" },
				{ "STATE_FALL.DisplayName", "Fall" },
				{ "STATE_FALL.Name", "CockroachState::STATE_FALL" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "CockroachState::STATE_IDLE" },
				{ "STATE_MOVE.DisplayName", "Move" },
				{ "STATE_MOVE.Name", "CockroachState::STATE_MOVE" },
				{ "STATE_WAIT.DisplayName", "Wait" },
				{ "STATE_WAIT.Name", "CockroachState::STATE_WAIT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"CockroachState",
				"CockroachState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ARoach::execCanPlayerSeeMe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlayerSeeMe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoach::execStopFleeing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFleeing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoach::execFleeOrFlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FleeOrFlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoach::execChangeSwerveSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSwerveSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoach::execChangeSwerveDirectionAndRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSwerveDirectionAndRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoach::execChangeWiggleDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeWiggleDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoach::execHitRigidBody)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitRigidBody(Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARoach::execChangeState)
	{
		P_GET_ENUM(CockroachState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeState(CockroachState(Z_Param_NewState));
		P_NATIVE_END;
	}
	static FName NAME_ARoach_StopFleeingDelayed = FName(TEXT("StopFleeingDelayed"));
	void ARoach::StopFleeingDelayed(float MinDelay, float MaxDelay)
	{
		Roach_eventStopFleeingDelayed_Parms Parms;
		Parms.MinDelay=MinDelay;
		Parms.MaxDelay=MaxDelay;
		ProcessEvent(FindFunctionChecked(NAME_ARoach_StopFleeingDelayed),&Parms);
	}
	static FName NAME_ARoach_UpdateAnimationSpeed = FName(TEXT("UpdateAnimationSpeed"));
	void ARoach::UpdateAnimationSpeed(float NewSpeed)
	{
		Roach_eventUpdateAnimationSpeed_Parms Parms;
		Parms.NewSpeed=NewSpeed;
		ProcessEvent(FindFunctionChecked(NAME_ARoach_UpdateAnimationSpeed),&Parms);
	}
	void ARoach::StaticRegisterNativesARoach()
	{
		UClass* Class = ARoach::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPlayerSeeMe", &ARoach::execCanPlayerSeeMe },
			{ "ChangeState", &ARoach::execChangeState },
			{ "ChangeSwerveDirectionAndRate", &ARoach::execChangeSwerveDirectionAndRate },
			{ "ChangeSwerveSpeed", &ARoach::execChangeSwerveSpeed },
			{ "ChangeWiggleDirection", &ARoach::execChangeWiggleDirection },
			{ "FleeOrFlock", &ARoach::execFleeOrFlock },
			{ "HitRigidBody", &ARoach::execHitRigidBody },
			{ "StopFleeing", &ARoach::execStopFleeing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics
	{
		struct Roach_eventCanPlayerSeeMe_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Roach_eventCanPlayerSeeMe_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Roach_eventCanPlayerSeeMe_Parms), &Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// called when we check if we can move the roach or delete it\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "called when we check if we can move the roach or delete it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoach, nullptr, "CanPlayerSeeMe", nullptr, nullptr, sizeof(Roach_eventCanPlayerSeeMe_Parms), Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoach_CanPlayerSeeMe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoach_CanPlayerSeeMe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoach_ChangeState_Statics
	{
		struct Roach_eventChangeState_Parms
		{
			CockroachState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARoach_ChangeState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARoach_ChangeState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Roach_eventChangeState_Parms, NewState), Z_Construct_UEnum_ArchitectureExplorer_CockroachState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoach_ChangeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoach_ChangeState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoach_ChangeState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoach_ChangeState_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoach_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoach, nullptr, "ChangeState", nullptr, nullptr, sizeof(Roach_eventChangeState_Parms), Z_Construct_UFunction_ARoach_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_ChangeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoach_ChangeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_ChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoach_ChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoach_ChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoach_ChangeSwerveDirectionAndRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoach_ChangeSwerveDirectionAndRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoach_ChangeSwerveDirectionAndRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoach, nullptr, "ChangeSwerveDirectionAndRate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoach_ChangeSwerveDirectionAndRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_ChangeSwerveDirectionAndRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoach_ChangeSwerveDirectionAndRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoach_ChangeSwerveDirectionAndRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoach_ChangeSwerveSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoach_ChangeSwerveSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoach_ChangeSwerveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoach, nullptr, "ChangeSwerveSpeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoach_ChangeSwerveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_ChangeSwerveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoach_ChangeSwerveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoach_ChangeSwerveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoach_ChangeWiggleDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoach_ChangeWiggleDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// wiggle stuff\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "wiggle stuff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoach_ChangeWiggleDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoach, nullptr, "ChangeWiggleDirection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoach_ChangeWiggleDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_ChangeWiggleDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoach_ChangeWiggleDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoach_ChangeWiggleDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoach_FleeOrFlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoach_FleeOrFlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoach_FleeOrFlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoach, nullptr, "FleeOrFlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoach_FleeOrFlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_FleeOrFlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoach_FleeOrFlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoach_FleeOrFlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoach_HitRigidBody_Statics
	{
		struct Roach_eventHitRigidBody_Parms
		{
			FHitResult HitResult;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoach_HitRigidBody_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Roach_eventHitRigidBody_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoach_HitRigidBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoach_HitRigidBody_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoach_HitRigidBody_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoach_HitRigidBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoach, nullptr, "HitRigidBody", nullptr, nullptr, sizeof(Roach_eventHitRigidBody_Parms), Z_Construct_UFunction_ARoach_HitRigidBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_HitRigidBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoach_HitRigidBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_HitRigidBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoach_HitRigidBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoach_HitRigidBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoach_StopFleeing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoach_StopFleeing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoach_StopFleeing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoach, nullptr, "StopFleeing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoach_StopFleeing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_StopFleeing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoach_StopFleeing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoach_StopFleeing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDelay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::NewProp_MinDelay = { "MinDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Roach_eventStopFleeingDelayed_Parms, MinDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::NewProp_MaxDelay = { "MaxDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Roach_eventStopFleeingDelayed_Parms, MaxDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::NewProp_MinDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::NewProp_MaxDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoach, nullptr, "StopFleeingDelayed", nullptr, nullptr, sizeof(Roach_eventStopFleeingDelayed_Parms), Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoach_StopFleeingDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoach_StopFleeingDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Roach_eventUpdateAnimationSpeed_Parms, NewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoach, nullptr, "UpdateAnimationSpeed", nullptr, nullptr, sizeof(Roach_eventUpdateAnimationSpeed_Parms), Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARoach_UpdateAnimationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARoach_UpdateAnimationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARoach_NoRegister()
	{
		return ARoach::StaticClass();
	}
	struct Z_Construct_UClass_ARoach_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoachRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoachRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentCopulateState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCopulateState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentCopulateState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MateRoach_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MateRoach;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopulateMoveSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CopulateMoveSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopulateRotateSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CopulateRotateSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopulateAnimationSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CopulateAnimationSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeedGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTurnLeft_MetaData[];
#endif
		static void NewProp_bTurnLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTurnLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveToGoal_MetaData[];
#endif
		static void NewProp_bMoveToGoal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveToGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTurn_MetaData[];
#endif
		static void NewProp_bTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceMovedLastFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceMovedLastFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WiggleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WiggleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WiggleSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WiggleSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Laziness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Laziness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingLaziness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingLaziness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwerveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwerveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaiting_MetaData[];
#endif
		static void NewProp_bWaiting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaiting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntennaRotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AntennaRotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftAntennaZRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftAntennaZRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftAntennaYRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftAntennaYRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightAntennaZRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightAntennaZRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightAntennaYRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightAntennaYRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftAntennaZGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftAntennaZGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftAntennaYGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftAntennaYGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightAntennaZGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightAntennaZGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightAntennaYGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightAntennaYGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntennaMinZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AntennaMinZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntennaMaxZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AntennaMaxZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntennaMinY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AntennaMinY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntennaMaxY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AntennaMaxY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlee_MetaData[];
#endif
		static void NewProp_bFlee_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlock_MetaData[];
#endif
		static void NewProp_bFlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeFlockTimerRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeFlockTimerRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeFlockMinRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeFlockMinRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeFlockMaxRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeFlockMaxRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeWaitTimeModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeWaitTimeModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeSpeedModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeSpeedModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeLazinessModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeLazinessModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlockLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlockLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FleeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaitCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LazinessCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LazinessCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwerveSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwerveSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveSpeedCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoach_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARoach_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoach_CanPlayerSeeMe, "CanPlayerSeeMe" }, // 2472592272
		{ &Z_Construct_UFunction_ARoach_ChangeState, "ChangeState" }, // 1593228275
		{ &Z_Construct_UFunction_ARoach_ChangeSwerveDirectionAndRate, "ChangeSwerveDirectionAndRate" }, // 2331979585
		{ &Z_Construct_UFunction_ARoach_ChangeSwerveSpeed, "ChangeSwerveSpeed" }, // 4275596113
		{ &Z_Construct_UFunction_ARoach_ChangeWiggleDirection, "ChangeWiggleDirection" }, // 2482595606
		{ &Z_Construct_UFunction_ARoach_FleeOrFlock, "FleeOrFlock" }, // 3568755622
		{ &Z_Construct_UFunction_ARoach_HitRigidBody, "HitRigidBody" }, // 1782708981
		{ &Z_Construct_UFunction_ARoach_StopFleeing, "StopFleeing" }, // 1327868636
		{ &Z_Construct_UFunction_ARoach_StopFleeingDelayed, "StopFleeingDelayed" }, // 2003999297
		{ &Z_Construct_UFunction_ARoach_UpdateAnimationSpeed, "UpdateAnimationSpeed" }, // 464131367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Roach.h" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot_MetaData[] = {
		{ "Category", "Roach" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot = { "RoachRoot", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, RoachRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Roach" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, MovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_MovementComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_StateEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_StateEnum_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// this is needed mainly for visualization in the editor\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "this is needed mainly for visualization in the editor" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_StateEnum = { "StateEnum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, StateEnum), Z_Construct_UEnum_ArchitectureExplorer_CockroachState, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_StateEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_StateEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_CurrentCopulateState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_CurrentCopulateState_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_CurrentCopulateState = { "CurrentCopulateState", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, CurrentCopulateState), Z_Construct_UEnum_ArchitectureExplorer_CopulateState, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_CurrentCopulateState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_CurrentCopulateState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_MateRoach_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// set by RoachSpawner \n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "set by RoachSpawner" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_MateRoach = { "MateRoach", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, MateRoach), Z_Construct_UClass_ARoach_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_MateRoach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_MateRoach_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_PreviousState_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, PreviousState), Z_Construct_UEnum_ArchitectureExplorer_CockroachState, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_PreviousState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_PreviousState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_CopulateMoveSpeedModifier_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_CopulateMoveSpeedModifier = { "CopulateMoveSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, CopulateMoveSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_CopulateMoveSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_CopulateMoveSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_CopulateRotateSpeedModifier_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_CopulateRotateSpeedModifier = { "CopulateRotateSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, CopulateRotateSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_CopulateRotateSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_CopulateRotateSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_CopulateAnimationSpeedModifier_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_CopulateAnimationSpeedModifier = { "CopulateAnimationSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, CopulateAnimationSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_CopulateAnimationSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_CopulateAnimationSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeedGoal_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeedGoal = { "MoveSpeedGoal", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, MoveSpeedGoal), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeedGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeedGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, TurnSpeed), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_TurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_bTurnLeft_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	void Z_Construct_UClass_ARoach_Statics::NewProp_bTurnLeft_SetBit(void* Obj)
	{
		((ARoach*)Obj)->bTurnLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_bTurnLeft = { "bTurnLeft", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoach), &Z_Construct_UClass_ARoach_Statics::NewProp_bTurnLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_bTurnLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_bTurnLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_bMoveToGoal_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	void Z_Construct_UClass_ARoach_Statics::NewProp_bMoveToGoal_SetBit(void* Obj)
	{
		((ARoach*)Obj)->bMoveToGoal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_bMoveToGoal = { "bMoveToGoal", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoach), &Z_Construct_UClass_ARoach_Statics::NewProp_bMoveToGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_bMoveToGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_bMoveToGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_bTurn_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	void Z_Construct_UClass_ARoach_Statics::NewProp_bTurn_SetBit(void* Obj)
	{
		((ARoach*)Obj)->bTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_bTurn = { "bTurn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoach), &Z_Construct_UClass_ARoach_Statics::NewProp_bTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_bTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_bTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_DistanceMovedLastFrame_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_DistanceMovedLastFrame = { "DistanceMovedLastFrame", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, DistanceMovedLastFrame), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_DistanceMovedLastFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_DistanceMovedLastFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_MaxMoveSpeed_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_MaxMoveSpeed = { "MaxMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, MaxMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_MaxMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_MaxMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_MinMoveSpeed_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_MinMoveSpeed = { "MinMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, MinMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_MinMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_MinMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_WiggleRate_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// rate that wiggle direction changes\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "rate that wiggle direction changes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_WiggleRate = { "WiggleRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, WiggleRate), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_WiggleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_WiggleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_WiggleSpeed_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_WiggleSpeed = { "WiggleSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, WiggleSpeed), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_WiggleSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_WiggleSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_Laziness_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// random number between 1-9;\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "random number between 1-9;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_Laziness = { "Laziness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, Laziness), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_Laziness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_Laziness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_StartingLaziness_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_StartingLaziness = { "StartingLaziness", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, StartingLaziness), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_StartingLaziness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_StartingLaziness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_SwerveSpeed_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_SwerveSpeed = { "SwerveSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, SwerveSpeed), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_SwerveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_SwerveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_bWaiting_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	void Z_Construct_UClass_ARoach_Statics::NewProp_bWaiting_SetBit(void* Obj)
	{
		((ARoach*)Obj)->bWaiting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_bWaiting = { "bWaiting", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoach), &Z_Construct_UClass_ARoach_Statics::NewProp_bWaiting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_bWaiting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_bWaiting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_AntennaRotationSpeed_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_AntennaRotationSpeed = { "AntennaRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, AntennaRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_AntennaRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_AntennaRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaZRotation_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// Yaw\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaZRotation = { "LeftAntennaZRotation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, LeftAntennaZRotation), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaZRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaZRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaYRotation_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// Pitch\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaYRotation = { "LeftAntennaYRotation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, LeftAntennaYRotation), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaYRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaYRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaZRotation_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// Yaw\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaZRotation = { "RightAntennaZRotation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, RightAntennaZRotation), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaZRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaZRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaYRotation_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// Pitch\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaYRotation = { "RightAntennaYRotation", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, RightAntennaYRotation), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaYRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaYRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaZGoal_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// Yaw\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaZGoal = { "LeftAntennaZGoal", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, LeftAntennaZGoal), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaZGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaZGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaYGoal_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// Pitch\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaYGoal = { "LeftAntennaYGoal", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, LeftAntennaYGoal), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaYGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaYGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaZGoal_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// Yaw\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaZGoal = { "RightAntennaZGoal", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, RightAntennaZGoal), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaZGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaZGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaYGoal_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// Pitch\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaYGoal = { "RightAntennaYGoal", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, RightAntennaYGoal), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaYGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaYGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMinZ_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMinZ = { "AntennaMinZ", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, AntennaMinZ), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMinZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMinZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMaxZ_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMaxZ = { "AntennaMaxZ", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, AntennaMaxZ), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMaxZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMaxZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMinY_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMinY = { "AntennaMinY", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, AntennaMinY), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMinY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMinY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMaxY_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMaxY = { "AntennaMaxY", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, AntennaMaxY), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMaxY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMaxY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_bFlee_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	void Z_Construct_UClass_ARoach_Statics::NewProp_bFlee_SetBit(void* Obj)
	{
		((ARoach*)Obj)->bFlee = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_bFlee = { "bFlee", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoach), &Z_Construct_UClass_ARoach_Statics::NewProp_bFlee_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_bFlee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_bFlee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_bFlock_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	void Z_Construct_UClass_ARoach_Statics::NewProp_bFlock_SetBit(void* Obj)
	{
		((ARoach*)Obj)->bFlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_bFlock = { "bFlock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARoach), &Z_Construct_UClass_ARoach_Statics::NewProp_bFlock_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_bFlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_bFlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockTimerRate_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockTimerRate = { "FleeFlockTimerRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, FleeFlockTimerRate), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockTimerRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockMinRate_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockMinRate = { "FleeFlockMinRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, FleeFlockMinRate), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockMinRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockMinRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockMaxRate_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockMaxRate = { "FleeFlockMaxRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, FleeFlockMaxRate), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockMaxRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockMaxRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_FleeWaitTimeModifier_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_FleeWaitTimeModifier = { "FleeWaitTimeModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, FleeWaitTimeModifier), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_FleeWaitTimeModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_FleeWaitTimeModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_FleeSpeedModifier_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_FleeSpeedModifier = { "FleeSpeedModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, FleeSpeedModifier), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_FleeSpeedModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_FleeSpeedModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_FleeLazinessModifier_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_FleeLazinessModifier = { "FleeLazinessModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, FleeLazinessModifier), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_FleeLazinessModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_FleeLazinessModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_FlockLocation_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// flee\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "flee" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_FlockLocation = { "FlockLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, FlockLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_FlockLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_FlockLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_FleeLocation_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// flock\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "flock" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_FleeLocation = { "FleeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, FleeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_FleeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_FleeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_WaitCurve_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// used when we roll for WaitTime\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "used when we roll for WaitTime" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_WaitCurve = { "WaitCurve", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, WaitCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_WaitCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_WaitCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_LazinessCurve_MetaData[] = {
		{ "Category", "Roach" },
		{ "Comment", "// used when we roll for a new laziness\n" },
		{ "ModuleRelativePath", "Roach.h" },
		{ "ToolTip", "used when we roll for a new laziness" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_LazinessCurve = { "LazinessCurve", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, LazinessCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_LazinessCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_LazinessCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_SwerveSpeedCurve_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_SwerveSpeedCurve = { "SwerveSpeedCurve", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, SwerveSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_SwerveSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_SwerveSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeedCurve_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeedCurve = { "MoveSpeedCurve", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, MoveSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeedCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_StateEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_StateEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_CurrentCopulateState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_CurrentCopulateState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_MateRoach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_PreviousState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_PreviousState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_CopulateMoveSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_CopulateRotateSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_CopulateAnimationSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeedGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_TurnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_bTurnLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_bMoveToGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_bTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_DistanceMovedLastFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_MaxMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_MinMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_WiggleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_WiggleSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_Laziness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_StartingLaziness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_SwerveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_bWaiting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_AntennaRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaZRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaYRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaZRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaYRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaZGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_LeftAntennaYGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaZGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_RightAntennaYGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMinZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMaxZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMinY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_AntennaMaxY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_bFlee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_bFlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockTimerRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockMinRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_FleeFlockMaxRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_FleeWaitTimeModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_FleeSpeedModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_FleeLazinessModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_FlockLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_FleeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_WaitCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_LazinessCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_SwerveSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeedCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoach_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoach>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoach_Statics::ClassParams = {
		&ARoach::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARoach_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoach()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoach_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoach, 3749720185);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ARoach>()
	{
		return ARoach::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoach(Z_Construct_UClass_ARoach, &ARoach::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ARoach"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoach);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
