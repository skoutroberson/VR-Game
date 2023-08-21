// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/ErrolSaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrolSaw() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_ErrolSawState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolSaw_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolSaw();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* ErrolSawState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_ErrolSawState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("ErrolSawState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<ErrolSawState>()
	{
		return ErrolSawState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ErrolSawState(ErrolSawState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("ErrolSawState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_ErrolSawState_Hash() { return 2069664016U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_ErrolSawState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ErrolSawState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_ErrolSawState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ErrolSawState::STATE_IDLE", (int64)ErrolSawState::STATE_IDLE },
				{ "ErrolSawState::STATE_INVISIBLE", (int64)ErrolSawState::STATE_INVISIBLE },
				{ "ErrolSawState::STATE_MOCAP", (int64)ErrolSawState::STATE_MOCAP },
				{ "ErrolSawState::STATE_ANIM2", (int64)ErrolSawState::STATE_ANIM2 },
				{ "ErrolSawState::STATE_RAGDOLL", (int64)ErrolSawState::STATE_RAGDOLL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "ErrolSaw.h" },
				{ "STATE_ANIM2.DisplayName", "Anim2" },
				{ "STATE_ANIM2.Name", "ErrolSawState::STATE_ANIM2" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "ErrolSawState::STATE_IDLE" },
				{ "STATE_INVISIBLE.DisplayName", "Invisible" },
				{ "STATE_INVISIBLE.Name", "ErrolSawState::STATE_INVISIBLE" },
				{ "STATE_MOCAP.DisplayName", "Mocap" },
				{ "STATE_MOCAP.Name", "ErrolSawState::STATE_MOCAP" },
				{ "STATE_RAGDOLL.DisplayName", "Ragdoll" },
				{ "STATE_RAGDOLL.Name", "ErrolSawState::STATE_RAGDOLL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"ErrolSawState",
				"ErrolSawState",
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
	DEFINE_FUNCTION(AErrolSaw::execExitState)
	{
		P_GET_ENUM(ErrolSawState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitState(ErrolSawState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolSaw::execEnterState)
	{
		P_GET_ENUM(ErrolSawState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterState(ErrolSawState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolSaw::execChangeState)
	{
		P_GET_ENUM(ErrolSawState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeState(ErrolSawState(Z_Param_NewState));
		P_NATIVE_END;
	}
	static FName NAME_AErrolSaw_Rev = FName(TEXT("Rev"));
	void AErrolSaw::Rev()
	{
		ProcessEvent(FindFunctionChecked(NAME_AErrolSaw_Rev),NULL);
	}
	void AErrolSaw::StaticRegisterNativesAErrolSaw()
	{
		UClass* Class = AErrolSaw::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeState", &AErrolSaw::execChangeState },
			{ "EnterState", &AErrolSaw::execEnterState },
			{ "ExitState", &AErrolSaw::execExitState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AErrolSaw_ChangeState_Statics
	{
		struct ErrolSaw_eventChangeState_Parms
		{
			ErrolSawState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolSaw_eventChangeState_Parms, NewState), Z_Construct_UEnum_ArchitectureExplorer_ErrolSawState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolSaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolSaw, nullptr, "ChangeState", nullptr, nullptr, sizeof(ErrolSaw_eventChangeState_Parms), Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolSaw_ChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolSaw_ChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolSaw_EnterState_Statics
	{
		struct ErrolSaw_eventEnterState_Parms
		{
			ErrolSawState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AErrolSaw_EnterState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AErrolSaw_EnterState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolSaw_eventEnterState_Parms, NewState), Z_Construct_UEnum_ArchitectureExplorer_ErrolSawState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolSaw_EnterState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolSaw_EnterState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolSaw_EnterState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolSaw_EnterState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolSaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolSaw_EnterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolSaw, nullptr, "EnterState", nullptr, nullptr, sizeof(ErrolSaw_eventEnterState_Parms), Z_Construct_UFunction_AErrolSaw_EnterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolSaw_EnterState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolSaw_EnterState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolSaw_EnterState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolSaw_EnterState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolSaw_EnterState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolSaw_ExitState_Statics
	{
		struct ErrolSaw_eventExitState_Parms
		{
			ErrolSawState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AErrolSaw_ExitState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AErrolSaw_ExitState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolSaw_eventExitState_Parms, NewState), Z_Construct_UEnum_ArchitectureExplorer_ErrolSawState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolSaw_ExitState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolSaw_ExitState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolSaw_ExitState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolSaw_ExitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolSaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolSaw_ExitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolSaw, nullptr, "ExitState", nullptr, nullptr, sizeof(ErrolSaw_eventExitState_Parms), Z_Construct_UFunction_AErrolSaw_ExitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolSaw_ExitState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolSaw_ExitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolSaw_ExitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolSaw_ExitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolSaw_ExitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolSaw_Rev_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolSaw_Rev_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolSaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolSaw_Rev_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolSaw, nullptr, "Rev", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolSaw_Rev_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolSaw_Rev_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolSaw_Rev()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolSaw_Rev_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AErrolSaw_NoRegister()
	{
		return AErrolSaw::StaticClass();
	}
	struct Z_Construct_UClass_AErrolSaw_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MocapMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MocapMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim2Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim2Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AErrolSaw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AErrolSaw_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AErrolSaw_ChangeState, "ChangeState" }, // 2686955747
		{ &Z_Construct_UFunction_AErrolSaw_EnterState, "EnterState" }, // 2641504874
		{ &Z_Construct_UFunction_AErrolSaw_ExitState, "ExitState" }, // 563465213
		{ &Z_Construct_UFunction_AErrolSaw_Rev, "Rev" }, // 2221953741
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolSaw_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ErrolSaw.h" },
		{ "ModuleRelativePath", "ErrolSaw.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AErrolSaw_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolSaw_Statics::NewProp_State_MetaData[] = {
		{ "Category", "ErrolSaw" },
		{ "ModuleRelativePath", "ErrolSaw.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AErrolSaw_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolSaw, State), Z_Construct_UEnum_ArchitectureExplorer_ErrolSawState, METADATA_PARAMS(Z_Construct_UClass_AErrolSaw_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolSaw_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolSaw_Statics::NewProp_MocapMesh_MetaData[] = {
		{ "Category", "ErrolSaw" },
		{ "Comment", "// set in ErrolCharacter.cpp\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ErrolSaw.h" },
		{ "ToolTip", "set in ErrolCharacter.cpp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolSaw_Statics::NewProp_MocapMesh = { "MocapMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolSaw, MocapMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolSaw_Statics::NewProp_MocapMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolSaw_Statics::NewProp_MocapMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolSaw_Statics::NewProp_Anim2Mesh_MetaData[] = {
		{ "Category", "ErrolSaw" },
		{ "Comment", "// set in ErrolCharacter.cpp\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ErrolSaw.h" },
		{ "ToolTip", "set in ErrolCharacter.cpp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolSaw_Statics::NewProp_Anim2Mesh = { "Anim2Mesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolSaw, Anim2Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrolSaw_Statics::NewProp_Anim2Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolSaw_Statics::NewProp_Anim2Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AErrolSaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolSaw_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolSaw_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolSaw_Statics::NewProp_MocapMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolSaw_Statics::NewProp_Anim2Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AErrolSaw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AErrolSaw>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AErrolSaw_Statics::ClassParams = {
		&AErrolSaw::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AErrolSaw_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AErrolSaw_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AErrolSaw_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolSaw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AErrolSaw()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AErrolSaw_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AErrolSaw, 3417610597);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AErrolSaw>()
	{
		return AErrolSaw::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AErrolSaw(Z_Construct_UClass_AErrolSaw, &AErrolSaw::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AErrolSaw"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AErrolSaw);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
