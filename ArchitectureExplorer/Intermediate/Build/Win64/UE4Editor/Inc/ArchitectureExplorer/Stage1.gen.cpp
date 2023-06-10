// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Stage1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStage1() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage1_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage1();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	DEFINE_FUNCTION(AStage1::execNewLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewLoop();
		P_NATIVE_END;
	}
	void AStage1::StaticRegisterNativesAStage1()
	{
		UClass* Class = AStage1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NewLoop", &AStage1::execNewLoop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStage1_NewLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStage1_NewLoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stage1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStage1_NewLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStage1, nullptr, "NewLoop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStage1_NewLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStage1_NewLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStage1_NewLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStage1_NewLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStage1_NoRegister()
	{
		return AStage1::StaticClass();
	}
	struct Z_Construct_UClass_AStage1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStage1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStage,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStage1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStage1_NewLoop, "NewLoop" }, // 3812951067
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Stage1.h" },
		{ "ModuleRelativePath", "Stage1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStage1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStage1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStage1_Statics::ClassParams = {
		&AStage1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStage1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStage1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStage1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStage1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStage1, 593449480);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AStage1>()
	{
		return AStage1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStage1(Z_Construct_UClass_AStage1, &AStage1::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AStage1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStage1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
