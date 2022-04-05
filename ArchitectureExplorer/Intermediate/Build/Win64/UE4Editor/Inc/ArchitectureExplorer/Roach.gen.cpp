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
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_CockroachState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARoach_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARoach();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
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
	void ARoach::StaticRegisterNativesARoach()
	{
		UClass* Class = ARoach::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeState", &ARoach::execChangeState },
			{ "HitRigidBody", &ARoach::execHitRigidBody },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateEnum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoach_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARoach_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoach_ChangeState, "ChangeState" }, // 1593228275
		{ &Z_Construct_UFunction_ARoach_HitRigidBody, "HitRigidBody" }, // 1782708981
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, TurnSpeed), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_TurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_StateEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_StateEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_TurnSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_MoveSpeed,
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
	IMPLEMENT_CLASS(ARoach, 324960076);
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
