// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/HallwayStareScare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHallwayStareScare() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AHallwayStareScare_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AHallwayStareScare();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AScare();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void AHallwayStareScare::StaticRegisterNativesAHallwayStareScare()
	{
	}
	UClass* Z_Construct_UClass_AHallwayStareScare_NoRegister()
	{
		return AHallwayStareScare::StaticClass();
	}
	struct Z_Construct_UClass_AHallwayStareScare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHallwayStareScare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScare,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHallwayStareScare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HallwayStareScare.h" },
		{ "ModuleRelativePath", "HallwayStareScare.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHallwayStareScare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHallwayStareScare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHallwayStareScare_Statics::ClassParams = {
		&AHallwayStareScare::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHallwayStareScare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHallwayStareScare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHallwayStareScare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHallwayStareScare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHallwayStareScare, 645498271);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AHallwayStareScare>()
	{
		return AHallwayStareScare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHallwayStareScare(Z_Construct_UClass_AHallwayStareScare, &AHallwayStareScare::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AHallwayStareScare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHallwayStareScare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
