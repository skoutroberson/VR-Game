// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/QuatRotLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuatRotLib() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_UQuatRotLib_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_UQuatRotLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UQuatRotLib::execAddActorLocalRotationQuatLerp)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Current_Rotation);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta_Rotation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuatRotLib::AddActorLocalRotationQuatLerp(Z_Param_Actor,Z_Param_Out_Current_Rotation,Z_Param_Out_Delta_Rotation,Z_Param_Out_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuatRotLib::execAddActorLocalRotationQuat)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuatRotLib::AddActorLocalRotationQuat(Z_Param_Actor,Z_Param_Out_Delta_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuatRotLib::execSetActorRelativeRotationQuat)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuatRotLib::SetActorRelativeRotationQuat(Z_Param_Actor,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuatRotLib::execSetActorWorldRotationQuat)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuatRotLib::SetActorWorldRotationQuat(Z_Param_Actor,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuatRotLib::execAddLocalRotationQuat)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuatRotLib::AddLocalRotationQuat(Z_Param_SceneComponent,Z_Param_Out_Delta_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuatRotLib::execSetRelativeRotationQuat)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuatRotLib::SetRelativeRotationQuat(Z_Param_SceneComponent,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuatRotLib::execSetWorldRotationQuat)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuatRotLib::SetWorldRotationQuat(Z_Param_SceneComponent,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuatRotLib::execEuler_To_Quaternion)
	{
		P_GET_STRUCT(FRotator,Z_Param_Current_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuatRotLib::Euler_To_Quaternion(Z_Param_Current_Rotation);
		P_NATIVE_END;
	}
	void UQuatRotLib::StaticRegisterNativesUQuatRotLib()
	{
		UClass* Class = UQuatRotLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorLocalRotationQuat", &UQuatRotLib::execAddActorLocalRotationQuat },
			{ "AddActorLocalRotationQuatLerp", &UQuatRotLib::execAddActorLocalRotationQuatLerp },
			{ "AddLocalRotationQuat", &UQuatRotLib::execAddLocalRotationQuat },
			{ "Euler_To_Quaternion", &UQuatRotLib::execEuler_To_Quaternion },
			{ "SetActorRelativeRotationQuat", &UQuatRotLib::execSetActorRelativeRotationQuat },
			{ "SetActorWorldRotationQuat", &UQuatRotLib::execSetActorWorldRotationQuat },
			{ "SetRelativeRotationQuat", &UQuatRotLib::execSetRelativeRotationQuat },
			{ "SetWorldRotationQuat", &UQuatRotLib::execSetWorldRotationQuat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics
	{
		struct QuatRotLib_eventAddActorLocalRotationQuat_Parms
		{
			AActor* Actor;
			FQuat Delta_Rotation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventAddActorLocalRotationQuat_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation = { "Delta_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventAddActorLocalRotationQuat_Parms, Delta_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to add delta rotation to current local rotation of Actor\n" },
		{ "DisplayName", "Add Actor Local Rotation (Quaternion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "QuatRotLib.h" },
		{ "ToolTip", "Function to add delta rotation to current local rotation of Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuatRotLib, nullptr, "AddActorLocalRotationQuat", nullptr, nullptr, sizeof(QuatRotLib_eventAddActorLocalRotationQuat_Parms), Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics
	{
		struct QuatRotLib_eventAddActorLocalRotationQuatLerp_Parms
		{
			AActor* Actor;
			FQuat Current_Rotation;
			FQuat Delta_Rotation;
			float Alpha;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Current_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Current_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventAddActorLocalRotationQuatLerp_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Current_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Current_Rotation = { "Current_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventAddActorLocalRotationQuatLerp_Parms, Current_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Current_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Current_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Delta_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Delta_Rotation = { "Delta_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventAddActorLocalRotationQuatLerp_Parms, Delta_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Delta_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Delta_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Alpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventAddActorLocalRotationQuatLerp_Parms, Alpha), METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Alpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Current_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Delta_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to add delta rotation to current local rotation of Actor\n" },
		{ "DisplayName", "Add Actor Local Rotation Lerp (Quaternion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "QuatRotLib.h" },
		{ "ToolTip", "Function to add delta rotation to current local rotation of Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuatRotLib, nullptr, "AddActorLocalRotationQuatLerp", nullptr, nullptr, sizeof(QuatRotLib_eventAddActorLocalRotationQuatLerp_Parms), Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics
	{
		struct QuatRotLib_eventAddLocalRotationQuat_Parms
		{
			USceneComponent* SceneComponent;
			FQuat Delta_Rotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventAddLocalRotationQuat_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation = { "Delta_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventAddLocalRotationQuat_Parms, Delta_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to add delta rotation to current local rotation of scene component\n" },
		{ "DisplayName", "Add Local Rotation (Quaterion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "QuatRotLib.h" },
		{ "ToolTip", "Function to add delta rotation to current local rotation of scene component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuatRotLib, nullptr, "AddLocalRotationQuat", nullptr, nullptr, sizeof(QuatRotLib_eventAddLocalRotationQuat_Parms), Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics
	{
		struct QuatRotLib_eventEuler_To_Quaternion_Parms
		{
			FRotator Current_Rotation;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Current_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::NewProp_Current_Rotation = { "Current_Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventEuler_To_Quaternion_Parms, Current_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventEuler_To_Quaternion_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::NewProp_Current_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Convert Euler Rotations To Quaternions\n" },
		{ "DisplayName", "Euler To Quaternion" },
		{ "Keywords", "rotation, quaterion" },
		{ "ModuleRelativePath", "QuatRotLib.h" },
		{ "ToolTip", "Convert Euler Rotations To Quaternions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuatRotLib, nullptr, "Euler_To_Quaternion", nullptr, nullptr, sizeof(QuatRotLib_eventEuler_To_Quaternion_Parms), Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics
	{
		struct QuatRotLib_eventSetActorRelativeRotationQuat_Parms
		{
			AActor* Actor;
			FQuat Desired_Rotation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventSetActorRelativeRotationQuat_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventSetActorRelativeRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to set relative rotation of Actor to input quaternion rotation\n" },
		{ "DisplayName", "Set Actor Relative Rotation (Quaternion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "QuatRotLib.h" },
		{ "ToolTip", "Function to set relative rotation of Actor to input quaternion rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuatRotLib, nullptr, "SetActorRelativeRotationQuat", nullptr, nullptr, sizeof(QuatRotLib_eventSetActorRelativeRotationQuat_Parms), Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics
	{
		struct QuatRotLib_eventSetActorWorldRotationQuat_Parms
		{
			AActor* Actor;
			FQuat Desired_Rotation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventSetActorWorldRotationQuat_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventSetActorWorldRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to set world rotation of Actor to input quaternion rotation\n" },
		{ "DisplayName", "Set Actor World Rotation (Quaternion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "QuatRotLib.h" },
		{ "ToolTip", "Function to set world rotation of Actor to input quaternion rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuatRotLib, nullptr, "SetActorWorldRotationQuat", nullptr, nullptr, sizeof(QuatRotLib_eventSetActorWorldRotationQuat_Parms), Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics
	{
		struct QuatRotLib_eventSetRelativeRotationQuat_Parms
		{
			USceneComponent* SceneComponent;
			FQuat Desired_Rotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventSetRelativeRotationQuat_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventSetRelativeRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to set relative rotation of scene component to input quaternion rotation\n" },
		{ "DisplayName", "Set Relative Rotation (Quaterion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "QuatRotLib.h" },
		{ "ToolTip", "Function to set relative rotation of scene component to input quaternion rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuatRotLib, nullptr, "SetRelativeRotationQuat", nullptr, nullptr, sizeof(QuatRotLib_eventSetRelativeRotationQuat_Parms), Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics
	{
		struct QuatRotLib_eventSetWorldRotationQuat_Parms
		{
			USceneComponent* SceneComponent;
			FQuat Desired_Rotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventSetWorldRotationQuat_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuatRotLib_eventSetWorldRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to set world rotation of scene component to input quaternion rotation\n" },
		{ "DisplayName", "Set World Rotation (Quaterion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "QuatRotLib.h" },
		{ "ToolTip", "Function to set world rotation of scene component to input quaternion rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuatRotLib, nullptr, "SetWorldRotationQuat", nullptr, nullptr, sizeof(QuatRotLib_eventSetWorldRotationQuat_Parms), Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuatRotLib_NoRegister()
	{
		return UQuatRotLib::StaticClass();
	}
	struct Z_Construct_UClass_UQuatRotLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuatRotLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuatRotLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuat, "AddActorLocalRotationQuat" }, // 2564334365
		{ &Z_Construct_UFunction_UQuatRotLib_AddActorLocalRotationQuatLerp, "AddActorLocalRotationQuatLerp" }, // 3833313407
		{ &Z_Construct_UFunction_UQuatRotLib_AddLocalRotationQuat, "AddLocalRotationQuat" }, // 2634079707
		{ &Z_Construct_UFunction_UQuatRotLib_Euler_To_Quaternion, "Euler_To_Quaternion" }, // 3846341265
		{ &Z_Construct_UFunction_UQuatRotLib_SetActorRelativeRotationQuat, "SetActorRelativeRotationQuat" }, // 1526700918
		{ &Z_Construct_UFunction_UQuatRotLib_SetActorWorldRotationQuat, "SetActorWorldRotationQuat" }, // 234497095
		{ &Z_Construct_UFunction_UQuatRotLib_SetRelativeRotationQuat, "SetRelativeRotationQuat" }, // 3579068736
		{ &Z_Construct_UFunction_UQuatRotLib_SetWorldRotationQuat, "SetWorldRotationQuat" }, // 1084486308
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuatRotLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09This is a function library for Quaternion Rotations!\n */" },
		{ "IncludePath", "QuatRotLib.h" },
		{ "ModuleRelativePath", "QuatRotLib.h" },
		{ "ToolTip", "This is a function library for Quaternion Rotations!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuatRotLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuatRotLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuatRotLib_Statics::ClassParams = {
		&UQuatRotLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuatRotLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuatRotLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuatRotLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuatRotLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuatRotLib, 1561232852);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<UQuatRotLib>()
	{
		return UQuatRotLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuatRotLib(Z_Construct_UClass_UQuatRotLib, &UQuatRotLib::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("UQuatRotLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuatRotLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
