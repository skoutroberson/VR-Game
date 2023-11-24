// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/HauntManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHauntManager() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_HauntManagerState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AHauntManager_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AHauntManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* HauntManagerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_HauntManagerState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("HauntManagerState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<HauntManagerState>()
	{
		return HauntManagerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_HauntManagerState(HauntManagerState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("HauntManagerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_HauntManagerState_Hash() { return 473501959U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_HauntManagerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("HauntManagerState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_HauntManagerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HauntManagerState::STATE_IDLE", (int64)HauntManagerState::STATE_IDLE },
				{ "HauntManagerState::STATE_TIMER", (int64)HauntManagerState::STATE_TIMER },
				{ "HauntManagerState::STATE_HAUNTING", (int64)HauntManagerState::STATE_HAUNTING },
				{ "HauntManagerState::STATE_PAUSED", (int64)HauntManagerState::STATE_PAUSED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "HauntManager.h" },
				{ "STATE_HAUNTING.DisplayName", "Haunting" },
				{ "STATE_HAUNTING.Name", "HauntManagerState::STATE_HAUNTING" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "HauntManagerState::STATE_IDLE" },
				{ "STATE_PAUSED.DisplayName", "Paused" },
				{ "STATE_PAUSED.Name", "HauntManagerState::STATE_PAUSED" },
				{ "STATE_TIMER.DisplayName", "Timer" },
				{ "STATE_TIMER.Name", "HauntManagerState::STATE_TIMER" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"HauntManagerState",
				"HauntManagerState",
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
	DEFINE_FUNCTION(AHauntManager::execRollHauntTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RollHauntTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHauntManager::execResumeHaunting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeHaunting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHauntManager::execPauseHaunting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseHaunting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHauntManager::execStopHaunting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopHaunting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHauntManager::execStartHaunting)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HauntLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHaunting(Z_Param_HauntLevel,Z_Param_MinTime,Z_Param_MaxTime);
		P_NATIVE_END;
	}
	static FName NAME_AHauntManager_StartHaunt = FName(TEXT("StartHaunt"));
	void AHauntManager::StartHaunt()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHauntManager_StartHaunt),NULL);
	}
	void AHauntManager::StaticRegisterNativesAHauntManager()
	{
		UClass* Class = AHauntManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PauseHaunting", &AHauntManager::execPauseHaunting },
			{ "ResumeHaunting", &AHauntManager::execResumeHaunting },
			{ "RollHauntTime", &AHauntManager::execRollHauntTime },
			{ "StartHaunting", &AHauntManager::execStartHaunting },
			{ "StopHaunting", &AHauntManager::execStopHaunting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHauntManager_PauseHaunting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHauntManager_PauseHaunting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHauntManager_PauseHaunting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHauntManager, nullptr, "PauseHaunting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHauntManager_PauseHaunting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHauntManager_PauseHaunting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHauntManager_PauseHaunting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHauntManager_PauseHaunting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHauntManager_ResumeHaunting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHauntManager_ResumeHaunting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHauntManager_ResumeHaunting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHauntManager, nullptr, "ResumeHaunting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHauntManager_ResumeHaunting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHauntManager_ResumeHaunting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHauntManager_ResumeHaunting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHauntManager_ResumeHaunting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHauntManager_RollHauntTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHauntManager_RollHauntTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Sets HauntTime to a random float in the range MinHauntTime - MaxHauntTime.\n" },
		{ "ModuleRelativePath", "HauntManager.h" },
		{ "ToolTip", "Sets HauntTime to a random float in the range MinHauntTime - MaxHauntTime." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHauntManager_RollHauntTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHauntManager, nullptr, "RollHauntTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHauntManager_RollHauntTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHauntManager_RollHauntTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHauntManager_RollHauntTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHauntManager_RollHauntTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHauntManager_StartHaunt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHauntManager_StartHaunt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHauntManager_StartHaunt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHauntManager, nullptr, "StartHaunt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHauntManager_StartHaunt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHauntManager_StartHaunt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHauntManager_StartHaunt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHauntManager_StartHaunt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHauntManager_StartHaunting_Statics
	{
		struct HauntManager_eventStartHaunting_Parms
		{
			int32 HauntLevel;
			float MinTime;
			float MaxTime;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HauntLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::NewProp_HauntLevel = { "HauntLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HauntManager_eventStartHaunting_Parms, HauntLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::NewProp_MinTime = { "MinTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HauntManager_eventStartHaunting_Parms, MinTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HauntManager_eventStartHaunting_Parms, MaxTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::NewProp_HauntLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::NewProp_MinTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::NewProp_MaxTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHauntManager, nullptr, "StartHaunting", nullptr, nullptr, sizeof(HauntManager_eventStartHaunting_Parms), Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHauntManager_StartHaunting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHauntManager_StartHaunting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHauntManager_StopHaunting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHauntManager_StopHaunting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHauntManager_StopHaunting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHauntManager, nullptr, "StopHaunting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHauntManager_StopHaunting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHauntManager_StopHaunting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHauntManager_StopHaunting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHauntManager_StopHaunting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHauntManager_NoRegister()
	{
		return AHauntManager::StaticClass();
	}
	struct Z_Construct_UClass_AHauntManager_Statics
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PauseState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PauseState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HauntLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HauntLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HauntTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HauntTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HauntTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HauntTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHauntTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHauntTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHauntTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHauntTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HauntTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HauntTimeOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHauntManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHauntManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHauntManager_PauseHaunting, "PauseHaunting" }, // 3802978282
		{ &Z_Construct_UFunction_AHauntManager_ResumeHaunting, "ResumeHaunting" }, // 694178333
		{ &Z_Construct_UFunction_AHauntManager_RollHauntTime, "RollHauntTime" }, // 2526470553
		{ &Z_Construct_UFunction_AHauntManager_StartHaunt, "StartHaunt" }, // 595561734
		{ &Z_Construct_UFunction_AHauntManager_StartHaunting, "StartHaunting" }, // 4009498808
		{ &Z_Construct_UFunction_AHauntManager_StopHaunting, "StopHaunting" }, // 322412039
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHauntManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HauntManager.h" },
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHauntManager_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHauntManager_Statics::NewProp_State_MetaData[] = {
		{ "Category", "HauntManager" },
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHauntManager_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHauntManager, State), Z_Construct_UEnum_ArchitectureExplorer_HauntManagerState, METADATA_PARAMS(Z_Construct_UClass_AHauntManager_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHauntManager_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHauntManager_Statics::NewProp_PauseState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHauntManager_Statics::NewProp_PauseState_MetaData[] = {
		{ "Category", "HauntManager" },
		{ "Comment", "// keeps track of previous state when HauntManager is paused.\n" },
		{ "ModuleRelativePath", "HauntManager.h" },
		{ "ToolTip", "keeps track of previous state when HauntManager is paused." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHauntManager_Statics::NewProp_PauseState = { "PauseState", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHauntManager, PauseState), Z_Construct_UEnum_ArchitectureExplorer_HauntManagerState, METADATA_PARAMS(Z_Construct_UClass_AHauntManager_Statics::NewProp_PauseState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHauntManager_Statics::NewProp_PauseState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntLevel_MetaData[] = {
		{ "Category", "HauntManager" },
		{ "Comment", "/**\n\x09""1: Peek\n\x09""2: \n\x09*/" },
		{ "ModuleRelativePath", "HauntManager.h" },
		{ "ToolTip", "1: Peek\n2:" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntLevel = { "HauntLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHauntManager, HauntLevel), METADATA_PARAMS(Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTimer_MetaData[] = {
		{ "Category", "HauntManager" },
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTimer = { "HauntTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHauntManager, HauntTimer), METADATA_PARAMS(Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTime_MetaData[] = {
		{ "Category", "HauntManager" },
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTime = { "HauntTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHauntManager, HauntTime), METADATA_PARAMS(Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHauntManager_Statics::NewProp_MinHauntTime_MetaData[] = {
		{ "Category", "HauntManager" },
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHauntManager_Statics::NewProp_MinHauntTime = { "MinHauntTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHauntManager, MinHauntTime), METADATA_PARAMS(Z_Construct_UClass_AHauntManager_Statics::NewProp_MinHauntTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHauntManager_Statics::NewProp_MinHauntTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHauntManager_Statics::NewProp_MaxHauntTime_MetaData[] = {
		{ "Category", "HauntManager" },
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHauntManager_Statics::NewProp_MaxHauntTime = { "MaxHauntTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHauntManager, MaxHauntTime), METADATA_PARAMS(Z_Construct_UClass_AHauntManager_Statics::NewProp_MaxHauntTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHauntManager_Statics::NewProp_MaxHauntTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTimeOffset_MetaData[] = {
		{ "Category", "HauntManager" },
		{ "ModuleRelativePath", "HauntManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTimeOffset = { "HauntTimeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHauntManager, HauntTimeOffset), METADATA_PARAMS(Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTimeOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHauntManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHauntManager_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHauntManager_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHauntManager_Statics::NewProp_PauseState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHauntManager_Statics::NewProp_PauseState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHauntManager_Statics::NewProp_MinHauntTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHauntManager_Statics::NewProp_MaxHauntTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHauntManager_Statics::NewProp_HauntTimeOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHauntManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHauntManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHauntManager_Statics::ClassParams = {
		&AHauntManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHauntManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHauntManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHauntManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHauntManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHauntManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHauntManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHauntManager, 2135768401);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AHauntManager>()
	{
		return AHauntManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHauntManager(Z_Construct_UClass_AHauntManager, &AHauntManager::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AHauntManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHauntManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
