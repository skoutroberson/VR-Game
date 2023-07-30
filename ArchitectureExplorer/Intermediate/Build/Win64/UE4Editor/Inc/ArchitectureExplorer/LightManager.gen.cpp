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
	ARCHITECTUREEXPLORER_API UScriptStruct* Z_Construct_UScriptStruct_FFlickerLight();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ALightManager_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ALightManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FFlickerLight::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCHITECTUREEXPLORER_API uint32 Get_Z_Construct_UScriptStruct_FFlickerLight_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlickerLight, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("FlickerLight"), sizeof(FFlickerLight), Get_Z_Construct_UScriptStruct_FFlickerLight_Hash());
	}
	return Singleton;
}
template<> ARCHITECTUREEXPLORER_API UScriptStruct* StaticStruct<FFlickerLight>()
{
	return FFlickerLight::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlickerLight(FFlickerLight::StaticStruct, TEXT("/Script/ArchitectureExplorer"), TEXT("FlickerLight"), false, nullptr, nullptr);
static struct FScriptStruct_ArchitectureExplorer_StaticRegisterNativesFFlickerLight
{
	FScriptStruct_ArchitectureExplorer_StaticRegisterNativesFFlickerLight()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FlickerLight")),new UScriptStruct::TCppStructOps<FFlickerLight>);
	}
} ScriptStruct_ArchitectureExplorer_StaticRegisterNativesFFlickerLight;
	struct Z_Construct_UScriptStruct_FFlickerLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlickerLight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "LightManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlickerLight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlickerLight>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlickerLight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
		nullptr,
		&NewStructOps,
		"FlickerLight",
		sizeof(FFlickerLight),
		alignof(FFlickerLight),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlickerLight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlickerLight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlickerLight()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlickerLight_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlickerLight"), sizeof(FFlickerLight), Get_Z_Construct_UScriptStruct_FFlickerLight_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlickerLight_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlickerLight_Hash() { return 357676097U; }
	DEFINE_FUNCTION(ALightManager::execRemoveFlickerLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFlickerLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALightManager::execAddFlickerLight)
	{
		P_GET_OBJECT(AActor,Z_Param_LightActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedCoefficient);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LightIntensity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EmissivePower);
		P_GET_STRUCT(FVector,Z_Param_LightColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFlickerLight(Z_Param_LightActor,Z_Param_SpeedCoefficient,Z_Param_LightIntensity,Z_Param_EmissivePower,Z_Param_LightColor);
		P_NATIVE_END;
	}
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
			{ "AddFlickerLight", &ALightManager::execAddFlickerLight },
			{ "EditLight", &ALightManager::execEditLight },
			{ "RemoveFlickerLight", &ALightManager::execRemoveFlickerLight },
			{ "TurnOn", &ALightManager::execTurnOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics
	{
		struct LightManager_eventAddFlickerLight_Parms
		{
			AActor* LightActor;
			float SpeedCoefficient;
			float LightIntensity;
			float EmissivePower;
			FVector LightColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedCoefficient;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightIntensity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmissivePower;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::NewProp_LightActor = { "LightActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventAddFlickerLight_Parms, LightActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::NewProp_SpeedCoefficient = { "SpeedCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventAddFlickerLight_Parms, SpeedCoefficient), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::NewProp_LightIntensity = { "LightIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventAddFlickerLight_Parms, LightIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::NewProp_EmissivePower = { "EmissivePower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventAddFlickerLight_Parms, EmissivePower), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightManager_eventAddFlickerLight_Parms, LightColor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::NewProp_LightActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::NewProp_SpeedCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::NewProp_LightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::NewProp_EmissivePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::NewProp_LightColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_EmissivePower", "1.000000" },
		{ "CPP_Default_LightColor", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_LightIntensity", "1.000000" },
		{ "CPP_Default_SpeedCoefficient", "1.000000" },
		{ "ModuleRelativePath", "LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightManager, nullptr, "AddFlickerLight", nullptr, nullptr, sizeof(LightManager_eventAddFlickerLight_Parms), Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightManager_AddFlickerLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightManager_AddFlickerLight_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ALightManager_RemoveFlickerLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightManager_RemoveFlickerLight_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// linearly checks each light\n" },
		{ "ModuleRelativePath", "LightManager.h" },
		{ "ToolTip", "linearly checks each light" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightManager_RemoveFlickerLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightManager, nullptr, "RemoveFlickerLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightManager_RemoveFlickerLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightManager_RemoveFlickerLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightManager_RemoveFlickerLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightManager_RemoveFlickerLight_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFlickerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFlickerTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightManager_AddFlickerLight, "AddFlickerLight" }, // 789106180
		{ &Z_Construct_UFunction_ALightManager_EditLight, "EditLight" }, // 4116205818
		{ &Z_Construct_UFunction_ALightManager_RemoveFlickerLight, "RemoveFlickerLight" }, // 2658542713
		{ &Z_Construct_UFunction_ALightManager_TurnOn, "TurnOn" }, // 786611130
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightManager.h" },
		{ "ModuleRelativePath", "LightManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightManager_Statics::NewProp_MaxFlickerTime_MetaData[] = {
		{ "Category", "LightManager" },
		{ "ModuleRelativePath", "LightManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightManager_Statics::NewProp_MaxFlickerTime = { "MaxFlickerTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightManager, MaxFlickerTime), METADATA_PARAMS(Z_Construct_UClass_ALightManager_Statics::NewProp_MaxFlickerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::NewProp_MaxFlickerTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightManager_Statics::NewProp_MaxFlickerTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightManager_Statics::ClassParams = {
		&ALightManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightManager_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ALightManager, 207588515);
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
