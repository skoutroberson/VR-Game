// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/StairsScare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStairsScare() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStairsScare_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AStairsScare();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AScare();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	DEFINE_FUNCTION(AStairsScare::execRotateMeshAlongSpline)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateMeshAlongSpline(Z_Param_Time);
		P_NATIVE_END;
	}
	void AStairsScare::StaticRegisterNativesAStairsScare()
	{
		UClass* Class = AStairsScare::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RotateMeshAlongSpline", &AStairsScare::execRotateMeshAlongSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics
	{
		struct StairsScare_eventRotateMeshAlongSpline_Parms
		{
			float Time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StairsScare_eventRotateMeshAlongSpline_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StairsScare.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStairsScare, nullptr, "RotateMeshAlongSpline", nullptr, nullptr, sizeof(StairsScare_eventRotateMeshAlongSpline_Parms), Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStairsScare_NoRegister()
	{
		return AStairsScare::StaticClass();
	}
	struct Z_Construct_UClass_AStairsScare_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStairsScare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScare,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStairsScare_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStairsScare_RotateMeshAlongSpline, "RotateMeshAlongSpline" }, // 1072308883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStairsScare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StairsScare.h" },
		{ "ModuleRelativePath", "StairsScare.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStairsScare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStairsScare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStairsScare_Statics::ClassParams = {
		&AStairsScare::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStairsScare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStairsScare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStairsScare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStairsScare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStairsScare, 4017488567);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AStairsScare>()
	{
		return AStairsScare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStairsScare(Z_Construct_UClass_AStairsScare, &AStairsScare::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AStairsScare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStairsScare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
