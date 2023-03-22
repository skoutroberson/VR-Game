// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/HGGYScare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHGGYScare() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_HGGYState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AHGGYScare_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AHGGYScare();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AScare();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* HGGYState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_HGGYState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("HGGYState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<HGGYState>()
	{
		return HGGYState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_HGGYState(HGGYState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("HGGYState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_HGGYState_Hash() { return 423374724U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_HGGYState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("HGGYState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_HGGYState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HGGYState::STATE_IDLE", (int64)HGGYState::STATE_IDLE },
				{ "HGGYState::STATE_MOVING_PHONE", (int64)HGGYState::STATE_MOVING_PHONE },
				{ "HGGYState::STATE_CALLING_PHONE", (int64)HGGYState::STATE_CALLING_PHONE },
				{ "HGGYState::STATE_TALKING", (int64)HGGYState::STATE_TALKING },
				{ "HGGYState::STATE_CHASING", (int64)HGGYState::STATE_CHASING },
				{ "HGGYState::STATE_ENDING", (int64)HGGYState::STATE_ENDING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "HGGYScare.h" },
				{ "STATE_CALLING_PHONE.Comment", "/**\n * \n */" },
				{ "STATE_CALLING_PHONE.DisplayName", "CallingPhone" },
				{ "STATE_CALLING_PHONE.Name", "HGGYState::STATE_CALLING_PHONE" },
				{ "STATE_CHASING.Comment", "/**\n * \n */" },
				{ "STATE_CHASING.DisplayName", "Chasing" },
				{ "STATE_CHASING.Name", "HGGYState::STATE_CHASING" },
				{ "STATE_ENDING.Comment", "/**\n * \n */" },
				{ "STATE_ENDING.DisplayName", "Ending" },
				{ "STATE_ENDING.Name", "HGGYState::STATE_ENDING" },
				{ "STATE_IDLE.Comment", "/**\n * \n */" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "HGGYState::STATE_IDLE" },
				{ "STATE_MOVING_PHONE.Comment", "/**\n * \n */" },
				{ "STATE_MOVING_PHONE.DisplayName", "MovingPhone" },
				{ "STATE_MOVING_PHONE.Name", "HGGYState::STATE_MOVING_PHONE" },
				{ "STATE_TALKING.Comment", "/**\n * \n */" },
				{ "STATE_TALKING.DisplayName", "Talking" },
				{ "STATE_TALKING.Name", "HGGYState::STATE_TALKING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"HGGYState",
				"HGGYState",
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
	DEFINE_FUNCTION(AHGGYScare::execEnterCallingPhoneState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterCallingPhoneState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHGGYScare::execEnterMovingPhoneState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterMovingPhoneState();
		P_NATIVE_END;
	}
	static FName NAME_AHGGYScare_AnswerPhone = FName(TEXT("AnswerPhone"));
	void AHGGYScare::AnswerPhone()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHGGYScare_AnswerPhone),NULL);
	}
	void AHGGYScare::StaticRegisterNativesAHGGYScare()
	{
		UClass* Class = AHGGYScare::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterCallingPhoneState", &AHGGYScare::execEnterCallingPhoneState },
			{ "EnterMovingPhoneState", &AHGGYScare::execEnterMovingPhoneState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHGGYScare_AnswerPhone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHGGYScare_AnswerPhone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HGGYScare.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHGGYScare_AnswerPhone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHGGYScare, nullptr, "AnswerPhone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHGGYScare_AnswerPhone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHGGYScare_AnswerPhone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHGGYScare_AnswerPhone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHGGYScare_AnswerPhone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHGGYScare_EnterCallingPhoneState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHGGYScare_EnterCallingPhoneState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HGGYScare.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHGGYScare_EnterCallingPhoneState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHGGYScare, nullptr, "EnterCallingPhoneState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHGGYScare_EnterCallingPhoneState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHGGYScare_EnterCallingPhoneState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHGGYScare_EnterCallingPhoneState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHGGYScare_EnterCallingPhoneState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHGGYScare_EnterMovingPhoneState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHGGYScare_EnterMovingPhoneState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HGGYScare.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHGGYScare_EnterMovingPhoneState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHGGYScare, nullptr, "EnterMovingPhoneState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHGGYScare_EnterMovingPhoneState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHGGYScare_EnterMovingPhoneState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHGGYScare_EnterMovingPhoneState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHGGYScare_EnterMovingPhoneState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHGGYScare_NoRegister()
	{
		return AHGGYScare::StaticClass();
	}
	struct Z_Construct_UClass_AHGGYScare_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HGGYRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HGGYRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhoneGoalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhoneGoalLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHGGYScare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScare,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHGGYScare_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHGGYScare_AnswerPhone, "AnswerPhone" }, // 2836638915
		{ &Z_Construct_UFunction_AHGGYScare_EnterCallingPhoneState, "EnterCallingPhoneState" }, // 3163301910
		{ &Z_Construct_UFunction_AHGGYScare_EnterMovingPhoneState, "EnterMovingPhoneState" }, // 1936228864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHGGYScare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * this scare starts in Stage 4?\n */" },
		{ "IncludePath", "HGGYScare.h" },
		{ "ModuleRelativePath", "HGGYScare.h" },
		{ "ToolTip", "this scare starts in Stage 4?" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHGGYScare_Statics::NewProp_HGGYRoot_MetaData[] = {
		{ "Category", "HGGYScare" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HGGYScare.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHGGYScare_Statics::NewProp_HGGYRoot = { "HGGYRoot", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHGGYScare, HGGYRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHGGYScare_Statics::NewProp_HGGYRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHGGYScare_Statics::NewProp_HGGYRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHGGYScare_Statics::NewProp_PhoneGoalLocation_MetaData[] = {
		{ "Category", "HGGYScare" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HGGYScare.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHGGYScare_Statics::NewProp_PhoneGoalLocation = { "PhoneGoalLocation", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHGGYScare, PhoneGoalLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHGGYScare_Statics::NewProp_PhoneGoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHGGYScare_Statics::NewProp_PhoneGoalLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHGGYScare_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHGGYScare_Statics::NewProp_State_MetaData[] = {
		{ "Category", "HGGYScare" },
		{ "ModuleRelativePath", "HGGYScare.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHGGYScare_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHGGYScare, State), Z_Construct_UEnum_ArchitectureExplorer_HGGYState, METADATA_PARAMS(Z_Construct_UClass_AHGGYScare_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHGGYScare_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHGGYScare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHGGYScare_Statics::NewProp_HGGYRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHGGYScare_Statics::NewProp_PhoneGoalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHGGYScare_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHGGYScare_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHGGYScare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHGGYScare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHGGYScare_Statics::ClassParams = {
		&AHGGYScare::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHGGYScare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHGGYScare_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHGGYScare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHGGYScare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHGGYScare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHGGYScare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHGGYScare, 2854790521);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AHGGYScare>()
	{
		return AHGGYScare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHGGYScare(Z_Construct_UClass_AHGGYScare, &AHGGYScare::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AHGGYScare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHGGYScare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
