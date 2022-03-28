// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Roach.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoach() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARoach_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARoach();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ARoach::StaticRegisterNativesARoach()
	{
	}
	UClass* Z_Construct_UClass_ARoach_NoRegister()
	{
		return ARoach::StaticClass();
	}
	struct Z_Construct_UClass_ARoach_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoachRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoachRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoach_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Roach.h" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot_MetaData[] = {
		{ "Category", "Roach" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Roach.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot = { "RoachRoot", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARoach, RoachRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoach_Statics::NewProp_RoachRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoach_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoach>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoach_Statics::ClassParams = {
		&ARoach::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoach_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoach_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoach_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoach()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoach_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoach, 3729100334);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ARoach>()
	{
		return ARoach::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoach(Z_Construct_UClass_ARoach, &ARoach::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ARoach"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoach);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
