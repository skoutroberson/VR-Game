// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Crawler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrawler() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_CrawlerState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ACrawler_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ACrawler();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* CrawlerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_CrawlerState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("CrawlerState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<CrawlerState>()
	{
		return CrawlerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CrawlerState(CrawlerState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("CrawlerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_CrawlerState_Hash() { return 184837030U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_CrawlerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CrawlerState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_CrawlerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CrawlerState::STATE_IDLE", (int64)CrawlerState::STATE_IDLE },
				{ "CrawlerState::STATE_MOVE", (int64)CrawlerState::STATE_MOVE },
				{ "CrawlerState::STATE_FALL", (int64)CrawlerState::STATE_FALL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Crawler.h" },
				{ "STATE_FALL.DisplayName", "Fall" },
				{ "STATE_FALL.Name", "CrawlerState::STATE_FALL" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "CrawlerState::STATE_IDLE" },
				{ "STATE_MOVE.DisplayName", "Move" },
				{ "STATE_MOVE.Name", "CrawlerState::STATE_MOVE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"CrawlerState",
				"CrawlerState",
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
	DEFINE_FUNCTION(ACrawler::execRotateToNormal)
	{
		P_GET_STRUCT(FVector,Z_Param_NormalVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateToNormal(Z_Param_NormalVector);
		P_NATIVE_END;
	}
	void ACrawler::StaticRegisterNativesACrawler()
	{
		UClass* Class = ACrawler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RotateToNormal", &ACrawler::execRotateToNormal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrawler_RotateToNormal_Statics
	{
		struct Crawler_eventRotateToNormal_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACrawler_RotateToNormal_Statics::NewProp_NormalVector = { "NormalVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Crawler_eventRotateToNormal_Parms, NormalVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrawler_RotateToNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrawler_RotateToNormal_Statics::NewProp_NormalVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrawler_RotateToNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crawler" },
		{ "ModuleRelativePath", "Crawler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrawler_RotateToNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrawler, nullptr, "RotateToNormal", nullptr, nullptr, sizeof(Crawler_eventRotateToNormal_Parms), Z_Construct_UFunction_ACrawler_RotateToNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrawler_RotateToNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrawler_RotateToNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrawler_RotateToNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrawler_RotateToNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrawler_RotateToNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACrawler_NoRegister()
	{
		return ACrawler::StaticClass();
	}
	struct Z_Construct_UClass_ACrawler_Statics
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
	UObject* (*const Z_Construct_UClass_ACrawler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrawler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrawler_RotateToNormal, "RotateToNormal" }, // 355089931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrawler_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Crawler.h" },
		{ "ModuleRelativePath", "Crawler.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACrawler_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrawler_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Crawler" },
		{ "ModuleRelativePath", "Crawler.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACrawler_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrawler, State), Z_Construct_UEnum_ArchitectureExplorer_CrawlerState, METADATA_PARAMS(Z_Construct_UClass_ACrawler_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrawler_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrawler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrawler_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrawler_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrawler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrawler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrawler_Statics::ClassParams = {
		&ACrawler::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACrawler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrawler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrawler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrawler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrawler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrawler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrawler, 4239938191);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ACrawler>()
	{
		return ACrawler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrawler(Z_Construct_UClass_ACrawler, &ACrawler::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ACrawler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrawler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
