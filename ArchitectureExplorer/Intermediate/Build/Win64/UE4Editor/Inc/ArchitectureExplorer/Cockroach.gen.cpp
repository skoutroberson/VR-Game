// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Cockroach.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCockroach() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_RoachState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ACockroach_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ACockroach();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* RoachState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_RoachState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("RoachState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<RoachState>()
	{
		return RoachState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_RoachState(RoachState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("RoachState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_RoachState_Hash() { return 1401529230U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_RoachState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("RoachState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_RoachState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RoachState::STATE_IDLE", (int64)RoachState::STATE_IDLE },
				{ "RoachState::STATE_MOVE", (int64)RoachState::STATE_MOVE },
				{ "RoachState::STATE_FALL", (int64)RoachState::STATE_FALL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Cockroach.h" },
				{ "STATE_FALL.DisplayName", "Fall" },
				{ "STATE_FALL.Name", "RoachState::STATE_FALL" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "RoachState::STATE_IDLE" },
				{ "STATE_MOVE.DisplayName", "Move" },
				{ "STATE_MOVE.Name", "RoachState::STATE_MOVE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"RoachState",
				"RoachState",
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
	DEFINE_FUNCTION(ACockroach::execRotateToNormal)
	{
		P_GET_STRUCT(FVector,Z_Param_NormalVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateToNormal(Z_Param_NormalVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACockroach::execHitRigidBody)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_STRUCT(FVector,Z_Param_ImpulseNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitRigidBody(Z_Param_Out_HitResult,Z_Param_ImpulseNormal);
		P_NATIVE_END;
	}
	void ACockroach::StaticRegisterNativesACockroach()
	{
		UClass* Class = ACockroach::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HitRigidBody", &ACockroach::execHitRigidBody },
			{ "RotateToNormal", &ACockroach::execRotateToNormal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACockroach_HitRigidBody_Statics
	{
		struct Cockroach_eventHitRigidBody_Parms
		{
			FHitResult HitResult;
			FVector ImpulseNormal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpulseNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cockroach_eventHitRigidBody_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::NewProp_ImpulseNormal = { "ImpulseNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cockroach_eventHitRigidBody_Parms, ImpulseNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::NewProp_ImpulseNormal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roach" },
		{ "ModuleRelativePath", "Cockroach.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACockroach, nullptr, "HitRigidBody", nullptr, nullptr, sizeof(Cockroach_eventHitRigidBody_Parms), Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACockroach_HitRigidBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACockroach_HitRigidBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACockroach_RotateToNormal_Statics
	{
		struct Cockroach_eventRotateToNormal_Parms
		{
			FVector NormalVector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACockroach_RotateToNormal_Statics::NewProp_NormalVector = { "NormalVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Cockroach_eventRotateToNormal_Parms, NormalVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACockroach_RotateToNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACockroach_RotateToNormal_Statics::NewProp_NormalVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACockroach_RotateToNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crawler" },
		{ "ModuleRelativePath", "Cockroach.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACockroach_RotateToNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACockroach, nullptr, "RotateToNormal", nullptr, nullptr, sizeof(Cockroach_eventRotateToNormal_Parms), Z_Construct_UFunction_ACockroach_RotateToNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACockroach_RotateToNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACockroach_RotateToNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACockroach_RotateToNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACockroach_RotateToNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACockroach_RotateToNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACockroach_NoRegister()
	{
		return ACockroach::StaticClass();
	}
	struct Z_Construct_UClass_ACockroach_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACockroach_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACockroach_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACockroach_HitRigidBody, "HitRigidBody" }, // 2518176519
		{ &Z_Construct_UFunction_ACockroach_RotateToNormal, "RotateToNormal" }, // 1689460097
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACockroach_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cockroach.h" },
		{ "ModuleRelativePath", "Cockroach.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACockroach_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Cockroach" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cockroach.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACockroach_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACockroach, Root), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACockroach_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACockroach_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACockroach_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Cockroach" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cockroach.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACockroach_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACockroach, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACockroach_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACockroach_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACockroach_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACockroach_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Cockroach" },
		{ "ModuleRelativePath", "Cockroach.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACockroach_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACockroach, State), Z_Construct_UEnum_ArchitectureExplorer_RoachState, METADATA_PARAMS(Z_Construct_UClass_ACockroach_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACockroach_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACockroach_Statics::NewProp_GravityDirection_MetaData[] = {
		{ "Category", "Cockroach" },
		{ "ModuleRelativePath", "Cockroach.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACockroach_Statics::NewProp_GravityDirection = { "GravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACockroach, GravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACockroach_Statics::NewProp_GravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACockroach_Statics::NewProp_GravityDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACockroach_Statics::NewProp_MoveDirection_MetaData[] = {
		{ "Category", "Cockroach" },
		{ "ModuleRelativePath", "Cockroach.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACockroach_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACockroach, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACockroach_Statics::NewProp_MoveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACockroach_Statics::NewProp_MoveDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACockroach_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Cockroach" },
		{ "ModuleRelativePath", "Cockroach.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACockroach_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACockroach, Speed), METADATA_PARAMS(Z_Construct_UClass_ACockroach_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACockroach_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACockroach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACockroach_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACockroach_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACockroach_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACockroach_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACockroach_Statics::NewProp_GravityDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACockroach_Statics::NewProp_MoveDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACockroach_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACockroach_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACockroach>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACockroach_Statics::ClassParams = {
		&ACockroach::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACockroach_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACockroach_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACockroach_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACockroach_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACockroach()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACockroach_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACockroach, 4123855893);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ACockroach>()
	{
		return ACockroach::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACockroach(Z_Construct_UClass_ACockroach, &ACockroach::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ACockroach"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACockroach);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
