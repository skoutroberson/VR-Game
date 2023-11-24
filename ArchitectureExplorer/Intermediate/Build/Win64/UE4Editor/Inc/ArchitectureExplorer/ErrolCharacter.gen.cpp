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
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APeekPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolSaw_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_ErrolState_Hash() { return 3286587763U; }
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
				{ "ErrolState::STATE_SHOULDERPEEK", (int64)ErrolState::STATE_SHOULDERPEEK },
				{ "ErrolState::STATE_FLYAT", (int64)ErrolState::STATE_FLYAT },
				{ "ErrolState::STATE_BEINGCUT", (int64)ErrolState::STATE_BEINGCUT },
				{ "ErrolState::STATE_UPPERWINDOWSCARE", (int64)ErrolState::STATE_UPPERWINDOWSCARE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "ErrolCharacter.h" },
				{ "STATE_BEINGCUT.DisplayName", "BeingCut" },
				{ "STATE_BEINGCUT.Name", "ErrolState::STATE_BEINGCUT" },
				{ "STATE_CHASE.DisplayName", "Chase" },
				{ "STATE_CHASE.Name", "ErrolState::STATE_CHASE" },
				{ "STATE_FLYAT.DisplayName", "FlyAt" },
				{ "STATE_FLYAT.Name", "ErrolState::STATE_FLYAT" },
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
				{ "STATE_SHOULDERPEEK.DisplayName", "ShoulderPeek" },
				{ "STATE_SHOULDERPEEK.Name", "ErrolState::STATE_SHOULDERPEEK" },
				{ "STATE_UPPERWINDOWSCARE.DisplayName", "UpperWindowScare" },
				{ "STATE_UPPERWINDOWSCARE.Name", "ErrolState::STATE_UPPERWINDOWSCARE" },
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
	DEFINE_FUNCTION(AErrolCharacter::execExitUpperWindowScareState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitUpperWindowScareState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execTickUpperWindowScareState)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickUpperWindowScareState(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execEnterUpperWindowScareState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterUpperWindowScareState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execRemoveFlankBlocker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFlankBlocker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execUpdateFlankBlocker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFlankBlocker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execExitShoulderPeekState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitShoulderPeekState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execExitPeekState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitPeekState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execKillPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execEndKillState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndKillState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execTickKillState)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickKillState(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execEnterKillState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterKillState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execEndFlyAtState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndFlyAtState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execTickFlyAtState)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickFlyAtState(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execEnterFlyAtState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterFlyAtState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execExitChaseState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitChaseState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execOpenDoorBlockingPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoorBlockingPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execTickChaseState)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickChaseState(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execEnterChaseState)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ChaseDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterChaseState(Z_Param_MaxSpeed,Z_Param_ChaseDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execEnterShoulderPeekState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterShoulderPeekState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execEnterPeekState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterPeekState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execCanPlayerSeeMeMocap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlayerSeeMeMocap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolCharacter::execCanThePlayerSeeMe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanThePlayerSeeMe();
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
	static FName NAME_AErrolCharacter_DisappearAndEndChase = FName(TEXT("DisappearAndEndChase"));
	void AErrolCharacter::DisappearAndEndChase()
	{
		ProcessEvent(FindFunctionChecked(NAME_AErrolCharacter_DisappearAndEndChase),NULL);
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
	static FName NAME_AErrolCharacter_FlyAtPlayer = FName(TEXT("FlyAtPlayer"));
	void AErrolCharacter::FlyAtPlayer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AErrolCharacter_FlyAtPlayer),NULL);
	}
	static FName NAME_AErrolCharacter_OpenDoor = FName(TEXT("OpenDoor"));
	void AErrolCharacter::OpenDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AErrolCharacter_OpenDoor),NULL);
	}
	static FName NAME_AErrolCharacter_RevSaw = FName(TEXT("RevSaw"));
	void AErrolCharacter::RevSaw()
	{
		ProcessEvent(FindFunctionChecked(NAME_AErrolCharacter_RevSaw),NULL);
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
			{ "CanPlayerSeeMeMocap", &AErrolCharacter::execCanPlayerSeeMeMocap },
			{ "CanThePlayerSeeMe", &AErrolCharacter::execCanThePlayerSeeMe },
			{ "EndFlyAtState", &AErrolCharacter::execEndFlyAtState },
			{ "EndKillState", &AErrolCharacter::execEndKillState },
			{ "EnterChaseState", &AErrolCharacter::execEnterChaseState },
			{ "EnterFlyAtState", &AErrolCharacter::execEnterFlyAtState },
			{ "EnterKillState", &AErrolCharacter::execEnterKillState },
			{ "EnterPeekState", &AErrolCharacter::execEnterPeekState },
			{ "EnterShoulderPeekState", &AErrolCharacter::execEnterShoulderPeekState },
			{ "EnterUpperWindowScareState", &AErrolCharacter::execEnterUpperWindowScareState },
			{ "ExitChaseState", &AErrolCharacter::execExitChaseState },
			{ "ExitPeekState", &AErrolCharacter::execExitPeekState },
			{ "ExitShoulderPeekState", &AErrolCharacter::execExitShoulderPeekState },
			{ "ExitUpperWindowScareState", &AErrolCharacter::execExitUpperWindowScareState },
			{ "GetRandomWaypoint", &AErrolCharacter::execGetRandomWaypoint },
			{ "GoToRandomWaypoint", &AErrolCharacter::execGoToRandomWaypoint },
			{ "InitializeCanSeeVariables", &AErrolCharacter::execInitializeCanSeeVariables },
			{ "KillPlayer", &AErrolCharacter::execKillPlayer },
			{ "OpenDoorBlockingPath", &AErrolCharacter::execOpenDoorBlockingPath },
			{ "RemoveFlankBlocker", &AErrolCharacter::execRemoveFlankBlocker },
			{ "SetDetectionGauge", &AErrolCharacter::execSetDetectionGauge },
			{ "SetHearGauge", &AErrolCharacter::execSetHearGauge },
			{ "SetSeeFlashlightGauge", &AErrolCharacter::execSetSeeFlashlightGauge },
			{ "SetSeeGauge", &AErrolCharacter::execSetSeeGauge },
			{ "ShouldChase", &AErrolCharacter::execShouldChase },
			{ "ShouldKill", &AErrolCharacter::execShouldKill },
			{ "TickChaseState", &AErrolCharacter::execTickChaseState },
			{ "TickFlyAtState", &AErrolCharacter::execTickFlyAtState },
			{ "TickKillState", &AErrolCharacter::execTickKillState },
			{ "TickUpperWindowScareState", &AErrolCharacter::execTickUpperWindowScareState },
			{ "UpdateFlankBlocker", &AErrolCharacter::execUpdateFlankBlocker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics
	{
		struct ErrolCharacter_eventCanPlayerSeeMeMocap_Parms
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
	void Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ErrolCharacter_eventCanPlayerSeeMeMocap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ErrolCharacter_eventCanPlayerSeeMeMocap_Parms), &Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "CanPlayerSeeMeMocap", nullptr, nullptr, sizeof(ErrolCharacter_eventCanPlayerSeeMeMocap_Parms), Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics
	{
		struct ErrolCharacter_eventCanThePlayerSeeMe_Parms
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
	void Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ErrolCharacter_eventCanThePlayerSeeMe_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ErrolCharacter_eventCanThePlayerSeeMe_Parms), &Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// returns false if the player can MOST LIKELY not see me. This uses 14 raycasts from the player camera to bones on the meshes to determine this.\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "returns false if the player can MOST LIKELY not see me. This uses 14 raycasts from the player camera to bones on the meshes to determine this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "CanThePlayerSeeMe", nullptr, nullptr, sizeof(ErrolCharacter_eventCanThePlayerSeeMe_Parms), Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_DisappearAndEndChase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_DisappearAndEndChase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_DisappearAndEndChase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "DisappearAndEndChase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_DisappearAndEndChase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_DisappearAndEndChase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_DisappearAndEndChase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_DisappearAndEndChase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_EndFlyAtState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_EndFlyAtState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_EndFlyAtState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "EndFlyAtState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_EndFlyAtState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EndFlyAtState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_EndFlyAtState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_EndFlyAtState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_EndKillState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_EndKillState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_EndKillState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "EndKillState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_EndKillState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EndKillState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_EndKillState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_EndKillState_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics
	{
		struct ErrolCharacter_eventEnterChaseState_Parms
		{
			float MaxSpeed;
			float ChaseDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolCharacter_eventEnterChaseState_Parms, MaxSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::NewProp_ChaseDuration = { "ChaseDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolCharacter_eventEnterChaseState_Parms, ChaseDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::NewProp_ChaseDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// CHASE\n" },
		{ "CPP_Default_ChaseDuration", "30.000000" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "CHASE" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "EnterChaseState", nullptr, nullptr, sizeof(ErrolCharacter_eventEnterChaseState_Parms), Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_EnterChaseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_EnterChaseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_EnterFlyAtState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_EnterFlyAtState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Change Errols animation into a scary pose animation of him brandishing the chainsaw and have him move through the player camera until he is out of view\n// then disappear him and roll to see if the player should get killed.\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "Change Errols animation into a scary pose animation of him brandishing the chainsaw and have him move through the player camera until he is out of view\nthen disappear him and roll to see if the player should get killed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_EnterFlyAtState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "EnterFlyAtState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_EnterFlyAtState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EnterFlyAtState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_EnterFlyAtState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_EnterFlyAtState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_EnterKillState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_EnterKillState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_EnterKillState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "EnterKillState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_EnterKillState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EnterKillState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_EnterKillState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_EnterKillState_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AErrolCharacter_EnterShoulderPeekState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_EnterShoulderPeekState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_EnterShoulderPeekState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "EnterShoulderPeekState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_EnterShoulderPeekState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EnterShoulderPeekState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_EnterShoulderPeekState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_EnterShoulderPeekState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_EnterUpperWindowScareState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_EnterUpperWindowScareState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Upper Window Scare State:\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "Upper Window Scare State:" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_EnterUpperWindowScareState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "EnterUpperWindowScareState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_EnterUpperWindowScareState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_EnterUpperWindowScareState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_EnterUpperWindowScareState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_EnterUpperWindowScareState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_ExitChaseState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_ExitChaseState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_ExitChaseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "ExitChaseState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_ExitChaseState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_ExitChaseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_ExitChaseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_ExitChaseState_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AErrolCharacter_ExitShoulderPeekState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_ExitShoulderPeekState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_ExitShoulderPeekState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "ExitShoulderPeekState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_ExitShoulderPeekState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_ExitShoulderPeekState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_ExitShoulderPeekState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_ExitShoulderPeekState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_ExitUpperWindowScareState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_ExitUpperWindowScareState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_ExitUpperWindowScareState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "ExitUpperWindowScareState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_ExitUpperWindowScareState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_ExitUpperWindowScareState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_ExitUpperWindowScareState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_ExitUpperWindowScareState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_FlyAtPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_FlyAtPlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// misc\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "misc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_FlyAtPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "FlyAtPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_FlyAtPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_FlyAtPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_FlyAtPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_FlyAtPlayer_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AErrolCharacter_KillPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_KillPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_KillPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "KillPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_KillPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_KillPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_KillPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_KillPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_OpenDoorBlockingPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_OpenDoorBlockingPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_OpenDoorBlockingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "OpenDoorBlockingPath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_OpenDoorBlockingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_OpenDoorBlockingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_OpenDoorBlockingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_OpenDoorBlockingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_RemoveFlankBlocker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_RemoveFlankBlocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_RemoveFlankBlocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "RemoveFlankBlocker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_RemoveFlankBlocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_RemoveFlankBlocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_RemoveFlankBlocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_RemoveFlankBlocker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_RevSaw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_RevSaw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_RevSaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "RevSaw", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_RevSaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_RevSaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_RevSaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_RevSaw_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics
	{
		struct ErrolCharacter_eventTickChaseState_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolCharacter_eventTickChaseState_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "TickChaseState", nullptr, nullptr, sizeof(ErrolCharacter_eventTickChaseState_Parms), Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_TickChaseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_TickChaseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics
	{
		struct ErrolCharacter_eventTickFlyAtState_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolCharacter_eventTickFlyAtState_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "TickFlyAtState", nullptr, nullptr, sizeof(ErrolCharacter_eventTickFlyAtState_Parms), Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_TickFlyAtState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_TickFlyAtState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics
	{
		struct ErrolCharacter_eventTickKillState_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolCharacter_eventTickKillState_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "TickKillState", nullptr, nullptr, sizeof(ErrolCharacter_eventTickKillState_Parms), Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_TickKillState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_TickKillState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics
	{
		struct ErrolCharacter_eventTickUpperWindowScareState_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolCharacter_eventTickUpperWindowScareState_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "TickUpperWindowScareState", nullptr, nullptr, sizeof(ErrolCharacter_eventTickUpperWindowScareState_Parms), Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AErrolCharacter_UpdateFlankBlocker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolCharacter_UpdateFlankBlocker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolCharacter_UpdateFlankBlocker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolCharacter, nullptr, "UpdateFlankBlocker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolCharacter_UpdateFlankBlocker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolCharacter_UpdateFlankBlocker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolCharacter_UpdateFlankBlocker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolCharacter_UpdateFlankBlocker_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MocapMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MocapMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootStepSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightFootStepSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootStepSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftFootStepSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WoodFootStepSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WoodFootStepSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtFootStepSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirtFootStepSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcreteFootStepSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcreteFootStepSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileFootstepSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileFootstepSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StairFootstepSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StairFootstepSound;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootstepMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FootstepMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDeathSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerDeathSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRightFootOnGround_MetaData[];
#endif
		static void NewProp_bRightFootOnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRightFootOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeftFootOnGround_MetaData[];
#endif
		static void NewProp_bLeftFootOnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeftFootOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVariablesInitialized_MetaData[];
#endif
		static void NewProp_bVariablesInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVariablesInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorBlockingPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorBlockingPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateMoveSpeedBasedOnPlayerCamera_MetaData[];
#endif
		static void NewProp_bUpdateMoveSpeedBasedOnPlayerCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMoveSpeedBasedOnPlayerCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedUpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedUpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateSpeedBasedOnPlayerCameraSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateSpeedBasedOnPlayerCameraSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_KillChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFlyAtDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFlyAtDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKillImmediately_MetaData[];
#endif
		static void NewProp_bKillImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKillImmediately;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlyThroughDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlyThroughDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlyThrough_MetaData[];
#endif
		static void NewProp_bFlyThrough_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlyThrough;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKillingPlayer_MetaData[];
#endif
		static void NewProp_bKillingPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKillingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseKillDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseKillDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodFXActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BloodFXActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodSpawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloodSpawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnBlood_MetaData[];
#endif
		static void NewProp_bSpawnBlood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnBlood;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeekDoorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PeekDoorCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenPeeks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SeenPeeks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChaseAfterPeek_MetaData[];
#endif
		static void NewProp_bChaseAfterPeek_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChaseAfterPeek;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlankBlocker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlankBlocker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlankOverlapper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlankOverlapper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlyAtSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlyAtSpeed;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCutInHalf_MetaData[];
#endif
		static void NewProp_bCutInHalf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCutInHalf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrolSaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ErrolSaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSeenByPlayer_MetaData[];
#endif
		static void NewProp_bSeenByPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeenByPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SeenTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicksBeforeSeen_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TicksBeforeSeen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenDotThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeenDotThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenStinger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenStinger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayStingerWhenSeen_MetaData[];
#endif
		static void NewProp_bPlayStingerWhenSeen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayStingerWhenSeen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AErrolCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AErrolCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AErrolCharacter_CanPlayerSeeMeMocap, "CanPlayerSeeMeMocap" }, // 4166433094
		{ &Z_Construct_UFunction_AErrolCharacter_CanThePlayerSeeMe, "CanThePlayerSeeMe" }, // 2945474745
		{ &Z_Construct_UFunction_AErrolCharacter_DisappearAndEndChase, "DisappearAndEndChase" }, // 2421458275
		{ &Z_Construct_UFunction_AErrolCharacter_EndFlyAtState, "EndFlyAtState" }, // 1733603055
		{ &Z_Construct_UFunction_AErrolCharacter_EndKillState, "EndKillState" }, // 2785992446
		{ &Z_Construct_UFunction_AErrolCharacter_EndPeek, "EndPeek" }, // 3061781572
		{ &Z_Construct_UFunction_AErrolCharacter_EndPeekAnimation, "EndPeekAnimation" }, // 3368898706
		{ &Z_Construct_UFunction_AErrolCharacter_EnterChaseState, "EnterChaseState" }, // 1848855494
		{ &Z_Construct_UFunction_AErrolCharacter_EnterFlyAtState, "EnterFlyAtState" }, // 4091144147
		{ &Z_Construct_UFunction_AErrolCharacter_EnterKillState, "EnterKillState" }, // 2920122354
		{ &Z_Construct_UFunction_AErrolCharacter_EnterPeekState, "EnterPeekState" }, // 3880286838
		{ &Z_Construct_UFunction_AErrolCharacter_EnterShoulderPeekState, "EnterShoulderPeekState" }, // 4160678110
		{ &Z_Construct_UFunction_AErrolCharacter_EnterUpperWindowScareState, "EnterUpperWindowScareState" }, // 636383724
		{ &Z_Construct_UFunction_AErrolCharacter_ExitChaseState, "ExitChaseState" }, // 1484088169
		{ &Z_Construct_UFunction_AErrolCharacter_ExitPeekState, "ExitPeekState" }, // 195118670
		{ &Z_Construct_UFunction_AErrolCharacter_ExitShoulderPeekState, "ExitShoulderPeekState" }, // 3425939680
		{ &Z_Construct_UFunction_AErrolCharacter_ExitUpperWindowScareState, "ExitUpperWindowScareState" }, // 676053072
		{ &Z_Construct_UFunction_AErrolCharacter_FlyAtPlayer, "FlyAtPlayer" }, // 1649931519
		{ &Z_Construct_UFunction_AErrolCharacter_GetRandomWaypoint, "GetRandomWaypoint" }, // 623349707
		{ &Z_Construct_UFunction_AErrolCharacter_GoToRandomWaypoint, "GoToRandomWaypoint" }, // 453690708
		{ &Z_Construct_UFunction_AErrolCharacter_InitializeCanSeeVariables, "InitializeCanSeeVariables" }, // 3381494788
		{ &Z_Construct_UFunction_AErrolCharacter_KillPlayer, "KillPlayer" }, // 4215045179
		{ &Z_Construct_UFunction_AErrolCharacter_OpenDoor, "OpenDoor" }, // 950942076
		{ &Z_Construct_UFunction_AErrolCharacter_OpenDoorBlockingPath, "OpenDoorBlockingPath" }, // 3327573011
		{ &Z_Construct_UFunction_AErrolCharacter_RemoveFlankBlocker, "RemoveFlankBlocker" }, // 333934512
		{ &Z_Construct_UFunction_AErrolCharacter_RevSaw, "RevSaw" }, // 3321850812
		{ &Z_Construct_UFunction_AErrolCharacter_SetDetectionGauge, "SetDetectionGauge" }, // 2628373435
		{ &Z_Construct_UFunction_AErrolCharacter_SetHearGauge, "SetHearGauge" }, // 727653839
		{ &Z_Construct_UFunction_AErrolCharacter_SetSeeFlashlightGauge, "SetSeeFlashlightGauge" }, // 781599227
		{ &Z_Construct_UFunction_AErrolCharacter_SetSeeGauge, "SetSeeGauge" }, // 3549294918
		{ &Z_Construct_UFunction_AErrolCharacter_ShouldChase, "ShouldChase" }, // 3491407210
		{ &Z_Construct_UFunction_AErrolCharacter_ShouldKill, "ShouldKill" }, // 674555953
		{ &Z_Construct_UFunction_AErrolCharacter_StartPeekAnimation, "StartPeekAnimation" }, // 1380945858
		{ &Z_Construct_UFunction_AErrolCharacter_TickChaseState, "TickChaseState" }, // 1528248515
		{ &Z_Construct_UFunction_AErrolCharacter_TickFlyAtState, "TickFlyAtState" }, // 977977375
		{ &Z_Construct_UFunction_AErrolCharacter_TickKillState, "TickKillState" }, // 555512801
		{ &Z_Construct_UFunction_AErrolCharacter_TickUpperWindowScareState, "TickUpperWindowScareState" }, // 3579540977
		{ &Z_Construct_UFunction_AErrolCharacter_UpdateAnimation, "UpdateAnimation" }, // 935012373
		{ &Z_Construct_UFunction_AErrolCharacter_UpdateFlankBlocker, "UpdateFlankBlocker" }, // 4072021637
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ErrolCharacter.h" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MocapMesh_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MocapMesh = { "MocapMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, MocapMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MocapMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MocapMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_RightFootStepSound_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_RightFootStepSound = { "RightFootStepSound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, RightFootStepSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_RightFootStepSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_RightFootStepSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LeftFootStepSound_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LeftFootStepSound = { "LeftFootStepSound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, LeftFootStepSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LeftFootStepSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LeftFootStepSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_WoodFootStepSound_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_WoodFootStepSound = { "WoodFootStepSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, WoodFootStepSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_WoodFootStepSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_WoodFootStepSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_DirtFootStepSound_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_DirtFootStepSound = { "DirtFootStepSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, DirtFootStepSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_DirtFootStepSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_DirtFootStepSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ConcreteFootStepSound_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ConcreteFootStepSound = { "ConcreteFootStepSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, ConcreteFootStepSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ConcreteFootStepSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ConcreteFootStepSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_TileFootstepSound_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_TileFootstepSound = { "TileFootstepSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, TileFootstepSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_TileFootstepSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_TileFootstepSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_StairFootstepSound_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_StairFootstepSound = { "StairFootstepSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, StairFootstepSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_StairFootstepSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_StairFootstepSound_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FootstepMap_ValueProp = { "FootstepMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FootstepMap_Key_KeyProp = { "FootstepMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FootstepMap_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FootstepMap = { "FootstepMap", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, FootstepMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FootstepMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FootstepMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PlayerDeathSound_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PlayerDeathSound = { "PlayerDeathSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, PlayerDeathSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PlayerDeathSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PlayerDeathSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bRightFootOnGround_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bRightFootOnGround_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bRightFootOnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bRightFootOnGround = { "bRightFootOnGround", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bRightFootOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bRightFootOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bRightFootOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftFootOnGround_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftFootOnGround_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bLeftFootOnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftFootOnGround = { "bLeftFootOnGround", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftFootOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftFootOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftFootOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, BodyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BodyMesh_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bVariablesInitialized_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bVariablesInitialized_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bVariablesInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bVariablesInitialized = { "bVariablesInitialized", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bVariablesInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bVariablesInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bVariablesInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseDuration_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// duration in seconds that a chase will last\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "duration in seconds that a chase will last" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseDuration = { "ChaseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, ChaseDuration), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseTime_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// keeps track of how long the current chase has took\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "keeps track of how long the current chase has took" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseTime = { "ChaseTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, ChaseTime), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_DoorBlockingPath_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_DoorBlockingPath = { "DoorBlockingPath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, DoorBlockingPath), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_DoorBlockingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_DoorBlockingPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bUpdateMoveSpeedBasedOnPlayerCamera_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// this is turned on once I am sprinting.\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "this is turned on once I am sprinting." },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bUpdateMoveSpeedBasedOnPlayerCamera_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bUpdateMoveSpeedBasedOnPlayerCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bUpdateMoveSpeedBasedOnPlayerCamera = { "bUpdateMoveSpeedBasedOnPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bUpdateMoveSpeedBasedOnPlayerCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bUpdateMoveSpeedBasedOnPlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bUpdateMoveSpeedBasedOnPlayerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SprintSpeedUpSpeed_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// this is how fast Errol will increase his speed into a sprint\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "this is how fast Errol will increase his speed into a sprint" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SprintSpeedUpSpeed = { "SprintSpeedUpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, SprintSpeedUpSpeed), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SprintSpeedUpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SprintSpeedUpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_UpdateSpeedBasedOnPlayerCameraSpeed_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_UpdateSpeedBasedOnPlayerCameraSpeed = { "UpdateSpeedBasedOnPlayerCameraSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, UpdateSpeedBasedOnPlayerCameraSpeed), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_UpdateSpeedBasedOnPlayerCameraSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_UpdateSpeedBasedOnPlayerCameraSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillChance_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// this it the number that will be rolled\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "this it the number that will be rolled" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillChance = { "KillChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, KillChance), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MaxFlyAtDistance_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MaxFlyAtDistance = { "MaxFlyAtDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, MaxFlyAtDistance), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MaxFlyAtDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MaxFlyAtDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillImmediately_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// if true, Errol will kill the player instead of flying at them and rolling for the kill\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "if true, Errol will kill the player instead of flying at them and rolling for the kill" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillImmediately_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bKillImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillImmediately = { "bKillImmediately", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillImmediately_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillImmediately_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlyThroughDistance_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlyThroughDistance = { "FlyThroughDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, FlyThroughDistance), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlyThroughDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlyThroughDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bFlyThrough_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bFlyThrough_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bFlyThrough = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bFlyThrough = { "bFlyThrough", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bFlyThrough_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bFlyThrough_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bFlyThrough_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillingPlayer_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// KILL\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "KILL" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillingPlayer_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bKillingPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillingPlayer = { "bKillingPlayer", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillingPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillingPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillDistance_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillDistance = { "KillDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, KillDistance), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseKillDistance_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseKillDistance = { "ChaseKillDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, ChaseKillDistance), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseKillDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseKillDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BloodFXActor_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BloodFXActor = { "BloodFXActor", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, BloodFXActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BloodFXActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BloodFXActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BloodSpawnTime_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// How often to spawn blood fx\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "How often to spawn blood fx" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BloodSpawnTime = { "BloodSpawnTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, BloodSpawnTime), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BloodSpawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BloodSpawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSpawnBlood_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSpawnBlood_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bSpawnBlood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSpawnBlood = { "bSpawnBlood", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSpawnBlood_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSpawnBlood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSpawnBlood_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekState_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekDoorCurve_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekDoorCurve = { "PeekDoorCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, PeekDoorCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekDoorCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekDoorCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenPeeks_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// number of peeks that the player has seen\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "number of peeks that the player has seen" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenPeeks = { "SeenPeeks", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, SeenPeeks), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenPeeks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenPeeks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bChaseAfterPeek_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bChaseAfterPeek_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bChaseAfterPeek = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bChaseAfterPeek = { "bChaseAfterPeek", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bChaseAfterPeek_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bChaseAfterPeek_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bChaseAfterPeek_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlankBlocker_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// used for trying to block part of the nav mesh so errol flanks the player\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "used for trying to block part of the nav mesh so errol flanks the player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlankBlocker = { "FlankBlocker", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, FlankBlocker), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlankBlocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlankBlocker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlankOverlapper_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlankOverlapper = { "FlankOverlapper", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, FlankOverlapper), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlankOverlapper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlankOverlapper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_IdleSpeed_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// Various settings\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "Various settings" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_IdleSpeed = { "IdleSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, IdleSpeed), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_IdleSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_IdleSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlyAtSpeed_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlyAtSpeed = { "FlyAtSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, FlyAtSpeed), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlyAtSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlyAtSpeed_MetaData)) };
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
		{ "Comment", "// This can be anywhere between 0 and 220.f;\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "This can be anywhere between 0 and 220.f;" },
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillRadius_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillRadius = { "KillRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, KillRadius), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bCutInHalf_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bCutInHalf_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bCutInHalf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bCutInHalf = { "bCutInHalf", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bCutInHalf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bCutInHalf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bCutInHalf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ErrolSaw_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ErrolSaw = { "ErrolSaw", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, ErrolSaw), Z_Construct_UClass_AErrolSaw_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ErrolSaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ErrolSaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSeenByPlayer_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// used in chase tick for playing a stinger and increasing movement speed when player sees Errol\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "used in chase tick for playing a stinger and increasing movement speed when player sees Errol" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSeenByPlayer_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bSeenByPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSeenByPlayer = { "bSeenByPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSeenByPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSeenByPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSeenByPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenTicks_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "Comment", "// set to 0 in EnterChaseState(), incremented when seen in TickChaseState()\n" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
		{ "ToolTip", "set to 0 in EnterChaseState(), incremented when seen in TickChaseState()" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenTicks = { "SeenTicks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, SeenTicks), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_TicksBeforeSeen_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_TicksBeforeSeen = { "TicksBeforeSeen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, TicksBeforeSeen), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_TicksBeforeSeen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_TicksBeforeSeen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenDotThreshold_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenDotThreshold = { "SeenDotThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, SeenDotThreshold), METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenDotThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenDotThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenStinger_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenStinger = { "SeenStinger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolCharacter, SeenStinger), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenStinger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenStinger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPlayStingerWhenSeen_MetaData[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "ErrolCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPlayStingerWhenSeen_SetBit(void* Obj)
	{
		((AErrolCharacter*)Obj)->bPlayStingerWhenSeen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPlayStingerWhenSeen = { "bPlayStingerWhenSeen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AErrolCharacter), &Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPlayStingerWhenSeen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPlayStingerWhenSeen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPlayStingerWhenSeen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AErrolCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MocapMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_RightFootStepSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LeftFootStepSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_WoodFootStepSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_DirtFootStepSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ConcreteFootStepSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_TileFootstepSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_StairFootstepSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FootstepMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FootstepMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FootstepMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PlayerDeathSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bRightFootOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bLeftFootOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LastState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_LastState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Waypoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bVariablesInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_DoorBlockingPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bUpdateMoveSpeedBasedOnPlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SprintSpeedUpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_UpdateSpeedBasedOnPlayerCameraSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_MaxFlyAtDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlyThroughDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bFlyThrough,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bKillingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseKillDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BloodFXActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_BloodSpawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSpawnBlood,
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PeekDoorCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenPeeks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bChaseAfterPeek,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlankBlocker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlankOverlapper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_IdleSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_FlyAtSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_PatrolSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ChaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_InvestigateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_KillRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bCutInHalf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_ErrolSaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bSeenByPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_TicksBeforeSeen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenDotThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_SeenStinger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolCharacter_Statics::NewProp_bPlayStingerWhenSeen,
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
	IMPLEMENT_CLASS(AErrolCharacter, 1323755498);
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
