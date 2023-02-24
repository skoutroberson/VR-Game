// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Dog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDog() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_DogState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADog_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADog();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ABall_NoRegister();
// End Cross Module References
	static UEnum* DogState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_DogState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("DogState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<DogState>()
	{
		return DogState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DogState(DogState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("DogState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_DogState_Hash() { return 2017030452U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_DogState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DogState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_DogState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DogState::STATE_IDLE", (int64)DogState::STATE_IDLE },
				{ "DogState::STATE_LAYING", (int64)DogState::STATE_LAYING },
				{ "DogState::STATE_SITTING", (int64)DogState::STATE_SITTING },
				{ "DogState::STATE_STANDINGUP", (int64)DogState::STATE_STANDINGUP },
				{ "DogState::STATE_SITTINGDOWN", (int64)DogState::STATE_SITTINGDOWN },
				{ "DogState::STATE_STAYWALKRUN", (int64)DogState::STATE_STAYWALKRUN },
				{ "DogState::STATE_FETCHING", (int64)DogState::STATE_FETCHING },
				{ "DogState::STATE_RETURNING", (int64)DogState::STATE_RETURNING },
				{ "DogState::STATE_PICKUP", (int64)DogState::STATE_PICKUP },
				{ "DogState::STATE_DROP", (int64)DogState::STATE_DROP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Dog.h" },
				{ "STATE_DROP.DisplayName", "Dropping" },
				{ "STATE_DROP.Name", "DogState::STATE_DROP" },
				{ "STATE_FETCHING.DisplayName", "Fetching" },
				{ "STATE_FETCHING.Name", "DogState::STATE_FETCHING" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "DogState::STATE_IDLE" },
				{ "STATE_LAYING.DisplayName", "Laying" },
				{ "STATE_LAYING.Name", "DogState::STATE_LAYING" },
				{ "STATE_PICKUP.DisplayName", "PickUp" },
				{ "STATE_PICKUP.Name", "DogState::STATE_PICKUP" },
				{ "STATE_RETURNING.DisplayName", "Returning" },
				{ "STATE_RETURNING.Name", "DogState::STATE_RETURNING" },
				{ "STATE_SITTING.DisplayName", "Sitting" },
				{ "STATE_SITTING.Name", "DogState::STATE_SITTING" },
				{ "STATE_SITTINGDOWN.DisplayName", "SittingDown" },
				{ "STATE_SITTINGDOWN.Name", "DogState::STATE_SITTINGDOWN" },
				{ "STATE_STANDINGUP.DisplayName", "StandingUp" },
				{ "STATE_STANDINGUP.Name", "DogState::STATE_STANDINGUP" },
				{ "STATE_STAYWALKRUN.DisplayName", "StayWalkRun" },
				{ "STATE_STAYWALKRUN.Name", "DogState::STATE_STAYWALKRUN" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"DogState",
				"DogState",
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
	DEFINE_FUNCTION(ADog::execFetchBall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FetchBall();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADog::execPickupBall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickupBall();
		P_NATIVE_END;
	}
	void ADog::StaticRegisterNativesADog()
	{
		UClass* Class = ADog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FetchBall", &ADog::execFetchBall },
			{ "PickupBall", &ADog::execPickupBall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADog_FetchBall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADog_FetchBall_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// fetch the ball if bWantsToFetch = true and state != Fetching\n" },
		{ "ModuleRelativePath", "Dog.h" },
		{ "ToolTip", "fetch the ball if bWantsToFetch = true and state != Fetching" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADog_FetchBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADog, nullptr, "FetchBall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADog_FetchBall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADog_FetchBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADog_FetchBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADog_FetchBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADog_PickupBall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADog_PickupBall_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// called by anim notify\n" },
		{ "ModuleRelativePath", "Dog.h" },
		{ "ToolTip", "called by anim notify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADog_PickupBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADog, nullptr, "PickupBall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADog_PickupBall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADog_PickupBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADog_PickupBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADog_PickupBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADog_NoRegister()
	{
		return ADog::StaticClass();
	}
	struct Z_Construct_UClass_ADog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarkSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarkSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HappySound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HappySound;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ball;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADog_FetchBall, "FetchBall" }, // 4014571221
		{ &Z_Construct_UFunction_ADog_PickupBall, "PickupBall" }, // 1189668216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADog_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Dog.h" },
		{ "ModuleRelativePath", "Dog.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADog_Statics::NewProp_BarkSound_MetaData[] = {
		{ "Category", "Dog" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite)\n//class USkeletalMeshComponent *SkeletalMesh = nullptr;\n" },
		{ "ModuleRelativePath", "Dog.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\nclass USkeletalMeshComponent *SkeletalMesh = nullptr;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADog_Statics::NewProp_BarkSound = { "BarkSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADog, BarkSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADog_Statics::NewProp_BarkSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADog_Statics::NewProp_BarkSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADog_Statics::NewProp_HappySound_MetaData[] = {
		{ "Category", "Dog" },
		{ "ModuleRelativePath", "Dog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADog_Statics::NewProp_HappySound = { "HappySound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADog, HappySound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADog_Statics::NewProp_HappySound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADog_Statics::NewProp_HappySound_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADog_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADog_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Dog" },
		{ "ModuleRelativePath", "Dog.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADog_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADog, State), Z_Construct_UEnum_ArchitectureExplorer_DogState, METADATA_PARAMS(Z_Construct_UClass_ADog_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADog_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADog_Statics::NewProp_Ball_MetaData[] = {
		{ "Category", "Dog" },
		{ "ModuleRelativePath", "Dog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADog_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADog, Ball), Z_Construct_UClass_ABall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADog_Statics::NewProp_Ball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADog_Statics::NewProp_Ball_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADog_Statics::NewProp_BarkSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADog_Statics::NewProp_HappySound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADog_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADog_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADog_Statics::NewProp_Ball,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADog_Statics::ClassParams = {
		&ADog::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADog_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADog, 2944195566);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ADog>()
	{
		return ADog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADog(Z_Construct_UClass_ADog, &ADog::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ADog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
