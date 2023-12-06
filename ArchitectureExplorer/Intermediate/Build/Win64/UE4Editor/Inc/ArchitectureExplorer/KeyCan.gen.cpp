// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/KeyCan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyCan() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AKeyCan_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AKeyCan();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADoorKey_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(AKeyCan::execDetachKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetachKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKeyCan::execAttachKey)
	{
		P_GET_OBJECT(ADoorKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachKey(Z_Param_Key);
		P_NATIVE_END;
	}
	void AKeyCan::StaticRegisterNativesAKeyCan()
	{
		UClass* Class = AKeyCan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachKey", &AKeyCan::execAttachKey },
			{ "DetachKey", &AKeyCan::execDetachKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKeyCan_AttachKey_Statics
	{
		struct KeyCan_eventAttachKey_Parms
		{
			ADoorKey* Key;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyCan_AttachKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KeyCan_eventAttachKey_Parms, Key), Z_Construct_UClass_ADoorKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKeyCan_AttachKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyCan_AttachKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyCan_AttachKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyCan_AttachKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyCan, nullptr, "AttachKey", nullptr, nullptr, sizeof(KeyCan_eventAttachKey_Parms), Z_Construct_UFunction_AKeyCan_AttachKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyCan_AttachKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKeyCan_AttachKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyCan_AttachKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKeyCan_AttachKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKeyCan_AttachKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKeyCan_DetachKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyCan_DetachKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyCan_DetachKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyCan, nullptr, "DetachKey", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKeyCan_DetachKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKeyCan_DetachKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKeyCan_DetachKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKeyCan_DetachKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKeyCan_NoRegister()
	{
		return AKeyCan::StaticClass();
	}
	struct Z_Construct_UClass_AKeyCan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasKey_MetaData[];
#endif
		static void NewProp_bHasKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHitByPlayer_MetaData[];
#endif
		static void NewProp_bHitByPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHitByPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckZ_MetaData[];
#endif
		static void NewProp_bCheckZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndZDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndZDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKeyCan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKeyCan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKeyCan_AttachKey, "AttachKey" }, // 2323872718
		{ &Z_Construct_UFunction_AKeyCan_DetachKey, "DetachKey" }, // 3951620701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCan_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KeyCan.h" },
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCan_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "KeyCan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyCan_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeyCan, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCan_Statics::NewProp_bHasKey_MetaData[] = {
		{ "Category", "KeyCan" },
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	void Z_Construct_UClass_AKeyCan_Statics::NewProp_bHasKey_SetBit(void* Obj)
	{
		((AKeyCan*)Obj)->bHasKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKeyCan_Statics::NewProp_bHasKey = { "bHasKey", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKeyCan), &Z_Construct_UClass_AKeyCan_Statics::NewProp_bHasKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::NewProp_bHasKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::NewProp_bHasKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCan_Statics::NewProp_bHitByPlayer_MetaData[] = {
		{ "Category", "KeyCan" },
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	void Z_Construct_UClass_AKeyCan_Statics::NewProp_bHitByPlayer_SetBit(void* Obj)
	{
		((AKeyCan*)Obj)->bHitByPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKeyCan_Statics::NewProp_bHitByPlayer = { "bHitByPlayer", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKeyCan), &Z_Construct_UClass_AKeyCan_Statics::NewProp_bHitByPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::NewProp_bHitByPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::NewProp_bHitByPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCan_Statics::NewProp_StartZ_MetaData[] = {
		{ "Category", "KeyCan" },
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKeyCan_Statics::NewProp_StartZ = { "StartZ", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeyCan, StartZ), METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::NewProp_StartZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::NewProp_StartZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCan_Statics::NewProp_bCheckZ_MetaData[] = {
		{ "Category", "KeyCan" },
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	void Z_Construct_UClass_AKeyCan_Statics::NewProp_bCheckZ_SetBit(void* Obj)
	{
		((AKeyCan*)Obj)->bCheckZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKeyCan_Statics::NewProp_bCheckZ = { "bCheckZ", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKeyCan), &Z_Construct_UClass_AKeyCan_Statics::NewProp_bCheckZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::NewProp_bCheckZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::NewProp_bCheckZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCan_Statics::NewProp_AttachedKey_MetaData[] = {
		{ "Category", "KeyCan" },
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyCan_Statics::NewProp_AttachedKey = { "AttachedKey", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeyCan, AttachedKey), Z_Construct_UClass_ADoorKey_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::NewProp_AttachedKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::NewProp_AttachedKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCan_Statics::NewProp_EndZDistance_MetaData[] = {
		{ "Category", "KeyCan" },
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKeyCan_Statics::NewProp_EndZDistance = { "EndZDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeyCan, EndZDistance), METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::NewProp_EndZDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::NewProp_EndZDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCan_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "KeyCan" },
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKeyCan_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeyCan, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCan_Statics::NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "KeyCan" },
		{ "ModuleRelativePath", "KeyCan.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKeyCan_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeyCan, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::NewProp_SpawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::NewProp_SpawnRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeyCan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_bHasKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_bHitByPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_StartZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_bCheckZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_AttachedKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_EndZDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_SpawnRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKeyCan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyCan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKeyCan_Statics::ClassParams = {
		&AKeyCan::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKeyCan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKeyCan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKeyCan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKeyCan, 593298177);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AKeyCan>()
	{
		return AKeyCan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKeyCan(Z_Construct_UClass_AKeyCan, &AKeyCan::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AKeyCan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyCan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
