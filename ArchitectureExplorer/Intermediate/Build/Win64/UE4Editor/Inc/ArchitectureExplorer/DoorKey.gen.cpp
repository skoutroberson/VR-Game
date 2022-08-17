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
	void ADoorKey::StaticRegisterNativesADoorKey()
	{
	}
	UClass* Z_Construct_UClass_ADoorKey_NoRegister()
	{
		return ADoorKey::StaticClass();
	}
	struct Z_Construct_UClass_ADoorKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ADoorKey, 1780172489);
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
