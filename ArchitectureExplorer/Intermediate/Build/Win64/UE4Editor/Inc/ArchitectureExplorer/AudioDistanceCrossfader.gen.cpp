// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/AudioDistanceCrossfader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioDistanceCrossfader() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AAudioDistanceCrossfader_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AAudioDistanceCrossfader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAudioDistanceCrossfader::execShouldStopCrossfading)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Col);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldStopCrossfading(Z_Param_Col);
		P_NATIVE_END;
	}
	static FName NAME_AAudioDistanceCrossfader_InitializeAudioArrays = FName(TEXT("InitializeAudioArrays"));
	void AAudioDistanceCrossfader::InitializeAudioArrays()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAudioDistanceCrossfader_InitializeAudioArrays),NULL);
	}
	void AAudioDistanceCrossfader::StaticRegisterNativesAAudioDistanceCrossfader()
	{
		UClass* Class = AAudioDistanceCrossfader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShouldStopCrossfading", &AAudioDistanceCrossfader::execShouldStopCrossfading },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAudioDistanceCrossfader_InitializeAudioArrays_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioDistanceCrossfader_InitializeAudioArrays_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// add the audio components to AudioA and AudioB\n" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
		{ "ToolTip", "add the audio components to AudioA and AudioB" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioDistanceCrossfader_InitializeAudioArrays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioDistanceCrossfader, nullptr, "InitializeAudioArrays", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioDistanceCrossfader_InitializeAudioArrays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioDistanceCrossfader_InitializeAudioArrays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioDistanceCrossfader_InitializeAudioArrays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioDistanceCrossfader_InitializeAudioArrays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics
	{
		struct AudioDistanceCrossfader_eventShouldStopCrossfading_Parms
		{
			USceneComponent* Col;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Col_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Col;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::NewProp_Col_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::NewProp_Col = { "Col", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioDistanceCrossfader_eventShouldStopCrossfading_Parms, Col), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::NewProp_Col_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::NewProp_Col_MetaData)) };
	void Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioDistanceCrossfader_eventShouldStopCrossfading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioDistanceCrossfader_eventShouldStopCrossfading_Parms), &Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::NewProp_Col,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioDistanceCrossfader, nullptr, "ShouldStopCrossfading", nullptr, nullptr, sizeof(AudioDistanceCrossfader_eventShouldStopCrossfading_Parms), Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAudioDistanceCrossfader_NoRegister()
	{
		return AAudioDistanceCrossfader::StaticClass();
	}
	struct Z_Construct_UClass_AAudioDistanceCrossfader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADCRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ADCRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ACol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ACol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BCol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BCol;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioA_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioA_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioA;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioB_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioB_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeA_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeBMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeBMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAudioDistanceCrossfader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAudioDistanceCrossfader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAudioDistanceCrossfader_InitializeAudioArrays, "InitializeAudioArrays" }, // 1381440835
		{ &Z_Construct_UFunction_AAudioDistanceCrossfader_ShouldStopCrossfading, "ShouldStopCrossfading" }, // 296378777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// The player should never spawn colliding with ACol or BCol.\n" },
		{ "IncludePath", "AudioDistanceCrossfader.h" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
		{ "ToolTip", "The player should never spawn colliding with ACol or BCol." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_ADCRoot_MetaData[] = {
		{ "Category", "AudioDistanceCrossfader" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_ADCRoot = { "ADCRoot", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioDistanceCrossfader, ADCRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_ADCRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_ADCRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_ACol_MetaData[] = {
		{ "Category", "AudioDistanceCrossfader" },
		{ "Comment", "/**\n\x09* THE COLLISIONS MUST BE PLACED IN A WAY THAT THE PLAYER CAN ONLY ENTER/EXIT THEM PARRALEL TO THE UP(Z) VECTOR.\n\x09* IF THE COLLISION IS VERY WIDE, YOU NEED TO MAKE SURE TO MAKE THE COLLISION LONGER SO THAT A DOT PRODUCT CAN TELL WHAT SIDE OF THE Z AXIS YOU ARE ON WHEN YOU END OVERLAP.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
		{ "ToolTip", "THE COLLISIONS MUST BE PLACED IN A WAY THAT THE PLAYER CAN ONLY ENTER/EXIT THEM PARRALEL TO THE UP(Z) VECTOR.\nIF THE COLLISION IS VERY WIDE, YOU NEED TO MAKE SURE TO MAKE THE COLLISION LONGER SO THAT A DOT PRODUCT CAN TELL WHAT SIDE OF THE Z AXIS YOU ARE ON WHEN YOU END OVERLAP." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_ACol = { "ACol", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioDistanceCrossfader, ACol), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_ACol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_ACol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_BCol_MetaData[] = {
		{ "Category", "AudioDistanceCrossfader" },
		{ "Comment", "/**\n\x09* THE COLLISIONS MUST BE PLACED IN A WAY THAT THE PLAYER CAN ONLY ENTER/EXIT THEM PARRALEL TO THE UP(Z) VECTOR.\n\x09* IF THE COLLISION IS VERY WIDE, YOU NEED TO MAKE SURE TO MAKE THE COLLISION LONGER SO THAT A DOT PRODUCT CAN TELL WHAT SIDE OF THE Z AXIS YOU ARE ON WHEN YOU END OVERLAP.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
		{ "ToolTip", "THE COLLISIONS MUST BE PLACED IN A WAY THAT THE PLAYER CAN ONLY ENTER/EXIT THEM PARRALEL TO THE UP(Z) VECTOR.\nIF THE COLLISION IS VERY WIDE, YOU NEED TO MAKE SURE TO MAKE THE COLLISION LONGER SO THAT A DOT PRODUCT CAN TELL WHAT SIDE OF THE Z AXIS YOU ARE ON WHEN YOU END OVERLAP." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_BCol = { "BCol", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioDistanceCrossfader, BCol), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_BCol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_BCol_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioA_Inner = { "AudioA", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioA_MetaData[] = {
		{ "Category", "AudioDistanceCrossfader" },
		{ "Comment", "// needs to be set in blueprint by SetAAudio event\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
		{ "ToolTip", "needs to be set in blueprint by SetAAudio event" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioA = { "AudioA", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioDistanceCrossfader, AudioA), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioA_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioB_Inner = { "AudioB", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioB_MetaData[] = {
		{ "Category", "AudioDistanceCrossfader" },
		{ "Comment", "// needs to be set in blueprint by SetBAudio event\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
		{ "ToolTip", "needs to be set in blueprint by SetBAudio event" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioB = { "AudioB", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioDistanceCrossfader, AudioB), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeA_MetaData[] = {
		{ "Category", "AudioDistanceCrossfader" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeA = { "VolumeA", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioDistanceCrossfader, VolumeA), METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeB_MetaData[] = {
		{ "Category", "AudioDistanceCrossfader" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeB = { "VolumeB", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioDistanceCrossfader, VolumeB), METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeBMultiplier_MetaData[] = {
		{ "Category", "AudioDistanceCrossfader" },
		{ "Comment", "// used if we want to be able to change the crossfade volume (im using for fading saw rooms choir audio when the player finds saw pieces.\n" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
		{ "ToolTip", "used if we want to be able to change the crossfade volume (im using for fading saw rooms choir audio when the player finds saw pieces." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeBMultiplier = { "VolumeBMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioDistanceCrossfader, VolumeBMultiplier), METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeBMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeBMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "AudioDistanceCrossfader" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioDistanceCrossfader, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_CameraCollision_MetaData[] = {
		{ "Category", "AudioDistanceCrossfader" },
		{ "Comment", "// Player camera collision. Represents the player's head.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AudioDistanceCrossfader.h" },
		{ "ToolTip", "Player camera collision. Represents the player's head." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_CameraCollision = { "CameraCollision", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAudioDistanceCrossfader, CameraCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_CameraCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_CameraCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAudioDistanceCrossfader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_ADCRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_ACol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_BCol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioA_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioB_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_AudioB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_VolumeBMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_InterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioDistanceCrossfader_Statics::NewProp_CameraCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAudioDistanceCrossfader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioDistanceCrossfader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAudioDistanceCrossfader_Statics::ClassParams = {
		&AAudioDistanceCrossfader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAudioDistanceCrossfader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAudioDistanceCrossfader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAudioDistanceCrossfader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAudioDistanceCrossfader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAudioDistanceCrossfader, 2777468210);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AAudioDistanceCrossfader>()
	{
		return AAudioDistanceCrossfader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAudioDistanceCrossfader(Z_Construct_UClass_AAudioDistanceCrossfader, &AAudioDistanceCrossfader::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AAudioDistanceCrossfader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioDistanceCrossfader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
