// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/ErrolController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeErrolController() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolController_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AErrolController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AErrolController::execLookAroundTimerCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookAroundTimerCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolController::execGoToRandomWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToRandomWaypoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AErrolController::execGetRandomWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetRandomWaypoint();
		P_NATIVE_END;
	}
	void AErrolController::StaticRegisterNativesAErrolController()
	{
		UClass* Class = AErrolController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomWaypoint", &AErrolController::execGetRandomWaypoint },
			{ "GoToRandomWaypoint", &AErrolController::execGoToRandomWaypoint },
			{ "LookAroundTimerCompleted", &AErrolController::execLookAroundTimerCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics
	{
		struct ErrolController_eventGetRandomWaypoint_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ErrolController_eventGetRandomWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolController, nullptr, "GetRandomWaypoint", nullptr, nullptr, sizeof(ErrolController_eventGetRandomWaypoint_Parms), Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolController_GetRandomWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolController_GetRandomWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolController_GoToRandomWaypoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolController_GoToRandomWaypoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ErrolController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolController_GoToRandomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolController, nullptr, "GoToRandomWaypoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolController_GoToRandomWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolController_GoToRandomWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolController_GoToRandomWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolController_GoToRandomWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AErrolController_LookAroundTimerCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AErrolController_LookAroundTimerCompleted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//void StopLookAroundTimer();\n" },
		{ "ModuleRelativePath", "ErrolController.h" },
		{ "ToolTip", "void StopLookAroundTimer();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AErrolController_LookAroundTimerCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AErrolController, nullptr, "LookAroundTimerCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AErrolController_LookAroundTimerCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AErrolController_LookAroundTimerCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AErrolController_LookAroundTimerCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AErrolController_LookAroundTimerCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AErrolController_NoRegister()
	{
		return AErrolController::StaticClass();
	}
	struct Z_Construct_UClass_AErrolController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AErrolController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AErrolController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AErrolController_GetRandomWaypoint, "GetRandomWaypoint" }, // 2124822123
		{ &Z_Construct_UFunction_AErrolController_GoToRandomWaypoint, "GoToRandomWaypoint" }, // 3040650595
		{ &Z_Construct_UFunction_AErrolController_LookAroundTimerCompleted, "LookAroundTimerCompleted" }, // 2926876926
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ErrolController.h" },
		{ "ModuleRelativePath", "ErrolController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AErrolController_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AErrolController_Statics::NewProp_Waypoints_MetaData[] = {
		{ "ModuleRelativePath", "ErrolController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AErrolController_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AErrolController, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AErrolController_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolController_Statics::NewProp_Waypoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AErrolController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolController_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AErrolController_Statics::NewProp_Waypoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AErrolController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AErrolController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AErrolController_Statics::ClassParams = {
		&AErrolController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AErrolController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AErrolController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AErrolController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AErrolController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AErrolController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AErrolController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AErrolController, 3222094779);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AErrolController>()
	{
		return AErrolController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AErrolController(Z_Construct_UClass_AErrolController, &AErrolController::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AErrolController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AErrolController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
