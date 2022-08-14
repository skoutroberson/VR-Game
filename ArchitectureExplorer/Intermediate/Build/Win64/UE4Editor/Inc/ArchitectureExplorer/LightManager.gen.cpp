// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/LightManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightManager() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ALightManager_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ALightManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ALightManager::execEditLight)
	{
		P_GET_OBJECT(AActor,Z_Param_LightActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LightIntensity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EmissiveValue);
		P_GET_STRUCT(FVector,Z_Param_EmissiveColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditLight(Z_Param_LightActor,Z_Param_LightIntensity,Z_Param_EmissiveValue,Z_Param_EmissiveColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightManager::execTurnOn)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LightIntensity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EmissiveValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnOn(Z_Param_Name,Z_Param_LightIntensity,Z_Param_EmissiveValue);
		P_NATIVE_END;
	}
	void ALightManager::StaticRegisterNativesALightManager()
	{
		UClass* Class = ALightManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditLight", &ALightManager::execEditLight },
			{ "TurnOn", &ALightManager::execTurnOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightManager_EditLight_Statics
	{
		struct LightManager_eventEditLight_Parms
		{
			AActor* LightActor;
			float LightIntensity;
			float EmissiveValue;
			FVector EmissiveColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightIntensity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmissiveValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightManager_EditLight_Statics::NewProp_LightActor = { "LightActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventEditLight_Parms, LightActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightManager_EditLight_Statics::NewProp_LightIntensity = { "LightIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventEditLight_Parms, LightIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightManager_EditLight_Statics::NewProp_EmissiveValue = { "EmissiveValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventEditLight_Parms, EmissiveValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALightManager_EditLight_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventEditLight_Parms, EmissiveColor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightManager_EditLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_EditLight_Statics::NewProp_LightActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_EditLight_Statics::NewProp_LightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_EditLight_Statics::NewProp_EmissiveValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_EditLight_Statics::NewProp_EmissiveColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightManager_EditLight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// edits light intensity and material emmisive value\n" },
		{ "CPP_Default_EmissiveColor", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_EmissiveValue", "100.000000" },
		{ "CPP_Default_LightIntensity", "100.000000" },
		{ "ModuleRelativePath", "LightManager.h" },
		{ "ToolTip", "edits light intensity and material emmisive value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightManager_EditLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightManager, nullptr, "EditLight", nullptr, nullptr, sizeof(LightManager_eventEditLight_Parms), Z_Construct_UFunction_ALightManager_EditLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_EditLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightManager_EditLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_EditLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightManager_EditLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightManager_EditLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALightManager_TurnOn_Statics
	{
		struct LightManager_eventTurnOn_Parms
		{
			FString Name;
			float LightIntensity;
			float EmissiveValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightIntensity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmissiveValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALightManager_TurnOn_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventTurnOn_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightManager_TurnOn_Statics::NewProp_LightIntensity = { "LightIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventTurnOn_Parms, LightIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightManager_TurnOn_Statics::NewProp_EmissiveValue = { "EmissiveValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventTurnOn_Parms, EmissiveValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightManager_TurnOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_TurnOn_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_TurnOn_Statics::NewProp_LightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_TurnOn_Statics::NewProp_EmissiveValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightManager_TurnOn_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_EmissiveValue", "100.000000" },
		{ "CPP_Default_LightIntensity", "100.000000" },
		{ "ModuleRelativePath", "LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightManager_TurnOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightManager, nullptr, "TurnOn", nullptr, nullptr, sizeof(LightManager_eventTurnOn_Parms), Z_Construct_UFunction_ALightManager_TurnOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_TurnOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightManager_TurnOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_TurnOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightManager_TurnOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightManager_TurnOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightManager_NoRegister()
	{
		return ALightManager::StaticClass();
	}
	struct Z_Construct_UClass_ALightManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightManager_EditLight, "EditLight" }, // 4116205818
		{ &Z_Construct_UFunction_ALightManager_TurnOn, "TurnOn" }, // 786611130
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightManager.h" },
		{ "ModuleRelativePath", "LightManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightManager_Statics::ClassParams = {
		&ALightManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightManager, 957782769);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ALightManager>()
	{
		return ALightManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightManager(Z_Construct_UClass_ALightManager, &ALightManager::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ALightManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
