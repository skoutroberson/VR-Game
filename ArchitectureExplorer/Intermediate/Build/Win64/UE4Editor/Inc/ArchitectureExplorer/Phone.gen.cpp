// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Phone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhone() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APhone_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APhone();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AGrabbable();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	static FName NAME_APhone_AnswerPhone = FName(TEXT("AnswerPhone"));
	void APhone::AnswerPhone()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhone_AnswerPhone),NULL);
	}
	static FName NAME_APhone_CallPhone = FName(TEXT("CallPhone"));
	void APhone::CallPhone()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhone_CallPhone),NULL);
	}
	void APhone::StaticRegisterNativesAPhone()
	{
	}
	struct Z_Construct_UFunction_APhone_AnswerPhone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhone_AnswerPhone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Phone" },
		{ "ModuleRelativePath", "Phone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhone_AnswerPhone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhone, nullptr, "AnswerPhone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhone_AnswerPhone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhone_AnswerPhone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhone_AnswerPhone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhone_AnswerPhone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhone_CallPhone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhone_CallPhone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Phone" },
		{ "ModuleRelativePath", "Phone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhone_CallPhone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhone, nullptr, "CallPhone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhone_CallPhone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhone_CallPhone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhone_CallPhone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhone_CallPhone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APhone_NoRegister()
	{
		return APhone::StaticClass();
	}
	struct Z_Construct_UClass_APhone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrabbable,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhone_AnswerPhone, "AnswerPhone" }, // 3630583880
		{ &Z_Construct_UFunction_APhone_CallPhone, "CallPhone" }, // 3594050190
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Phone.h" },
		{ "ModuleRelativePath", "Phone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhone_Statics::ClassParams = {
		&APhone::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APhone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhone, 1500900086);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<APhone>()
	{
		return APhone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhone(Z_Construct_UClass_APhone, &APhone::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("APhone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
