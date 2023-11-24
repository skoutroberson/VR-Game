// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/RevealDecal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevealDecal() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_RevealState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARevealDecal_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARevealDecal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	static UEnum* RevealState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_RevealState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("RevealState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<RevealState>()
	{
		return RevealState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_RevealState(RevealState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("RevealState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_RevealState_Hash() { return 785141009U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_RevealState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("RevealState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_RevealState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RevealState::STATE_WAITING", (int64)RevealState::STATE_WAITING },
				{ "RevealState::STATE_UPDATING_FLDOT", (int64)RevealState::STATE_UPDATING_FLDOT },
				{ "RevealState::STATE_FADING_OUT", (int64)RevealState::STATE_FADING_OUT },
				{ "RevealState::STATE_FADING_IN", (int64)RevealState::STATE_FADING_IN },
				{ "RevealState::STATE_FADED_IN", (int64)RevealState::STATE_FADED_IN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "RevealDecal.h" },
				{ "STATE_FADED_IN.DisplayName", "FadedIn" },
				{ "STATE_FADED_IN.Name", "RevealState::STATE_FADED_IN" },
				{ "STATE_FADING_IN.DisplayName", "FadingIn" },
				{ "STATE_FADING_IN.Name", "RevealState::STATE_FADING_IN" },
				{ "STATE_FADING_OUT.DisplayName", "FadingOut" },
				{ "STATE_FADING_OUT.Name", "RevealState::STATE_FADING_OUT" },
				{ "STATE_UPDATING_FLDOT.DisplayName", "UpdatingFLDot" },
				{ "STATE_UPDATING_FLDOT.Name", "RevealState::STATE_UPDATING_FLDOT" },
				{ "STATE_WAITING.DisplayName", "Waiting" },
				{ "STATE_WAITING.Name", "RevealState::STATE_WAITING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"RevealState",
				"RevealState",
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
	DEFINE_FUNCTION(ARevealDecal::execFlashlightLineOfSight)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LOSTraces);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FlashlightLineOfSight(Z_Param_LOSTraces);
		P_NATIVE_END;
	}
	static FName NAME_ARevealDecal_FadeIn = FName(TEXT("FadeIn"));
	void ARevealDecal::FadeIn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARevealDecal_FadeIn),NULL);
	}
	static FName NAME_ARevealDecal_UpdateFLDot = FName(TEXT("UpdateFLDot"));
	void ARevealDecal::UpdateFLDot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARevealDecal_UpdateFLDot),NULL);
	}
	void ARevealDecal::StaticRegisterNativesARevealDecal()
	{
		UClass* Class = ARevealDecal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlashlightLineOfSight", &ARevealDecal::execFlashlightLineOfSight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARevealDecal_FadeIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARevealDecal_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RevealDecal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARevealDecal_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARevealDecal, nullptr, "FadeIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARevealDecal_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARevealDecal_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARevealDecal_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARevealDecal_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics
	{
		struct RevealDecal_eventFlashlightLineOfSight_Parms
		{
			int32 LOSTraces;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LOSTraces;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::NewProp_LOSTraces = { "LOSTraces", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RevealDecal_eventFlashlightLineOfSight_Parms, LOSTraces), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RevealDecal_eventFlashlightLineOfSight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RevealDecal_eventFlashlightLineOfSight_Parms), &Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::NewProp_LOSTraces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// 4 traces to each corner of the decal collision, returns true if LOSTraces traces hit the decal\n" },
		{ "ModuleRelativePath", "RevealDecal.h" },
		{ "ToolTip", "4 traces to each corner of the decal collision, returns true if LOSTraces traces hit the decal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARevealDecal, nullptr, "FlashlightLineOfSight", nullptr, nullptr, sizeof(RevealDecal_eventFlashlightLineOfSight_Parms), Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARevealDecal_UpdateFLDot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARevealDecal_UpdateFLDot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RevealDecal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARevealDecal_UpdateFLDot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARevealDecal, nullptr, "UpdateFLDot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARevealDecal_UpdateFLDot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARevealDecal_UpdateFLDot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARevealDecal_UpdateFLDot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARevealDecal_UpdateFLDot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARevealDecal_NoRegister()
	{
		return ARevealDecal::StaticClass();
	}
	struct Z_Construct_UClass_ARevealDecal_Statics
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
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DecalArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DecalArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARevealDecal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARevealDecal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARevealDecal_FadeIn, "FadeIn" }, // 2326987616
		{ &Z_Construct_UFunction_ARevealDecal_FlashlightLineOfSight, "FlashlightLineOfSight" }, // 2624829399
		{ &Z_Construct_UFunction_ARevealDecal_UpdateFLDot, "UpdateFLDot" }, // 477046389
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevealDecal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RevealDecal.h" },
		{ "ModuleRelativePath", "RevealDecal.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARevealDecal_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevealDecal_Statics::NewProp_State_MetaData[] = {
		{ "Category", "RevealDecal" },
		{ "ModuleRelativePath", "RevealDecal.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARevealDecal_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevealDecal, State), Z_Construct_UEnum_ArchitectureExplorer_RevealState, METADATA_PARAMS(Z_Construct_UClass_ARevealDecal_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevealDecal_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARevealDecal_Statics::NewProp_DecalArray_Inner = { "DecalArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARevealDecal_Statics::NewProp_DecalArray_MetaData[] = {
		{ "Category", "RevealDecal" },
		{ "ModuleRelativePath", "RevealDecal.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARevealDecal_Statics::NewProp_DecalArray = { "DecalArray", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARevealDecal, DecalArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARevealDecal_Statics::NewProp_DecalArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARevealDecal_Statics::NewProp_DecalArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARevealDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevealDecal_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevealDecal_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevealDecal_Statics::NewProp_DecalArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARevealDecal_Statics::NewProp_DecalArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARevealDecal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARevealDecal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARevealDecal_Statics::ClassParams = {
		&ARevealDecal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARevealDecal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARevealDecal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARevealDecal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARevealDecal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARevealDecal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARevealDecal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARevealDecal, 3491765860);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ARevealDecal>()
	{
		return ARevealDecal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARevealDecal(Z_Construct_UClass_ARevealDecal, &ARevealDecal::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ARevealDecal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARevealDecal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
