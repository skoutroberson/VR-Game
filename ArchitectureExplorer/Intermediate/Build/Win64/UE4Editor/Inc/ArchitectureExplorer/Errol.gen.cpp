// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Errol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrol() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_AnimState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrol_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrol();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* AnimState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_AnimState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("AnimState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<AnimState>()
	{
		return AnimState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimState(AnimState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("AnimState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_AnimState_Hash() { return 3338011925U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_AnimState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_AnimState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Idle", (int64)Idle },
				{ "Walk", (int64)Walk },
				{ "Run", (int64)Run },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Idle.DisplayName", "Idle" },
				{ "Idle.Name", "Idle" },
				{ "ModuleRelativePath", "Errol.h" },
				{ "Run.DisplayName", "Run" },
				{ "Run.Name", "Run" },
				{ "Walk.DisplayName", "Walk" },
				{ "Walk.Name", "Walk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"AnimState",
				"AnimState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AErrol::StaticRegisterNativesAErrol()
	{
	}
	UClass* Z_Construct_UClass_AErrol_NoRegister()
	{
		return AErrol::StaticClass();
	}
	struct Z_Construct_UClass_AErrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrolSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrolSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AErrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Errol.h" },
		{ "ModuleRelativePath", "Errol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrol_Statics::NewProp_ErrolSpeed_MetaData[] = {
		{ "Category", "ErrolStuff" },
		{ "ModuleRelativePath", "Errol.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AErrol_Statics::NewProp_ErrolSpeed = { "ErrolSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrol, ErrolSpeed), METADATA_PARAMS(Z_Construct_UClass_AErrol_Statics::NewProp_ErrolSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrol_Statics::NewProp_ErrolSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrol_Statics::NewProp_VRRoot_MetaData[] = {
		{ "Category", "Errol" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Errol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrol_Statics::NewProp_VRRoot = { "VRRoot", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrol, VRRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AErrol_Statics::NewProp_VRRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrol_Statics::NewProp_VRRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AErrol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrol_Statics::NewProp_ErrolSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrol_Statics::NewProp_VRRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AErrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AErrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AErrol_Statics::ClassParams = {
		&AErrol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AErrol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AErrol_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AErrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AErrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AErrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AErrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AErrol, 2282219774);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AErrol>()
	{
		return AErrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AErrol(Z_Construct_UClass_AErrol, &AErrol::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AErrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AErrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
