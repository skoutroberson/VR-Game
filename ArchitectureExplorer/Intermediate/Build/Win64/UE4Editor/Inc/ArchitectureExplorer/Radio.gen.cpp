// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Radio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadio() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARadio_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ARadio();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	static FName NAME_ARadio_TurnOff = FName(TEXT("TurnOff"));
	void ARadio::TurnOff()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARadio_TurnOff),NULL);
	}
	static FName NAME_ARadio_TurnOn = FName(TEXT("TurnOn"));
	void ARadio::TurnOn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARadio_TurnOn),NULL);
	}
	void ARadio::StaticRegisterNativesARadio()
	{
	}
	struct Z_Construct_UFunction_ARadio_TurnOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadio_TurnOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio" },
		{ "ModuleRelativePath", "Radio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadio_TurnOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadio, nullptr, "TurnOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadio_TurnOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadio_TurnOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadio_TurnOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARadio_TurnOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARadio_TurnOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARadio_TurnOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio" },
		{ "ModuleRelativePath", "Radio.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARadio_TurnOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadio, nullptr, "TurnOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARadio_TurnOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARadio_TurnOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARadio_TurnOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARadio_TurnOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARadio_NoRegister()
	{
		return ARadio::StaticClass();
	}
	struct Z_Construct_UClass_ARadio_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARadio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARadio_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARadio_TurnOff, "TurnOff" }, // 1524673603
		{ &Z_Construct_UFunction_ARadio_TurnOn, "TurnOn" }, // 3891953681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadio_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Radio.h" },
		{ "ModuleRelativePath", "Radio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARadio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARadio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARadio_Statics::ClassParams = {
		&ARadio::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARadio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARadio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARadio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARadio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARadio, 2215486333);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ARadio>()
	{
		return ARadio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARadio(Z_Construct_UClass_ARadio, &ARadio::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ARadio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
