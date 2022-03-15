// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/ErrolCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrolCharacter() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_ErrolPeekState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_ErrolState();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolCharacter_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APeekPoint_NoRegister();
// End Cross Module References
	static UEnum* ErrolPeekState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_ErrolPeekState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("ErrolPeekState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<ErrolPeekState>()
	{
		return ErrolPeekState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ErrolPeekState(ErrolPeekState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("ErrolPeekState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_ErrolPeekState_Hash() { return 1366567073U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_ErrolPeekState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ErrolPeekState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_ErrolPeekState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ErrolPeekState::STATE_IDLE", (int64)ErrolPeekState::STATE_IDLE },
				{ "ErrolPeekState::STATE_WAITPEEK", (int64)ErrolPeekState::STATE_WAITPEEK },
				{ "ErrolPeekState::STATE_LEFTPEEK", (int64)ErrolPeekState::STATE_LEFTPEEK },
				{ "ErrolPeekState::STATE_RIGHTPEEK", (int64)ErrolPeekState::STATE_RIGHTPEEK },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "ErrolCharacter.h" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "ErrolPeekState::STATE_IDLE" },
				{ "STATE_LEFTPEEK.DisplayName", "LeftPeek" },
				{ "STATE_LEFTPEEK.Name", "ErrolPeekState::STATE_LEFTPEEK" },
				{ "STATE_RIGHTPEEK.DisplayName", "RightPeek" },
				{ "STATE_RIGHTPEEK.Name", "ErrolPeekState::STATE_RIGHTPEEK" },
				{ "STATE_WAITPEEK.DisplayName", "WaitPeek" },
				{ "STATE_WAITPEEK.Name", "ErrolPeekState::STATE_WAITPEEK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"ErrolPeekState",
				"ErrolPeekState",
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
	static UEnum* ErrolState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_ErrolState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("ErrolState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<ErrolState>()
	{
		return ErrolState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ErrolState(ErrolState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("ErrolState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_ErrolState_Hash() { return 2579776283U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_ErrolState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ErrolState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_ErrolState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ErrolState::STATE_IDLE", (int64)ErrolState::STATE_IDLE },
				{ "ErrolState::STATE_PATROL", (int64)ErrolState::STATE_PATROL },
				{ "ErrolState::STATE_CHASE", (int64)ErrolState::STATE_CHASE },
				{ "ErrolState::STATE_INVESTIGATE", (int64)ErrolState::STATE_INVESTIGATE },
				{ "ErrolState::STATE_LOOKAROUND", (int64)ErrolState::STATE_LOOKAROUND },
				{ "ErrolState::STATE_KILL", (int64)ErrolState::STATE_KILL },
				{ "ErrolState::STATE_PEEK", (int64)ErrolState::STATE_PEEK },
				{ "ErrolState::STATE_SCARE1", (int64)ErrolState::STATE_SCARE1 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "ErrolCharacter.h" },
				{ "STATE_CHASE.DisplayName", "Chase" },
				{ "STATE_CHASE.Name", "ErrolState::STATE_CHASE" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "ErrolState::STATE_IDLE" },
				{ "STATE_INVESTIGATE.DisplayName", "Investigate" },
				{ "STATE_INVESTIGATE.Name", "ErrolState::STATE_INVESTIGATE" },
				{ "STATE_KILL.DisplayName", "Kill" },
				{ "STATE_KILL.Name", "ErrolState::STATE_KILL" },
				{ "STATE_LOOKAROUND.DisplayName", "LookAround" },
				{ "STATE_LOOKAROUND.Name", "ErrolState::STATE_LOOKAROUND" },
				{ "STATE_PATROL.DisplayName", "Patrol" },
				{ "STATE_PATROL.Name", "ErrolState::STATE_PATROL" },
				{ "STATE_PEEK.DisplayName", "Peek" },
				{ "STATE_PEEK.Name", "ErrolState::STATE_PEEK" },
				{ "STATE_SCARE1.DisplayName", "Scare1" },
				{ "STATE_SCARE1.Name", "ErrolState::STATE_SCARE1" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"ErrolState",
				"ErrolState",
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
	DEFINE_FUNCTION(AErrolCharacter::execShouldKill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShouldKill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execShouldChase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShouldChase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execSetDetectionGauge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDetectionGauge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execSetSeeFlashlightGauge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSeeFlashlightGauge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execSetHearGauge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHearGauge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execSetSeeGauge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSeeGauge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execInitializeCanSeeVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCanSeeVariables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execExitPeekState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitPeekState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execEnterPeekState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterPeekState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execGoToRandomWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToRandomWaypoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execGetRandomWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetRandomWaypoint();
		P_NATIVE_END;
	}
	static FName NAME_AErrolCharacter_EndPeek = FName(TEXT("EndPeek"));
	void AErrolCharacter::EndPeek()
	{
		ProcessEvent(FindFunctionChecked(NAME_AErrolCharacter_EndPeek),NULL);
	}
	static FName NAME_AErrolCharacter_EndPeekAnimation = FName(TEXT("EndPeekAnimation"));
	void AErrolCharacter::EndPeekAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_AErrolCharacter_EndPeekAnimation),NULL);
	}
	static FName NAME_AErrolCharacter_StartPeekAnimation = FName(TEXT("StartPeekAnimation"));
	void AErrolCharacter::StartPeekAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_AErrolCharacter_StartPeekAnimation),NULL);
	}
	static FName NAME_AErrolCharacter_UpdateAnimation = FName(TEXT("UpdateAnimation"));
	void AErrolCharacter::UpdateAnimation(ErrolState CurrentState)
	{
		ErrolCharacter_eventUpdateAnimation_Parms Parms;
		Parms.CurrentState=CurrentState;
		ProcessEvent(FindFunctionChecked(NAME_AErrolCharacter_UpdateAnimation),&Parms);
	}
	void AErrolCharacter::StaticRegisterNativesAErrolCharacter()
	{
		UClass* Class = AErrolCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterPeekState", &AErrolCharacter::execEnterPeekState },
			{ "ExitPeekState", &AErrolCharacter::execExitPeekState },
			{ "GetRandomWaypoint", &AErrolCharacter::execGetRandomWaypoint },
			{ "GoToRandomWaypoint", &AErrolCharacter::execGoToRandomWaypoint },
			{ "InitializeCanSeeVariables", &AErrolCharacter::execInitializeCanSeeVariables },
			{ "SetDetectionGauge", &AErrolCharacter::execSetDetectionGauge },
			{ "SetHearGauge", &AErrolCharacter::execSetHearGauge },
			{ "SetSeeFlashlightGauge", &AErrolCharacter::execSetSeeFlashlightGauge },
			{ "SetSeeGauge", &AErrolCharacter::execSetSeeGauge },
			{ "ShouldChase", &AErrolCharacter::execShouldChase },
			{ "ShouldKill", &AErrolCharacter::execShouldKill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AErrolCharacter_EndPeek_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_EndPeek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_EndPeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "EndPeek", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_EndPeek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EndPeek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_EndPeek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_EndPeek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_EndPeekAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_EndPeekAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIAnimation" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_EndPeekAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "EndPeekAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_EndPeekAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EndPeekAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_EndPeekAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_EndPeekAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_EnterPeekState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_EnterPeekState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_EnterPeekState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "EnterPeekState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_EnterPeekState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EnterPeekState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_EnterPeekState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_EnterPeekState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_ExitPeekState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_ExitPeekState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_ExitPeekState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "ExitPeekState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_ExitPeekState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_ExitPeekState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_ExitPeekState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_ExitPeekState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics
	{
		struct ErrolCharacter_eventGetRandomWaypoint_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolCharacter_eventGetRandomWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "GetRandomWaypoint", nullptr, nullptr, sizeof(ErrolCharacter_eventGetRandomWaypoint_Parms), Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_GoToRandomWaypoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_GoToRandomWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_GoToRandomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "GoToRandomWaypoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_GoToRandomWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_GoToRandomWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_GoToRandomWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_GoToRandomWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_InitializeCanSeeVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_InitializeCanSeeVariables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_InitializeCanSeeVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "InitializeCanSeeVariables", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_InitializeCanSeeVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_InitializeCanSeeVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_InitializeCanSeeVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_InitializeCanSeeVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_SetDetectionGauge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_SetDetectionGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_SetDetectionGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "SetDetectionGauge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_SetDetectionGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_SetDetectionGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_SetDetectionGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_SetDetectionGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_SetHearGauge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_SetHearGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_SetHearGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "SetHearGauge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_SetHearGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_SetHearGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_SetHearGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_SetHearGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_SetSeeFlashlightGauge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_SetSeeFlashlightGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_SetSeeFlashlightGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "SetSeeFlashlightGauge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_SetSeeFlashlightGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_SetSeeFlashlightGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_SetSeeFlashlightGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_SetSeeFlashlightGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_SetSeeGauge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_SetSeeGauge_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Have offset timers call these functions\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "Have offset timers call these functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_SetSeeGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "SetSeeGauge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_SetSeeGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_SetSeeGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_SetSeeGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_SetSeeGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_ShouldChase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_ShouldChase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_ShouldChase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "ShouldChase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_ShouldChase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_ShouldChase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_ShouldChase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_ShouldChase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_ShouldKill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_ShouldKill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_ShouldKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "ShouldKill", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_ShouldKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_ShouldKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_ShouldKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_ShouldKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_StartPeekAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_StartPeekAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIAnimation" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_StartPeekAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "StartPeekAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_StartPeekAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_StartPeekAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_StartPeekAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_StartPeekAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolCharacter_eventUpdateAnimation_Parms, CurrentState), Z_Construct_UEnum_ArchitectureExplorer_ErrolState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::NewProp_CurrentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::NewProp_CurrentState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIAnimation" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "UpdateAnimation", nullptr, nullptr, sizeof(ErrolCharacter_eventUpdateAnimation_Parms), Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_UpdateAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_UpdateAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AErrolCharacter_NoRegister()
	{
		return AErrolCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AErrolCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PeekState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeekState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PeekState;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PeekPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeekPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PeekPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPeekFound_MetaData[];
#endif
		static void NewProp_bPeekFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPeekFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidPeekPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidPeekPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPeeking_MetaData[];
#endif
		static void NewProp_bPeeking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPeeking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeftPeek_MetaData[];
#endif
		static void NewProp_bLeftPeek_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeftPeek;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPeekTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPeekTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeekTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PeekTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeekScareThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PeekScareThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeekScareLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PeekScareLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatrolSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvestigateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AErrolCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AErrolCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AErrolCharacter_EndPeek, "EndPeek" }, // 3061781572
		{ &Z_Construct_UFunction_AErrolCharacter_EndPeekAnimation, "EndPeekAnimation" }, // 3368898706
		{ &Z_Construct_UFunction_AErrolCharacter_EnterPeekState, "EnterPeekState" }, // 3880286838
		{ &Z_Construct_UFunction_AErrolCharacter_ExitPeekState, "ExitPeekState" }, // 195118670
		{ &Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint, "GetRandomWaypoint" }, // 623349707
		{ &Z_Construct_UFunction_AErrolCharacter_GoToRandomWaypoint, "GoToRandomWaypoint" }, // 453690708
		{ &Z_Construct_UFunction_AErrolCharacter_InitializeCanSeeVariables, "InitializeCanSeeVariables" }, // 3381494788
		{ &Z_Construct_UFunction_AErrolCharacter_SetDetectionGauge, "SetDetectionGauge" }, // 2628373435
		{ &Z_Construct_UFunction_AErrolCharacter_SetHearGauge, "SetHearGauge" }, // 727653839
		{ &Z_Construct_UFunction_AErrolCharacter_SetSeeFlashlightGauge, "SetSeeFlashlightGauge" }, // 781599227
		{ &Z_Construct_UFunction_AErrolCharacter_SetSeeGauge, "SetSeeGauge" }, // 3549294918
		{ &Z_Construct_UFunction_AErrolCharacter_ShouldChase, "ShouldChase" }, // 3491407210
		{ &Z_Construct_UFunction_AErrolCharacter_ShouldKill, "ShouldKill" }, // 674555953
		{ &Z_Construct_UFunction_AErrolCharacter_StartPeekAnimation, "StartPeekAnimation" }, // 1380945858
		{ &Z_Construct_UFunction_AErrolCharacter_UpdateAnimation, "UpdateAnimation" }, // 935012373
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ErrolCharacter.h" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_State_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, State), Z_Construct_UEnum_ArchitectureExplorer_ErrolState, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LastState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LastState_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LastState = { "LastState", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, LastState), Z_Construct_UEnum_ArchitectureExplorer_ErrolState, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LastState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LastState_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Waypoints_MetaData[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Waypoints_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekState_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "//\x09Peek stuff\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "Peek stuff" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekState = { "PeekState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, PeekState), Z_Construct_UEnum_ArchitectureExplorer_ErrolPeekState, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekState_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekPoints_Inner = { "PeekPoints", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APeekPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekPoints_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekPoints = { "PeekPoints", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, PeekPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeekFound_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeekFound_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bPeekFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeekFound = { "bPeekFound", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeekFound_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeekFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeekFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ValidPeekPoint_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ValidPeekPoint = { "ValidPeekPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, ValidPeekPoint), Z_Construct_UClass_APeekPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ValidPeekPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ValidPeekPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeeking_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeeking_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bPeeking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeeking = { "bPeeking", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeeking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeeking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeeking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftPeek_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftPeek_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bLeftPeek = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftPeek = { "bLeftPeek", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftPeek_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftPeek_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftPeek_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MaxPeekTime_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MaxPeekTime = { "MaxPeekTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, MaxPeekTime), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MaxPeekTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MaxPeekTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekTime_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekTime = { "PeekTime", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, PeekTime), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekScareThreshold_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "//\x09When PeekScareLevel goes over this value, start end peek\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "When PeekScareLevel goes over this value, start end peek" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekScareThreshold = { "PeekScareThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, PeekScareThreshold), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekScareThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekScareThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekScareLevel_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "//\x09Used to keep track of how long the player has looked at Errol while he's peeking and how much they are looking at him\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "Used to keep track of how long the player has looked at Errol while he's peeking and how much they are looking at him" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekScareLevel = { "PeekScareLevel", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, PeekScareLevel), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekScareLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekScareLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PatrolSpeed_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PatrolSpeed = { "PatrolSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, PatrolSpeed), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PatrolSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PatrolSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseSpeed_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseSpeed = { "ChaseSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, ChaseSpeed), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_InvestigateSpeed_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_InvestigateSpeed = { "InvestigateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, InvestigateSpeed), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_InvestigateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_InvestigateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillSpeed_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillSpeed = { "KillSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, KillSpeed), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, Speed), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AErrolCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LastState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LastState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Waypoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeekFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ValidPeekPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPeeking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftPeek,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MaxPeekTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekScareThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekScareLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PatrolSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_InvestigateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AErrolCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AErrolCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AErrolCharacter_Statics::ClassParams = {
		&AErrolCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AErrolCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AErrolCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AErrolCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AErrolCharacter, 300693638);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AErrolCharacter>()
	{
		return AErrolCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AErrolCharacter(Z_Construct_UClass_AErrolCharacter, &AErrolCharacter::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AErrolCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AErrolCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
