// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Stage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStage() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStage();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	DEFINE_FUNCTION(AStage::execResetStage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetStage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStage::execEndStage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndStage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStage::execBeginStage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginStage();
		P_NATIVE_END;
	}
	void AStage::StaticRegisterNativesAStage()
	{
		UClass* Class = AStage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginStage", &AStage::execBeginStage },
			{ "EndStage", &AStage::execEndStage },
			{ "ResetStage", &AStage::execResetStage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStage_BeginStage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStage_BeginStage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// called when the stage starts\n" },
		{ "ModuleRelativePath", "Stage.h" },
		{ "ToolTip", "called when the stage starts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStage_BeginStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStage, nullptr, "BeginStage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStage_BeginStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStage_BeginStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStage_BeginStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStage_BeginStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStage_EndStage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStage_EndStage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// called when the stage ends\n" },
		{ "ModuleRelativePath", "Stage.h" },
		{ "ToolTip", "called when the stage ends" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStage_EndStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStage, nullptr, "EndStage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStage_EndStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStage_EndStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStage_EndStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStage_EndStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStage_ResetStage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStage_ResetStage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// called if the player starts another loop but hasn't completed the current stage\n" },
		{ "ModuleRelativePath", "Stage.h" },
		{ "ToolTip", "called if the player starts another loop but hasn't completed the current stage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStage_ResetStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStage, nullptr, "ResetStage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStage_ResetStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStage_ResetStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStage_ResetStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStage_ResetStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStage_NoRegister()
	{
		return AStage::StaticClass();
	}
	struct Z_Construct_UClass_AStage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_StageNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompleted_MetaData[];
#endif
		static void NewProp_bCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loops_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Loops;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStage_BeginStage, "BeginStage" }, // 2061921950
		{ &Z_Construct_UFunction_AStage_EndStage, "EndStage" }, // 3919779531
		{ &Z_Construct_UFunction_AStage_ResetStage, "ResetStage" }, // 3212489641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Stage.h" },
		{ "ModuleRelativePath", "Stage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage_Statics::NewProp_StageNum_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "// stage num for debugging. Uninitialized is 0.\n" },
		{ "ModuleRelativePath", "Stage.h" },
		{ "ToolTip", "stage num for debugging. Uninitialized is 0." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStage_Statics::NewProp_StageNum = { "StageNum", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStage, StageNum), METADATA_PARAMS(Z_Construct_UClass_AStage_Statics::NewProp_StageNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStage_Statics::NewProp_StageNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage_Statics::NewProp_bCompleted_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Stage.h" },
	};
#endif
	void Z_Construct_UClass_AStage_Statics::NewProp_bCompleted_SetBit(void* Obj)
	{
		((AStage*)Obj)->bCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStage_Statics::NewProp_bCompleted = { "bCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStage), &Z_Construct_UClass_AStage_Statics::NewProp_bCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStage_Statics::NewProp_bCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStage_Statics::NewProp_bCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStage_Statics::NewProp_Loops_MetaData[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Stage.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStage_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStage, Loops), METADATA_PARAMS(Z_Construct_UClass_AStage_Statics::NewProp_Loops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStage_Statics::NewProp_Loops_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStage_Statics::NewProp_StageNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStage_Statics::NewProp_bCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStage_Statics::NewProp_Loops,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStage_Statics::ClassParams = {
		&AStage::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStage_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStage, 1927902096);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AStage>()
	{
		return AStage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStage(Z_Construct_UClass_AStage, &AStage::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AStage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
