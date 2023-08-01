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
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ALightManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFlashlight::execPressButton)
	{
		P_GET_UBOOL(Z_Param_bButtonAudio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PressButton(Z_Param_bButtonAudio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlashlight::execTurnOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlashlight::execTurnOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnOn();
		P_NATIVE_END;
	}
	static FName NAME_AFlashlight_PlayButtonPressAudio = FName(TEXT("PlayButtonPressAudio"));
	void AFlashlight::PlayButtonPressAudio()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFlashlight_PlayButtonPressAudio),NULL);
	}
	static FName NAME_AFlashlight_UpdateLightVolumetrics = FName(TEXT("UpdateLightVolumetrics"));
	void AFlashlight::UpdateLightVolumetrics(bool bLightIsOn)
	{
		Flashlight_eventUpdateLightVolumetrics_Parms Parms;
		Parms.bLightIsOn=bLightIsOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFlashlight_UpdateLightVolumetrics),&Parms);
	}
	void AFlashlight::StaticRegisterNativesAFlashlight()
	{
		UClass* Class = AFlashlight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PressButton", &AFlashlight::execPressButton },
			{ "TurnOff", &AFlashlight::execTurnOff },
			{ "TurnOn", &AFlashlight::execTurnOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlashlight_PlayButtonPressAudio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlashlight_PlayButtonPressAudio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashlight_PlayButtonPressAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashlight, nullptr, "PlayButtonPressAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlashlight_PlayButtonPressAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashlight_PlayButtonPressAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlashlight_PlayButtonPressAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlashlight_PlayButtonPressAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlashlight_PressButton_Statics
	{
		struct Flashlight_eventPressButton_Parms
		{
			bool bButtonAudio;
		};
		static void NewProp_bButtonAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bButtonAudio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFlashlight_PressButton_Statics::NewProp_bButtonAudio_SetBit(void* Obj)
	{
		((Flashlight_eventPressButton_Parms*)Obj)->bButtonAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlashlight_PressButton_Statics::NewProp_bButtonAudio = { "bButtonAudio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Flashlight_eventPressButton_Parms), &Z_Construct_UFunction_AFlashlight_PressButton_Statics::NewProp_bButtonAudio_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlashlight_PressButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlashlight_PressButton_Statics::NewProp_bButtonAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlashlight_PressButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashlight_PressButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashlight, nullptr, "PressButton", nullptr, nullptr, sizeof(Flashlight_eventPressButton_Parms), Z_Construct_UFunction_AFlashlight_PressButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashlight_PressButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlashlight_PressButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashlight_PressButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlashlight_PressButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlashlight_PressButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlashlight_TurnOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlashlight_TurnOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashlight_TurnOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashlight, nullptr, "TurnOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlashlight_TurnOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashlight_TurnOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlashlight_TurnOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlashlight_TurnOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlashlight_TurnOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlashlight_TurnOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashlight_TurnOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashlight, nullptr, "TurnOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlashlight_TurnOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashlight_TurnOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlashlight_TurnOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlashlight_TurnOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics
	{
		static void NewProp_bLightIsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLightIsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::NewProp_bLightIsOn_SetBit(void* Obj)
	{
		((Flashlight_eventUpdateLightVolumetrics_Parms*)Obj)->bLightIsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::NewProp_bLightIsOn = { "bLightIsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Flashlight_eventUpdateLightVolumetrics_Parms), &Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::NewProp_bLightIsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::NewProp_bLightIsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlashlight, nullptr, "UpdateLightVolumetrics", nullptr, nullptr, sizeof(Flashlight_eventUpdateLightVolumetrics_Parms), Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlashlight_NoRegister()
	{
		return AFlashlight::StaticClass();
	}
	struct Z_Construct_UClass_AFlashlight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOn_MetaData[];
#endif
		static void NewProp_bOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPressAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonPressAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpotlightRevealEnabled_MetaData[];
#endif
		static void NewProp_bSpotlightRevealEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpotlightRevealEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlashlight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGrabbable,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlashlight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlashlight_PlayButtonPressAudio, "PlayButtonPressAudio" }, // 3221636658
		{ &Z_Construct_UFunction_AFlashlight_PressButton, "PressButton" }, // 363746436
		{ &Z_Construct_UFunction_AFlashlight_TurnOff, "TurnOff" }, // 2755678298
		{ &Z_Construct_UFunction_AFlashlight_TurnOn, "TurnOn" }, // 4285305367
		{ &Z_Construct_UFunction_AFlashlight_UpdateLightVolumetrics, "UpdateLightVolumetrics" }, // 3072964125
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Flashlight.h" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_bOn_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	void Z_Construct_UClass_AFlashlight_Statics::NewProp_bOn_SetBit(void* Obj)
	{
		((AFlashlight*)Obj)->bOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_bOn = { "bOn", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlashlight), &Z_Construct_UClass_AFlashlight_Statics::NewProp_bOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_bOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_bOn_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_bSpotlightRevealEnabled_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	void Z_Construct_UClass_AFlashlight_Statics::NewProp_bSpotlightRevealEnabled_SetBit(void* Obj)
	{
		((AFlashlight*)Obj)->bSpotlightRevealEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_bSpotlightRevealEnabled = { "bSpotlightRevealEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFlashlight), &Z_Construct_UClass_AFlashlight_Statics::NewProp_bSpotlightRevealEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_bSpotlightRevealEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_bSpotlightRevealEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlashlight_Statics::NewProp_LM_MetaData[] = {
		{ "Category", "Flashlight" },
		{ "ModuleRelativePath", "Flashlight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlashlight_Statics::NewProp_LM = { "LM", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlashlight, LM), Z_Construct_UClass_ALightManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlashlight_Statics::NewProp_LM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlashlight_Statics::NewProp_LM_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlashlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_bOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_ButtonPressAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_bSpotlightRevealEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlashlight_Statics::NewProp_LM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlashlight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlashlight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlashlight_Statics::ClassParams = {
		&AFlashlight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlashlight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AFlashlight, 1931156341);
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
