// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Flashlight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashlight() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AFlashlight_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AFlashlight();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AGrabbable();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void AFlashlight::StaticRegisterNativesAFlashlight()
	{
	}
	UClass* Z_Construct_UClass_AFlashlight_NoRegister()
	{
		return AFlashlight::StaticClass();
	}
	struct Z_Construct_UClass_AFlashlight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPressAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonPressAudio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlashlight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrabbable,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Flashlight.h" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashlight, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_ButtonPressAudio_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_ButtonPressAudio = { "ButtonPressAudio", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashlight, ButtonPressAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_ButtonPressAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_ButtonPressAudio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlashlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_ButtonPressAudio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlashlight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlashlight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlashlight_Statics::ClassParams = {
		&AFlashlight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlashlight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlashlight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlashlight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlashlight, 767519436);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AFlashlight>()
	{
		return AFlashlight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlashlight(Z_Construct_UClass_AFlashlight, &AFlashlight::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AFlashlight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlashlight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
