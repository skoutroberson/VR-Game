// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/cPlayerHandAnimBP.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecPlayerHandAnimBP() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_UcPlayerHandAnimBP_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_UcPlayerHandAnimBP();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	DEFINE_FUNCTION(UcPlayerHandAnimBP::execSetGripValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_a_fGrip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripValue(Z_Param_a_fGrip);
		P_NATIVE_END;
	}
	void UcPlayerHandAnimBP::StaticRegisterNativesUcPlayerHandAnimBP()
	{
		UClass* Class = UcPlayerHandAnimBP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGripValue", &UcPlayerHandAnimBP::execSetGripValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics
	{
		struct cPlayerHandAnimBP_eventSetGripValue_Parms
		{
			float a_fGrip;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_a_fGrip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics::NewProp_a_fGrip = { "a_fGrip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(cPlayerHandAnimBP_eventSetGripValue_Parms, a_fGrip), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics::NewProp_a_fGrip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "cPlayerHandAnimBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcPlayerHandAnimBP, nullptr, "SetGripValue", nullptr, nullptr, sizeof(cPlayerHandAnimBP_eventSetGripValue_Parms), Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UcPlayerHandAnimBP_NoRegister()
	{
		return UcPlayerHandAnimBP::StaticClass();
	}
	struct Z_Construct_UClass_UcPlayerHandAnimBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fGripVal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fGripVal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UcPlayerHandAnimBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UcPlayerHandAnimBP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UcPlayerHandAnimBP_SetGripValue, "SetGripValue" }, // 1678119095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcPlayerHandAnimBP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "cPlayerHandAnimBP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "cPlayerHandAnimBP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcPlayerHandAnimBP_Statics::NewProp_m_fGripVal_MetaData[] = {
		{ "Category", "Blend" },
		{ "ModuleRelativePath", "cPlayerHandAnimBP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UcPlayerHandAnimBP_Statics::NewProp_m_fGripVal = { "m_fGripVal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UcPlayerHandAnimBP, m_fGripVal), METADATA_PARAMS(Z_Construct_UClass_UcPlayerHandAnimBP_Statics::NewProp_m_fGripVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UcPlayerHandAnimBP_Statics::NewProp_m_fGripVal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UcPlayerHandAnimBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UcPlayerHandAnimBP_Statics::NewProp_m_fGripVal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UcPlayerHandAnimBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcPlayerHandAnimBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UcPlayerHandAnimBP_Statics::ClassParams = {
		&UcPlayerHandAnimBP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UcPlayerHandAnimBP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UcPlayerHandAnimBP_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UcPlayerHandAnimBP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UcPlayerHandAnimBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UcPlayerHandAnimBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UcPlayerHandAnimBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UcPlayerHandAnimBP, 529756887);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<UcPlayerHandAnimBP>()
	{
		return UcPlayerHandAnimBP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UcPlayerHandAnimBP(Z_Construct_UClass_UcPlayerHandAnimBP, &UcPlayerHandAnimBP::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("UcPlayerHandAnimBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UcPlayerHandAnimBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
