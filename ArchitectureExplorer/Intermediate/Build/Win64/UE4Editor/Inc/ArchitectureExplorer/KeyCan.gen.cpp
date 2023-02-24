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
// End Cross Module References
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyCan_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKeyCan, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKeyCan_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyCan_Statics::NewProp_Mesh_MetaData)) };
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeyCan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_bHasKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCan_Statics::NewProp_bHitByPlayer,
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
	IMPLEMENT_CLASS(AKeyCan, 642647598);
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
