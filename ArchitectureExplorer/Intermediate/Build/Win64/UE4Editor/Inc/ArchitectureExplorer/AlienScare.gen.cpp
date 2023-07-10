// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/AlienScare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlienScare() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_AlienScareState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AlienScare_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AlienScare();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AScare();
// End Cross Module References
	static UEnum* AlienScareState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_AlienScareState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("AlienScareState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<AlienScareState>()
	{
		return AlienScareState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AlienScareState(AlienScareState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("AlienScareState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_AlienScareState_Hash() { return 2022846249U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_AlienScareState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AlienScareState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_AlienScareState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AlienScareState::STATE_IDLE", (int64)AlienScareState::STATE_IDLE },
				{ "AlienScareState::STATE_START_SCARE", (int64)AlienScareState::STATE_START_SCARE },
				{ "AlienScareState::STATE_MOVING_PHONE", (int64)AlienScareState::STATE_MOVING_PHONE },
				{ "AlienScareState::STATE_CALLING_PHONE", (int64)AlienScareState::STATE_CALLING_PHONE },
				{ "AlienScareState::STATE_WAIT_CHASE", (int64)AlienScareState::STATE_WAIT_CHASE },
				{ "AlienScareState::STATE_CHASE", (int64)AlienScareState::STATE_CHASE },
				{ "AlienScareState::STATE_END_CHASE", (int64)AlienScareState::STATE_END_CHASE },
				{ "AlienScareState::STATE_END_SCARE", (int64)AlienScareState::STATE_END_SCARE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "AlienScare.h" },
				{ "STATE_CALLING_PHONE.DisplayName", "CallingPhone" },
				{ "STATE_CALLING_PHONE.Name", "AlienScareState::STATE_CALLING_PHONE" },
				{ "STATE_CHASE.DisplayName", "Chase" },
				{ "STATE_CHASE.Name", "AlienScareState::STATE_CHASE" },
				{ "STATE_END_CHASE.DisplayName", "EndChase" },
				{ "STATE_END_CHASE.Name", "AlienScareState::STATE_END_CHASE" },
				{ "STATE_END_SCARE.DisplayName", "EndScare" },
				{ "STATE_END_SCARE.Name", "AlienScareState::STATE_END_SCARE" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "AlienScareState::STATE_IDLE" },
				{ "STATE_MOVING_PHONE.DisplayName", "MovingPhone" },
				{ "STATE_MOVING_PHONE.Name", "AlienScareState::STATE_MOVING_PHONE" },
				{ "STATE_START_SCARE.DisplayName", "StartScare" },
				{ "STATE_START_SCARE.Name", "AlienScareState::STATE_START_SCARE" },
				{ "STATE_WAIT_CHASE.DisplayName", "WaitChase" },
				{ "STATE_WAIT_CHASE.Name", "AlienScareState::STATE_WAIT_CHASE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"AlienScareState",
				"AlienScareState",
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
	void AlienScare::StaticRegisterNativesAlienScare()
	{
	}
	UClass* Z_Construct_UClass_AlienScare_NoRegister()
	{
		return AlienScare::StaticClass();
	}
	struct Z_Construct_UClass_AlienScare_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
	UObject* (*const Z_Construct_UClass_AlienScare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScare,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AlienScare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * // on trigger, call phone\n\x09// \"\"you have to run\"\"\n\x09// delay\n\x09// \"Get out of there! Move!\"\n\x09// delay\n\x09// check how far the player has moved, play an audio for either one,\n\n\x09// \"Wait not that way! The other way-OH GOD!\"\n\x09// or\n\x09// \"What are you doing! Run-OH GOD!\"\n\x09\n\x09// spawn errol at  side of the living room area that the player is looking at, chase for 3 minutes. (if errol is far away and hasn't seen the player in 10 seconds, then spawn him in another part\n\x09of the house.\n */" },
		{ "IncludePath", "AlienScare.h" },
		{ "ModuleRelativePath", "AlienScare.h" },
		{ "ToolTip", "// on trigger, call phone\n       // \"\"you have to run\"\"\n       // delay\n       // \"Get out of there! Move!\"\n       // delay\n       // check how far the player has moved, play an audio for either one,\n\n       // \"Wait not that way! The other way-OH GOD!\"\n       // or\n       // \"What are you doing! Run-OH GOD!\"\n\n       // spawn errol at  side of the living room area that the player is looking at, chase for 3 minutes. (if errol is far away and hasn't seen the player in 10 seconds, then spawn him in another part\n       of the house." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AlienScare_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AlienScare_Statics::NewProp_State_MetaData[] = {
		{ "Category", "lienScare" },
		{ "ModuleRelativePath", "AlienScare.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AlienScare_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AlienScare, State), Z_Construct_UEnum_ArchitectureExplorer_AlienScareState, METADATA_PARAMS(Z_Construct_UClass_AlienScare_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AlienScare_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AlienScare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AlienScare_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AlienScare_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AlienScare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AlienScare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AlienScare_Statics::ClassParams = {
		&AlienScare::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AlienScare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AlienScare_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AlienScare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AlienScare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AlienScare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AlienScare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AlienScare, 1307631104);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AlienScare>()
	{
		return AlienScare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AlienScare(Z_Construct_UClass_AlienScare, &AlienScare::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AlienScare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AlienScare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
