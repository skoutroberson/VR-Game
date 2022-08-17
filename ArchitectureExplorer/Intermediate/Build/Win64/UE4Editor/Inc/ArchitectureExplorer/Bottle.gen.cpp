// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Bottle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBottle() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ABottle_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ABottle();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AGrabbable();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABottle::execNotifyErrolCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyErrolCharacter();
		P_NATIVE_END;
	}
	void ABottle::StaticRegisterNativesABottle()
	{
		UClass* Class = ABottle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyErrolCharacter", &ABottle::execNotifyErrolCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABottle_NotifyErrolCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABottle_NotifyErrolCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ErrolCharacter" },
		{ "ModuleRelativePath", "Bottle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABottle_NotifyErrolCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABottle, nullptr, "NotifyErrolCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABottle_NotifyErrolCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABottle_NotifyErrolCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABottle_NotifyErrolCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABottle_NotifyErrolCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABottle_NoRegister()
	{
		return ABottle::StaticClass();
	}
	struct Z_Construct_UClass_ABottle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopSimulatingPhysics_MetaData[];
#endif
		static void NewProp_bStopSimulatingPhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopSimulatingPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AHC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AHC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABottle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrabbable,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABottle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABottle_NotifyErrolCharacter, "NotifyErrolCharacter" }, // 1868271330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABottle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Bottle.h" },
		{ "ModuleRelativePath", "Bottle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABottle_Statics::NewProp_bStopSimulatingPhysics_MetaData[] = {
		{ "Category", "Bottle" },
		{ "ModuleRelativePath", "Bottle.h" },
	};
#endif
	void Z_Construct_UClass_ABottle_Statics::NewProp_bStopSimulatingPhysics_SetBit(void* Obj)
	{
		((ABottle*)Obj)->bStopSimulatingPhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABottle_Statics::NewProp_bStopSimulatingPhysics = { "bStopSimulatingPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABottle), &Z_Construct_UClass_ABottle_Statics::NewProp_bStopSimulatingPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABottle_Statics::NewProp_bStopSimulatingPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABottle_Statics::NewProp_bStopSimulatingPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABottle_Statics::NewProp_AHC_MetaData[] = {
		{ "Category", "Bottle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bottle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABottle_Statics::NewProp_AHC = { "AHC", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABottle, AHC), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABottle_Statics::NewProp_AHC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABottle_Statics::NewProp_AHC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABottle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABottle_Statics::NewProp_bStopSimulatingPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABottle_Statics::NewProp_AHC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABottle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABottle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABottle_Statics::ClassParams = {
		&ABottle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABottle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABottle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABottle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABottle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABottle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABottle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABottle, 1575715964);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ABottle>()
	{
		return ABottle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABottle(Z_Construct_UClass_ABottle, &ABottle::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ABottle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABottle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
