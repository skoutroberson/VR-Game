// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/ArchitectureExplorerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchitectureExplorerGameModeBase() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AArchitectureExplorerGameModeBase_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AArchitectureExplorerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void AArchitectureExplorerGameModeBase::StaticRegisterNativesAArchitectureExplorerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AArchitectureExplorerGameModeBase_NoRegister()
	{
		return AArchitectureExplorerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArchitectureExplorerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArchitectureExplorerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArchitectureExplorerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ArchitectureExplorerGameModeBase.h" },
		{ "ModuleRelativePath", "ArchitectureExplorerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArchitectureExplorerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchitectureExplorerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArchitectureExplorerGameModeBase_Statics::ClassParams = {
		&AArchitectureExplorerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArchitectureExplorerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArchitectureExplorerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArchitectureExplorerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArchitectureExplorerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArchitectureExplorerGameModeBase, 1776021535);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AArchitectureExplorerGameModeBase>()
	{
		return AArchitectureExplorerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArchitectureExplorerGameModeBase(Z_Construct_UClass_AArchitectureExplorerGameModeBase, &AArchitectureExplorerGameModeBase::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AArchitectureExplorerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArchitectureExplorerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
