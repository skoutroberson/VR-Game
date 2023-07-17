// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Phone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhone() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_PhoneState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APhone_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APhone();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AGrabbable();
// End Cross Module References
	static UEnum* PhoneState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_PhoneState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("PhoneState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<PhoneState>()
	{
		return PhoneState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_PhoneState(PhoneState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("PhoneState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_PhoneState_Hash() { return 1719307466U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_PhoneState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("PhoneState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_PhoneState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PhoneState::STATE_IDLE", (int64)PhoneState::STATE_IDLE },
				{ "PhoneState::STATE_CALL1", (int64)PhoneState::STATE_CALL1 },
				{ "PhoneState::STATE_HGGY", (int64)PhoneState::STATE_HGGY },
				{ "PhoneState::STATE_ALIEN1", (int64)PhoneState::STATE_ALIEN1 },
				{ "PhoneState::STATE_ALIEN2", (int64)PhoneState::STATE_ALIEN2 },
				{ "PhoneState::STATE_ALIEN3", (int64)PhoneState::STATE_ALIEN3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Phone.h" },
				{ "STATE_ALIEN1.DisplayName", "Alien1" },
				{ "STATE_ALIEN1.Name", "PhoneState::STATE_ALIEN1" },
				{ "STATE_ALIEN2.DisplayName", "Alien2" },
				{ "STATE_ALIEN2.Name", "PhoneState::STATE_ALIEN2" },
				{ "STATE_ALIEN3.DisplayName", "Alien3" },
				{ "STATE_ALIEN3.Name", "PhoneState::STATE_ALIEN3" },
				{ "STATE_CALL1.DisplayName", "Neighbor1" },
				{ "STATE_CALL1.Name", "PhoneState::STATE_CALL1" },
				{ "STATE_HGGY.DisplayName", "HGGY" },
				{ "STATE_HGGY.Name", "PhoneState::STATE_HGGY" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "PhoneState::STATE_IDLE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"PhoneState",
				"PhoneState",
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
	static FName NAME_APhone_AnswerPhone = FName(TEXT("AnswerPhone"));
	void APhone::AnswerPhone()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhone_AnswerPhone),NULL);
	}
	static FName NAME_APhone_CallPhone = FName(TEXT("CallPhone"));
	void APhone::CallPhone()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhone_CallPhone),NULL);
	}
	void APhone::StaticRegisterNativesAPhone()
	{
	}
	struct Z_Construct_UFunction_APhone_AnswerPhone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhone_AnswerPhone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Phone" },
		{ "ModuleRelativePath", "Phone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhone_AnswerPhone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhone, nullptr, "AnswerPhone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhone_AnswerPhone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhone_AnswerPhone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhone_AnswerPhone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhone_AnswerPhone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhone_CallPhone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhone_CallPhone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Phone" },
		{ "ModuleRelativePath", "Phone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhone_CallPhone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhone, nullptr, "CallPhone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhone_CallPhone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhone_CallPhone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhone_CallPhone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhone_CallPhone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APhone_NoRegister()
	{
		return APhone::StaticClass();
	}
	struct Z_Construct_UClass_APhone_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrabbable,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhone_AnswerPhone, "AnswerPhone" }, // 3630583880
		{ &Z_Construct_UFunction_APhone_CallPhone, "CallPhone" }, // 3594050190
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Phone.h" },
		{ "ModuleRelativePath", "Phone.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APhone_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhone_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Phone" },
		{ "ModuleRelativePath", "Phone.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APhone_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhone, State), Z_Construct_UEnum_ArchitectureExplorer_PhoneState, METADATA_PARAMS(Z_Construct_UClass_APhone_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhone_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhone_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhone_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhone_Statics::ClassParams = {
		&APhone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APhone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APhone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhone, 3058613644);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<APhone>()
	{
		return APhone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhone(Z_Construct_UClass_APhone, &APhone::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("APhone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
