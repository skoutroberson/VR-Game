// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/DoorKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorKey() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADoorKey_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADoorKey();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AGrabbable();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	DEFINE_FUNCTION(ADoorKey::execDestroyKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyKey();
		P_NATIVE_END;
	}
	void ADoorKey::StaticRegisterNativesADoorKey()
	{
		UClass* Class = ADoorKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyKey", &ADoorKey::execDestroyKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoorKey_DestroyKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorKey_DestroyKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorKey_DestroyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKey, nullptr, "DestroyKey", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoorKey_DestroyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_DestroyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoorKey_DestroyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoorKey_DestroyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoorKey_NoRegister()
	{
		return ADoorKey::StaticClass();
	}
	struct Z_Construct_UClass_ADoorKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrabbable,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoorKey_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoorKey_DestroyKey, "DestroyKey" }, // 152644767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorKey_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DoorKey.h" },
		{ "ModuleRelativePath", "DoorKey.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorKey>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoorKey_Statics::ClassParams = {
		&ADoorKey::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADoorKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorKey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoorKey_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoorKey, 2210769471);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ADoorKey>()
	{
		return ADoorKey::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorKey(Z_Construct_UClass_ADoorKey, &ADoorKey::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ADoorKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
