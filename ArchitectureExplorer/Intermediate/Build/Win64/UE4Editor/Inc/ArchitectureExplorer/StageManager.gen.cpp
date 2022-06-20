// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/StageManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageManager() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_EStageNum();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStageManager_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStageManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage_NoRegister();
// End Cross Module References
	static UEnum* EStageNum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_EStageNum, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("EStageNum"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<EStageNum>()
	{
		return EStageNum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStageNum(EStageNum_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("EStageNum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_EStageNum_Hash() { return 2409625506U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_EStageNum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStageNum"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_EStageNum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStageNum::STAGE_1", (int64)EStageNum::STAGE_1 },
				{ "EStageNum::STAGE_2", (int64)EStageNum::STAGE_2 },
				{ "EStageNum::STAGE_3", (int64)EStageNum::STAGE_3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "StageManager.h" },
				{ "STAGE_1.DisplayName", "Stage1" },
				{ "STAGE_1.Name", "EStageNum::STAGE_1" },
				{ "STAGE_2.DisplayName", "Stage2" },
				{ "STAGE_2.Name", "EStageNum::STAGE_2" },
				{ "STAGE_3.DisplayName", "Stage3" },
				{ "STAGE_3.Name", "EStageNum::STAGE_3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"EStageNum",
				"EStageNum",
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
	DEFINE_FUNCTION(AStageManager::execCurrentStageCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CurrentStageCompleted();
		P_NATIVE_END;
	}
	void AStageManager::StaticRegisterNativesAStageManager()
	{
		UClass* Class = AStageManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CurrentStageCompleted", &AStageManager::execCurrentStageCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics
	{
		struct StageManager_eventCurrentStageCompleted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StageManager_eventCurrentStageCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StageManager_eventCurrentStageCompleted_Parms), &Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStageManager, nullptr, "CurrentStageCompleted", nullptr, nullptr, sizeof(StageManager_eventCurrentStageCompleted_Parms), Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStageManager_CurrentStageCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStageManager_CurrentStageCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStageManager_NoRegister()
	{
		return AStageManager::StaticClass();
	}
	struct Z_Construct_UClass_AStageManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentStage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentStageNum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStageNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentStageNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStageManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStageManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStageManager_CurrentStageCompleted, "CurrentStageCompleted" }, // 569506933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStageManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StageManager.h" },
		{ "ModuleRelativePath", "StageManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStage_MetaData[] = {
		{ "Category", "StageManager" },
		{ "ModuleRelativePath", "StageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStage = { "CurrentStage", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStageManager, CurrentStage), Z_Construct_UClass_AStage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStageNum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStageNum_MetaData[] = {
		{ "Category", "StageManager" },
		{ "ModuleRelativePath", "StageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStageNum = { "CurrentStageNum", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStageManager, CurrentStageNum), Z_Construct_UEnum_ArchitectureExplorer_EStageNum, METADATA_PARAMS(Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStageNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStageNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStageManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStageNum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStageManager_Statics::NewProp_CurrentStageNum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStageManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStageManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStageManager_Statics::ClassParams = {
		&AStageManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStageManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStageManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStageManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStageManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStageManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStageManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStageManager, 1392461852);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AStageManager>()
	{
		return AStageManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStageManager(Z_Construct_UClass_AStageManager, &AStageManager::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AStageManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStageManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
