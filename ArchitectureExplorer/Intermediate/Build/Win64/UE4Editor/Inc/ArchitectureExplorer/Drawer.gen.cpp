// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Drawer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawer() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADrawer_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADrawer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	void ADrawer::StaticRegisterNativesADrawer()
	{
	}
	UClass* Z_Construct_UClass_ADrawer_NoRegister()
	{
		return ADrawer::StaticClass();
	}
	struct Z_Construct_UClass_ADrawer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBeingGrabbed_MetaData[];
#endif
		static void NewProp_bBeingGrabbed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBeingGrabbed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlideSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSlideSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrawer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrawer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Drawer.h" },
		{ "ModuleRelativePath", "Drawer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrawer_Statics::NewProp_bBeingGrabbed_MetaData[] = {
		{ "Category", "Drawer" },
		{ "Comment", "// set by the HandController when it grabs the drawer\n" },
		{ "ModuleRelativePath", "Drawer.h" },
		{ "ToolTip", "set by the HandController when it grabs the drawer" },
	};
#endif
	void Z_Construct_UClass_ADrawer_Statics::NewProp_bBeingGrabbed_SetBit(void* Obj)
	{
		((ADrawer*)Obj)->bBeingGrabbed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADrawer_Statics::NewProp_bBeingGrabbed = { "bBeingGrabbed", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADrawer), &Z_Construct_UClass_ADrawer_Statics::NewProp_bBeingGrabbed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADrawer_Statics::NewProp_bBeingGrabbed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrawer_Statics::NewProp_bBeingGrabbed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrawer_Statics::NewProp_MaxSlideSize_MetaData[] = {
		{ "Category", "Drawer" },
		{ "Comment", "// needs to be set before BeginPlay()\n" },
		{ "ModuleRelativePath", "Drawer.h" },
		{ "ToolTip", "needs to be set before BeginPlay()" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrawer_Statics::NewProp_MaxSlideSize = { "MaxSlideSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADrawer, MaxSlideSize), METADATA_PARAMS(Z_Construct_UClass_ADrawer_Statics::NewProp_MaxSlideSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADrawer_Statics::NewProp_MaxSlideSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrawer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawer_Statics::NewProp_bBeingGrabbed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrawer_Statics::NewProp_MaxSlideSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrawer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrawer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADrawer_Statics::ClassParams = {
		&ADrawer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADrawer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADrawer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADrawer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADrawer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADrawer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADrawer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADrawer, 427246228);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ADrawer>()
	{
		return ADrawer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADrawer(Z_Construct_UClass_ADrawer, &ADrawer::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ADrawer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrawer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
