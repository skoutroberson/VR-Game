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
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_AlienScareState_Hash() { return 957420461U; }
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
				{ "AlienScareState::STATE_CALLING_PHONE", (int64)AlienScareState::STATE_CALLING_PHONE },
				{ "AlienScareState::STATE_WAIT_CHASE", (int64)AlienScareState::STATE_WAIT_CHASE },
				{ "AlienScareState::STATE_CHASE", (int64)AlienScareState::STATE_CHASE },
				{ "AlienScareState::STATE_END_CHASE", (int64)AlienScareState::STATE_END_CHASE },
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
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "AlienScareState::STATE_IDLE" },
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AlienScare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScare,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AlienScare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AlienScare.h" },
		{ "ModuleRelativePath", "AlienScare.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AlienScare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AlienScare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AlienScare_Statics::ClassParams = {
		&AlienScare::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AlienScare, 2687303827);
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
