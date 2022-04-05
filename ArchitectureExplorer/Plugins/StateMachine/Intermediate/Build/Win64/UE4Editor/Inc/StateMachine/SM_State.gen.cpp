// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateMachine/Classes/SM_State.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSM_State() {}
// Cross Module References
	STATEMACHINE_API UEnum* Z_Construct_UEnum_StateMachine_EStateMachineCompletionType();
	UPackage* Z_Construct_UPackage__Script_StateMachine();
	STATEMACHINE_API UScriptStruct* Z_Construct_UScriptStruct_FStateMachineResult();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_State_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_InputAtom_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_InputAtom();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_Branch_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_Branch();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_State();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EStateMachineCompletionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StateMachine_EStateMachineCompletionType, Z_Construct_UPackage__Script_StateMachine(), TEXT("EStateMachineCompletionType"));
		}
		return Singleton;
	}
	template<> STATEMACHINE_API UEnum* StaticEnum<EStateMachineCompletionType>()
	{
		return EStateMachineCompletionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStateMachineCompletionType(EStateMachineCompletionType_StaticEnum, TEXT("/Script/StateMachine"), TEXT("EStateMachineCompletionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StateMachine_EStateMachineCompletionType_Hash() { return 4163782091U; }
	UEnum* Z_Construct_UEnum_StateMachine_EStateMachineCompletionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStateMachineCompletionType"), 0, Get_Z_Construct_UEnum_StateMachine_EStateMachineCompletionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStateMachineCompletionType::NotAccepted", (int64)EStateMachineCompletionType::NotAccepted },
				{ "EStateMachineCompletionType::Accepted", (int64)EStateMachineCompletionType::Accepted },
				{ "EStateMachineCompletionType::Rejected", (int64)EStateMachineCompletionType::Rejected },
				{ "EStateMachineCompletionType::OutOfSteps", (int64)EStateMachineCompletionType::OutOfSteps },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accepted.Comment", "//\x09Success - this state is an Accept state.\n" },
				{ "Accepted.Name", "EStateMachineCompletionType::Accepted" },
				{ "Accepted.ToolTip", "Success - this state is an Accept state." },
				{ "ModuleRelativePath", "Classes/SM_State.h" },
				{ "NotAccepted.Comment", "//\x09Implicit failure - this state is not marked as Accept.\n" },
				{ "NotAccepted.Name", "EStateMachineCompletionType::NotAccepted" },
				{ "NotAccepted.ToolTip", "Implicit failure - this state is not marked as Accept." },
				{ "OutOfSteps.Comment", "//\x09Our simulation ran out of steps while the machine was still running.\n" },
				{ "OutOfSteps.Hidden", "" },
				{ "OutOfSteps.Name", "EStateMachineCompletionType::OutOfSteps" },
				{ "OutOfSteps.ToolTip", "Our simulation ran out of steps while the machine was still running." },
				{ "Rejected.Comment", "//\x09""Explicit failure - this state is specifically marked as failure/not-accept.\n" },
				{ "Rejected.Name", "EStateMachineCompletionType::Rejected" },
				{ "Rejected.ToolTip", "Explicit failure - this state is specifically marked as failure/not-accept." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StateMachine,
				nullptr,
				"EStateMachineCompletionType",
				"EStateMachineCompletionType",
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
class UScriptStruct* FStateMachineResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATEMACHINE_API uint32 Get_Z_Construct_UScriptStruct_FStateMachineResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateMachineResult, Z_Construct_UPackage__Script_StateMachine(), TEXT("StateMachineResult"), sizeof(FStateMachineResult), Get_Z_Construct_UScriptStruct_FStateMachineResult_Hash());
	}
	return Singleton;
}
template<> STATEMACHINE_API UScriptStruct* StaticStruct<FStateMachineResult>()
{
	return FStateMachineResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStateMachineResult(FStateMachineResult::StaticStruct, TEXT("/Script/StateMachine"), TEXT("StateMachineResult"), false, nullptr, nullptr);
static struct FScriptStruct_StateMachine_StaticRegisterNativesFStateMachineResult
{
	FScriptStruct_StateMachine_StaticRegisterNativesFStateMachineResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StateMachineResult")),new UScriptStruct::TCppStructOps<FStateMachineResult>);
	}
} ScriptStruct_StateMachine_StaticRegisterNativesFStateMachineResult;
	struct Z_Construct_UScriptStruct_FStateMachineResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompletionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompletionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinalState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateMachineResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType = { "CompletionType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateMachineResult, CompletionType), Z_Construct_UEnum_StateMachine_EStateMachineCompletionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_FinalState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_FinalState = { "FinalState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateMachineResult, FinalState), Z_Construct_UClass_USM_State_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_FinalState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_FinalState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_DataIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStateMachineResult, DataIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_DataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_DataIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateMachineResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_CompletionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_FinalState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateMachineResult_Statics::NewProp_DataIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateMachineResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateMachine,
		nullptr,
		&NewStructOps,
		"StateMachineResult",
		sizeof(FStateMachineResult),
		alignof(FStateMachineResult),
		Z_Construct_UScriptStruct_FStateMachineResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateMachineResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStateMachineResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StateMachine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StateMachineResult"), sizeof(FStateMachineResult), Get_Z_Construct_UScriptStruct_FStateMachineResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStateMachineResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStateMachineResult_Hash() { return 2202910419U; }
	void USM_InputAtom::StaticRegisterNativesUSM_InputAtom()
	{
	}
	UClass* Z_Construct_UClass_USM_InputAtom_NoRegister()
	{
		return USM_InputAtom::StaticClass();
	}
	struct Z_Construct_UClass_USM_InputAtom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USM_InputAtom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_StateMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_InputAtom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SM_State.h" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_InputAtom_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SM_InputAtom" },
		{ "Comment", "// Display value for this input atom, mainly for debugging purposes.\n" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
		{ "ToolTip", "Display value for this input atom, mainly for debugging purposes." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USM_InputAtom_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USM_InputAtom, Description), METADATA_PARAMS(Z_Construct_UClass_USM_InputAtom_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USM_InputAtom_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USM_InputAtom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_InputAtom_Statics::NewProp_Description,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USM_InputAtom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USM_InputAtom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USM_InputAtom_Statics::ClassParams = {
		&USM_InputAtom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USM_InputAtom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USM_InputAtom_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USM_InputAtom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USM_InputAtom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USM_InputAtom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USM_InputAtom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USM_InputAtom, 3484619611);
	template<> STATEMACHINE_API UClass* StaticClass<USM_InputAtom>()
	{
		return USM_InputAtom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_InputAtom(Z_Construct_UClass_USM_InputAtom, &USM_InputAtom::StaticClass, TEXT("/Script/StateMachine"), TEXT("USM_InputAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_InputAtom);
	void USM_Branch::StaticRegisterNativesUSM_Branch()
	{
	}
	UClass* Z_Construct_UClass_USM_Branch_NoRegister()
	{
		return USM_Branch::StaticClass();
	}
	struct Z_Construct_UClass_USM_Branch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseInputTest_MetaData[];
#endif
		static void NewProp_bReverseInputTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseInputTest;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcceptableInputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptableInputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AcceptableInputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USM_Branch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_StateMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_Branch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SM_State.h" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_Branch_Statics::NewProp_DestinationState_MetaData[] = {
		{ "Category", "SM_Branch" },
		{ "Comment", "// State where we will go next if this branch is taken. If null, this branch will be ignored\n" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
		{ "ToolTip", "State where we will go next if this branch is taken. If null, this branch will be ignored" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USM_Branch_Statics::NewProp_DestinationState = { "DestinationState", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USM_Branch, DestinationState), Z_Construct_UClass_USM_State_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USM_Branch_Statics::NewProp_DestinationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USM_Branch_Statics::NewProp_DestinationState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_Branch_Statics::NewProp_bReverseInputTest_MetaData[] = {
		{ "Category", "SM_Branch" },
		{ "Comment", "// If true, the meaning of AcceptableInputs is reversed.\n" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
		{ "ToolTip", "If true, the meaning of AcceptableInputs is reversed." },
	};
#endif
	void Z_Construct_UClass_USM_Branch_Statics::NewProp_bReverseInputTest_SetBit(void* Obj)
	{
		((USM_Branch*)Obj)->bReverseInputTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USM_Branch_Statics::NewProp_bReverseInputTest = { "bReverseInputTest", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USM_Branch), &Z_Construct_UClass_USM_Branch_Statics::NewProp_bReverseInputTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_USM_Branch_Statics::NewProp_bReverseInputTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USM_Branch_Statics::NewProp_bReverseInputTest_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USM_Branch_Statics::NewProp_AcceptableInputs_Inner = { "AcceptableInputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_Branch_Statics::NewProp_AcceptableInputs_MetaData[] = {
		{ "Category", "SM_Branch" },
		{ "Comment", "// Acceptable inputs. The current input atom must be on this list.\n" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
		{ "ToolTip", "Acceptable inputs. The current input atom must be on this list." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USM_Branch_Statics::NewProp_AcceptableInputs = { "AcceptableInputs", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USM_Branch, AcceptableInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USM_Branch_Statics::NewProp_AcceptableInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USM_Branch_Statics::NewProp_AcceptableInputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USM_Branch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_Branch_Statics::NewProp_DestinationState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_Branch_Statics::NewProp_bReverseInputTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_Branch_Statics::NewProp_AcceptableInputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_Branch_Statics::NewProp_AcceptableInputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USM_Branch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USM_Branch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USM_Branch_Statics::ClassParams = {
		&USM_Branch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USM_Branch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USM_Branch_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USM_Branch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USM_Branch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USM_Branch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USM_Branch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USM_Branch, 3806819365);
	template<> STATEMACHINE_API UClass* StaticClass<USM_Branch>()
	{
		return USM_Branch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_Branch(Z_Construct_UClass_USM_Branch, &USM_Branch::StaticClass, TEXT("/Script/StateMachine"), TEXT("USM_Branch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_Branch);
	DEFINE_FUNCTION(USM_State::execRunState)
	{
		P_GET_OBJECT(UObject,Z_Param_RefObject);
		P_GET_TARRAY_REF(USM_InputAtom*,Z_Param_Out_DataSource);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_RemainingSteps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FStateMachineResult*)Z_Param__Result=P_THIS->RunState(Z_Param_RefObject,Z_Param_Out_DataSource,Z_Param_DataIndex,Z_Param_RemainingSteps);
		P_NATIVE_END;
	}
	void USM_State::StaticRegisterNativesUSM_State()
	{
		UClass* Class = USM_State::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunState", &USM_State::execRunState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USM_State_RunState_Statics
	{
		struct SM_State_eventRunState_Parms
		{
			const UObject* RefObject;
			TArray<USM_InputAtom*> DataSource;
			int32 DataIndex;
			int32 RemainingSteps;
			FStateMachineResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataSource_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataSource;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainingSteps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_RefObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_RefObject = { "RefObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SM_State_eventRunState_Parms, RefObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_RefObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_RefObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_DataSource_Inner = { "DataSource", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_DataSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SM_State_eventRunState_Parms, DataSource), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_DataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_DataSource_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SM_State_eventRunState_Parms, DataIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_RemainingSteps = { "RemainingSteps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SM_State_eventRunState_Parms, RemainingSteps), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SM_State_eventRunState_Parms, ReturnValue), Z_Construct_UScriptStruct_FStateMachineResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USM_State_RunState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_RefObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_DataSource_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_DataSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_DataIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_RemainingSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USM_State_RunState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USM_State_RunState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/** Attempt to run the state with input from the given DataSource object.\n\x09Will start reading input at DataIndex.\n\x09Will decrement RemainingSteps and automatically fail after it hits 0. */" },
		{ "CPP_Default_DataIndex", "0" },
		{ "CPP_Default_RemainingSteps", "-1" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
		{ "ToolTip", "Attempt to run the state with input from the given DataSource object.\n      Will start reading input at DataIndex.\n      Will decrement RemainingSteps and automatically fail after it hits 0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USM_State_RunState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USM_State, nullptr, "RunState", nullptr, nullptr, sizeof(SM_State_eventRunState_Parms), Z_Construct_UFunction_USM_State_RunState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USM_State_RunState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USM_State_RunState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USM_State_RunState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USM_State_RunState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USM_State_RunState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USM_State_NoRegister()
	{
		return USM_State::StaticClass();
	}
	struct Z_Construct_UClass_USM_State_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompletionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompletionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTerminateImmediately_MetaData[];
#endif
		static void NewProp_bTerminateImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTerminateImmediately;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopByDefault_MetaData[];
#endif
		static void NewProp_bLoopByDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopByDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedBranches_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedBranches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedBranches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancedBranches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USM_State_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_StateMachine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USM_State_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USM_State_RunState, "RunState" }, // 1259741847
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_State_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SM_State.h" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USM_State_Statics::NewProp_CompletionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_State_Statics::NewProp_CompletionType_MetaData[] = {
		{ "Category", "SM_State" },
		{ "Comment", "// If input runs out on this state (or TerminateImmediately is true), this is how the result will be interpreted. \n" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
		{ "ToolTip", "If input runs out on this state (or TerminateImmediately is true), this is how the result will be interpreted." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USM_State_Statics::NewProp_CompletionType = { "CompletionType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USM_State, CompletionType), Z_Construct_UEnum_StateMachine_EStateMachineCompletionType, METADATA_PARAMS(Z_Construct_UClass_USM_State_Statics::NewProp_CompletionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USM_State_Statics::NewProp_CompletionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_State_Statics::NewProp_bTerminateImmediately_MetaData[] = {
		{ "Category", "SM_State" },
		{ "Comment", "// A state machine run that enters this state will terminate immediately, regardless of whether or not there is more input data.\n" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
		{ "ToolTip", "A state machine run that enters this state will terminate immediately, regardless of whether or not there is more input data." },
	};
#endif
	void Z_Construct_UClass_USM_State_Statics::NewProp_bTerminateImmediately_SetBit(void* Obj)
	{
		((USM_State*)Obj)->bTerminateImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USM_State_Statics::NewProp_bTerminateImmediately = { "bTerminateImmediately", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USM_State), &Z_Construct_UClass_USM_State_Statics::NewProp_bTerminateImmediately_SetBit, METADATA_PARAMS(Z_Construct_UClass_USM_State_Statics::NewProp_bTerminateImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USM_State_Statics::NewProp_bTerminateImmediately_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_State_Statics::NewProp_bLoopByDefault_MetaData[] = {
		{ "Category", "SM_State" },
		{ "Comment", "// If this is set, this state will loop on itself whenever an unhandled input atom is detected.\n" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
		{ "ToolTip", "If this is set, this state will loop on itself whenever an unhandled input atom is detected." },
	};
#endif
	void Z_Construct_UClass_USM_State_Statics::NewProp_bLoopByDefault_SetBit(void* Obj)
	{
		((USM_State*)Obj)->bLoopByDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USM_State_Statics::NewProp_bLoopByDefault = { "bLoopByDefault", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USM_State), &Z_Construct_UClass_USM_State_Statics::NewProp_bLoopByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_USM_State_Statics::NewProp_bLoopByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USM_State_Statics::NewProp_bLoopByDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_State_Statics::NewProp_InstancedBranches_Inner_MetaData[] = {
		{ "Category", "SM_State" },
		{ "Comment", "// Branches to other states. These are in priority order, so the first successful branch will be taken.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
		{ "ToolTip", "Branches to other states. These are in priority order, so the first successful branch will be taken." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USM_State_Statics::NewProp_InstancedBranches_Inner = { "InstancedBranches", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USM_Branch_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USM_State_Statics::NewProp_InstancedBranches_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USM_State_Statics::NewProp_InstancedBranches_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USM_State_Statics::NewProp_InstancedBranches_MetaData[] = {
		{ "Category", "SM_State" },
		{ "Comment", "// Branches to other states. These are in priority order, so the first successful branch will be taken.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SM_State.h" },
		{ "ToolTip", "Branches to other states. These are in priority order, so the first successful branch will be taken." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USM_State_Statics::NewProp_InstancedBranches = { "InstancedBranches", nullptr, (EPropertyFlags)0x0020088000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USM_State, InstancedBranches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USM_State_Statics::NewProp_InstancedBranches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USM_State_Statics::NewProp_InstancedBranches_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USM_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_State_Statics::NewProp_CompletionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_State_Statics::NewProp_CompletionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_State_Statics::NewProp_bTerminateImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_State_Statics::NewProp_bLoopByDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_State_Statics::NewProp_InstancedBranches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USM_State_Statics::NewProp_InstancedBranches,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USM_State_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USM_State>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USM_State_Statics::ClassParams = {
		&USM_State::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USM_State_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USM_State_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USM_State_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USM_State_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USM_State()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USM_State_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USM_State, 584998714);
	template<> STATEMACHINE_API UClass* StaticClass<USM_State>()
	{
		return USM_State::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USM_State(Z_Construct_UClass_USM_State, &USM_State::StaticClass, TEXT("/Script/StateMachine"), TEXT("USM_State"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USM_State);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
