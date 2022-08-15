// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Scare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScare() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AScare_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AScare();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
// End Cross Module References
	DEFINE_FUNCTION(AScare::execEndScare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndScare_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AScare::execStartScare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartScare_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AScare_EndScare = FName(TEXT("EndScare"));
	void AScare::EndScare()
	{
		ProcessEvent(FindFunctionChecked(NAME_AScare_EndScare),NULL);
	}
	static FName NAME_AScare_StartScare = FName(TEXT("StartScare"));
	void AScare::StartScare()
	{
		ProcessEvent(FindFunctionChecked(NAME_AScare_StartScare),NULL);
	}
	void AScare::StaticRegisterNativesAScare()
	{
		UClass* Class = AScare::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndScare", &AScare::execEndScare },
			{ "StartScare", &AScare::execStartScare },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScare_EndScare_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScare_EndScare_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scare" },
		{ "ModuleRelativePath", "Scare.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScare_EndScare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScare, nullptr, "EndScare", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScare_EndScare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScare_EndScare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScare_EndScare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScare_EndScare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AScare_StartScare_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScare_StartScare_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scare" },
		{ "ModuleRelativePath", "Scare.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScare_StartScare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScare, nullptr, "StartScare", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScare_StartScare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScare_StartScare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScare_StartScare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScare_StartScare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AScare_NoRegister()
	{
		return AScare::StaticClass();
	}
	struct Z_Construct_UClass_AScare_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AScare_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScare_EndScare, "EndScare" }, // 2875222965
		{ &Z_Construct_UFunction_AScare_StartScare, "StartScare" }, // 1354571383
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScare_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Scare.h" },
		{ "ModuleRelativePath", "Scare.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScare_Statics::ClassParams = {
		&AScare::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AScare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScare, 547956690);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AScare>()
	{
		return AScare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScare(Z_Construct_UClass_AScare, &AScare::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AScare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
