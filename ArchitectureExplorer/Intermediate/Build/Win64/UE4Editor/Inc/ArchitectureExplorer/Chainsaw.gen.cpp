// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Chainsaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsaw() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AChainsaw_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AChainsaw();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AGrabbable();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AChainsaw::execBladeBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_FirstComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BladeBeginOverlap(Z_Param_FirstComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_AChainsaw_PressTrigger = FName(TEXT("PressTrigger"));
	void AChainsaw::PressTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_AChainsaw_PressTrigger),NULL);
	}
	static FName NAME_AChainsaw_ReleaseTrigger = FName(TEXT("ReleaseTrigger"));
	void AChainsaw::ReleaseTrigger()
	{
		ProcessEvent(FindFunctionChecked(NAME_AChainsaw_ReleaseTrigger),NULL);
	}
	void AChainsaw::StaticRegisterNativesAChainsaw()
	{
		UClass* Class = AChainsaw::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BladeBeginOverlap", &AChainsaw::execBladeBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics
	{
		struct Chainsaw_eventBladeBeginOverlap_Parms
		{
			UPrimitiveComponent* FirstComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_FirstComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_FirstComponent = { "FirstComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chainsaw_eventBladeBeginOverlap_Parms, FirstComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_FirstComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_FirstComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chainsaw_eventBladeBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chainsaw_eventBladeBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chainsaw_eventBladeBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Chainsaw_eventBladeBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Chainsaw_eventBladeBeginOverlap_Parms), &Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Chainsaw_eventBladeBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_FirstComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChainsaw, nullptr, "BladeBeginOverlap", nullptr, nullptr, sizeof(Chainsaw_eventBladeBeginOverlap_Parms), Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChainsaw_BladeBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChainsaw_BladeBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChainsaw_PressTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_PressTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChainsaw_PressTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChainsaw, nullptr, "PressTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_PressTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_PressTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChainsaw_PressTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChainsaw_PressTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChainsaw, nullptr, "ReleaseTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChainsaw_ReleaseTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChainsaw_ReleaseTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChainsaw_NoRegister()
	{
		return AChainsaw::StaticClass();
	}
	struct Z_Construct_UClass_AChainsaw_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChainsaw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrabbable,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChainsaw_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChainsaw_BladeBeginOverlap, "BladeBeginOverlap" }, // 3480068420
		{ &Z_Construct_UFunction_AChainsaw_PressTrigger, "PressTrigger" }, // 2284209483
		{ &Z_Construct_UFunction_AChainsaw_ReleaseTrigger, "ReleaseTrigger" }, // 2469482063
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsaw_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Chainsaw.h" },
		{ "ModuleRelativePath", "Chainsaw.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChainsaw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChainsaw>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChainsaw_Statics::ClassParams = {
		&AChainsaw::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChainsaw_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsaw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChainsaw()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChainsaw_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChainsaw, 3377824636);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AChainsaw>()
	{
		return AChainsaw::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChainsaw(Z_Construct_UClass_AChainsaw, &AChainsaw::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AChainsaw"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChainsaw);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
