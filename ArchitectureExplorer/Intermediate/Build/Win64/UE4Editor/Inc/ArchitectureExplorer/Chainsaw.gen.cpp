// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Chainsaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsaw() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AChainsaw_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AChainsaw();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AGrabbable();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AChainsaw::execStartDismember)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDismember();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChainsaw::execBladeBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_FirstComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BladeBeginOverlap(Z_Param_FirstComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_AChainsaw_PressTrigger = FName(TEXT("PressTrigger"));
	void AChainsaw::PressTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_AChainsaw_PressTrigger),NULL);
	}
	static FName NAME_AChainsaw_ReleaseTrigger = FName(TEXT("ReleaseTrigger"));
	void AChainsaw::ReleaseTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_AChainsaw_ReleaseTrigger),NULL);
	}
	void AChainsaw::StaticRegisterNativesAChainsaw()
	{
		UClass* Class = AChainsaw::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BladeBeginOverlap", &AChainsaw::execBladeBeginOverlap },
			{ "StartDismember", &AChainsaw::execStartDismember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics
	{
		struct Chainsaw_eventBladeBeginOverlap_Parms
		{
			UPrimitiveComponent* FirstComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_FirstComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_FirstComponent = { "FirstComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chainsaw_eventBladeBeginOverlap_Parms, FirstComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_FirstComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_FirstComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chainsaw_eventBladeBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chainsaw_eventBladeBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chainsaw_eventBladeBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Chainsaw_eventBladeBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Chainsaw_eventBladeBeginOverlap_Parms), &Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chainsaw_eventBladeBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_FirstComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChainsaw, nullptr, "BladeBeginOverlap", nullptr, nullptr, sizeof(Chainsaw_eventBladeBeginOverlap_Parms), Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChainsaw_BladeBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChainsaw_PressTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_PressTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChainsaw_PressTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChainsaw, nullptr, "PressTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_PressTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_PressTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChainsaw_PressTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChainsaw_PressTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChainsaw, nullptr, "ReleaseTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChainsaw_ReleaseTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChainsaw_StartDismember_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_StartDismember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChainsaw_StartDismember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChainsaw, nullptr, "StartDismember", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_StartDismember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_StartDismember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChainsaw_StartDismember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChainsaw_StartDismember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChainsaw_NoRegister()
	{
		return AChainsaw::StaticClass();
	}
	struct Z_Construct_UClass_AChainsaw_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Heat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatUpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeatUpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEngineValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentEngineValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEngineValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEngineValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomShake_MetaData[];
#endif
		static void NewProp_bRandomShake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevShakeMaxIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RevShakeMaxIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RevStartupIntensityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RevStartupIntensityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutEndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CutEndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CutStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cut1Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cut1Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cut2Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cut2Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutVectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CutVectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutUpVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutUpVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BladeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BladeOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChainsaw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrabbable,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChainsaw_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChainsaw_BladeBeginOverlap, "BladeBeginOverlap" }, // 3480068420
		{ &Z_Construct_UFunction_AChainsaw_PressTrigger, "PressTrigger" }, // 3910340088
		{ &Z_Construct_UFunction_AChainsaw_ReleaseTrigger, "ReleaseTrigger" }, // 2371513027
		{ &Z_Construct_UFunction_AChainsaw_StartDismember, "StartDismember" }, // 3726604205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Chainsaw.h" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_Heat_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "Comment", "//\x09this will control how fast the saw revs back down when the trigger is not pressed anymore.\n//\x09the heat level will rise to MaxHeat and go down by DeltaTime * CooldownSpeed\n" },
		{ "ModuleRelativePath", "Chainsaw.h" },
		{ "ToolTip", "this will control how fast the saw revs back down when the trigger is not pressed anymore.\nthe heat level will rise to MaxHeat and go down by DeltaTime * CooldownSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_Heat = { "Heat", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, Heat), METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_Heat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_Heat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_MaxHeat_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_MaxHeat = { "MaxHeat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, MaxHeat), METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_MaxHeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_MaxHeat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_HeatUpSpeed_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_HeatUpSpeed = { "HeatUpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, HeatUpSpeed), METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_HeatUpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_HeatUpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_CooldownSpeed_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_CooldownSpeed = { "CooldownSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, CooldownSpeed), METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_CooldownSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_CooldownSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_CurrentEngineValue_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_CurrentEngineValue = { "CurrentEngineValue", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, CurrentEngineValue), METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_CurrentEngineValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_CurrentEngineValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_MaxEngineValue_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_MaxEngineValue = { "MaxEngineValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, MaxEngineValue), METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_MaxEngineValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_MaxEngineValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_bRandomShake_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "Comment", "//\x09state for shaking the chainsaw when pulling the trigger\n" },
		{ "ModuleRelativePath", "Chainsaw.h" },
		{ "ToolTip", "state for shaking the chainsaw when pulling the trigger" },
	};
#endif
	void Z_Construct_UClass_AChainsaw_Statics::NewProp_bRandomShake_SetBit(void* Obj)
	{
		((AChainsaw*)Obj)->bRandomShake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_bRandomShake = { "bRandomShake", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AChainsaw), &Z_Construct_UClass_AChainsaw_Statics::NewProp_bRandomShake_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_bRandomShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_bRandomShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_RevShakeMaxIntensity_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_RevShakeMaxIntensity = { "RevShakeMaxIntensity", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, RevShakeMaxIntensity), METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_RevShakeMaxIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_RevShakeMaxIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_RevStartupIntensityMultiplier_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_RevStartupIntensityMultiplier = { "RevStartupIntensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, RevStartupIntensityMultiplier), METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_RevStartupIntensityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_RevStartupIntensityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_CutEndLocation_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "Comment", "// set in blueprints by BP_FiverrErrol1\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Chainsaw.h" },
		{ "ToolTip", "set in blueprints by BP_FiverrErrol1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_CutEndLocation = { "CutEndLocation", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, CutEndLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_CutEndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_CutEndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_CutStartLocation_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_CutStartLocation = { "CutStartLocation", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, CutStartLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_CutStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_CutStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_Cut1Location_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_Cut1Location = { "Cut1Location", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, Cut1Location), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_Cut1Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_Cut1Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_Cut2Location_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_Cut2Location = { "Cut2Location", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, Cut2Location), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_Cut2Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_Cut2Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_CutVectors_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_CutVectors = { "CutVectors", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, CutVectors), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_CutVectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_CutVectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_CutUpVector_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_CutUpVector = { "CutUpVector", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, CutUpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_CutUpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_CutUpVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::NewProp_BladeOffset_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChainsaw_Statics::NewProp_BladeOffset = { "BladeOffset", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChainsaw, BladeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::NewProp_BladeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::NewProp_BladeOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChainsaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_Heat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_MaxHeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_HeatUpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_CooldownSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_CurrentEngineValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_MaxEngineValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_bRandomShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_RevShakeMaxIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_RevStartupIntensityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_CutEndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_CutStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_Cut1Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_Cut2Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_CutVectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_CutUpVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChainsaw_Statics::NewProp_BladeOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChainsaw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChainsaw>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChainsaw_Statics::ClassParams = {
		&AChainsaw::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChainsaw_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChainsaw()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChainsaw_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChainsaw, 2775795861);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AChainsaw>()
	{
		return AChainsaw::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChainsaw(Z_Construct_UClass_AChainsaw, &AChainsaw::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AChainsaw"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChainsaw);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
