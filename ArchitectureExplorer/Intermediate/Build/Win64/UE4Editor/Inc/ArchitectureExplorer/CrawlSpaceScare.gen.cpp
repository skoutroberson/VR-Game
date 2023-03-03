// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/CrawlSpaceScare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrawlSpaceScare() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ACrawlSpaceScare_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ACrawlSpaceScare();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AScare();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	DEFINE_FUNCTION(ACrawlSpaceScare::execFlyAtPlayer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FlyAtPlayer(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACrawlSpaceScare::execShouldFlyAtPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldFlyAtPlayer();
		P_NATIVE_END;
	}
	void ACrawlSpaceScare::StaticRegisterNativesACrawlSpaceScare()
	{
		UClass* Class = ACrawlSpaceScare::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlyAtPlayer", &ACrawlSpaceScare::execFlyAtPlayer },
			{ "ShouldFlyAtPlayer", &ACrawlSpaceScare::execShouldFlyAtPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics
	{
		struct CrawlSpaceScare_eventFlyAtPlayer_Parms
		{
			float DeltaTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrawlSpaceScare_eventFlyAtPlayer_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CrawlSpaceScare_eventFlyAtPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CrawlSpaceScare_eventFlyAtPlayer_Parms), &Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrawlSpaceScare.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrawlSpaceScare, nullptr, "FlyAtPlayer", nullptr, nullptr, sizeof(CrawlSpaceScare_eventFlyAtPlayer_Parms), Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics
	{
		struct CrawlSpaceScare_eventShouldFlyAtPlayer_Parms
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
	void Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CrawlSpaceScare_eventShouldFlyAtPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CrawlSpaceScare_eventShouldFlyAtPlayer_Parms), &Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CrawlSpaceScare.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACrawlSpaceScare, nullptr, "ShouldFlyAtPlayer", nullptr, nullptr, sizeof(CrawlSpaceScare_eventShouldFlyAtPlayer_Parms), Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACrawlSpaceScare_NoRegister()
	{
		return ACrawlSpaceScare::StaticClass();
	}
	struct Z_Construct_UClass_ACrawlSpaceScare_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlyAtDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlyAtDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFlyAtSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentFlyAtSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFlyAtSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFlyAtSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrawlSpaceScare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScare,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACrawlSpaceScare_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrawlSpaceScare_FlyAtPlayer, "FlyAtPlayer" }, // 3865711523
		{ &Z_Construct_UFunction_ACrawlSpaceScare_ShouldFlyAtPlayer, "ShouldFlyAtPlayer" }, // 787144067
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrawlSpaceScare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CrawlSpaceScare.h" },
		{ "ModuleRelativePath", "CrawlSpaceScare.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_FlyAtDistance_MetaData[] = {
		{ "Category", "CrawlSpaceScare" },
		{ "ModuleRelativePath", "CrawlSpaceScare.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_FlyAtDistance = { "FlyAtDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrawlSpaceScare, FlyAtDistance), METADATA_PARAMS(Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_FlyAtDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_FlyAtDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_CurrentFlyAtSpeed_MetaData[] = {
		{ "Category", "CrawlSpaceScare" },
		{ "ModuleRelativePath", "CrawlSpaceScare.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_CurrentFlyAtSpeed = { "CurrentFlyAtSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrawlSpaceScare, CurrentFlyAtSpeed), METADATA_PARAMS(Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_CurrentFlyAtSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_CurrentFlyAtSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_MaxFlyAtSpeed_MetaData[] = {
		{ "Category", "CrawlSpaceScare" },
		{ "ModuleRelativePath", "CrawlSpaceScare.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_MaxFlyAtSpeed = { "MaxFlyAtSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrawlSpaceScare, MaxFlyAtSpeed), METADATA_PARAMS(Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_MaxFlyAtSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_MaxFlyAtSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrawlSpaceScare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_FlyAtDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_CurrentFlyAtSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrawlSpaceScare_Statics::NewProp_MaxFlyAtSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrawlSpaceScare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrawlSpaceScare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrawlSpaceScare_Statics::ClassParams = {
		&ACrawlSpaceScare::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACrawlSpaceScare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrawlSpaceScare_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrawlSpaceScare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrawlSpaceScare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrawlSpaceScare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrawlSpaceScare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrawlSpaceScare, 4173433642);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ACrawlSpaceScare>()
	{
		return ACrawlSpaceScare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrawlSpaceScare(Z_Construct_UClass_ACrawlSpaceScare, &ACrawlSpaceScare::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ACrawlSpaceScare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrawlSpaceScare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
