// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Grabbable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabbable() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AGrabbable_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AGrabbable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AGrabbable::StaticRegisterNativesAGrabbable()
	{
	}
	UClass* Z_Construct_UClass_AGrabbable_NoRegister()
	{
		return AGrabbable::StaticClass();
	}
	struct Z_Construct_UClass_AGrabbable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemGripSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemGripSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBeingHeld_MetaData[];
#endif
		static void NewProp_bBeingHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBeingHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeftHandHeld_MetaData[];
#endif
		static void NewProp_bLeftHandHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeftHandHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRightHandHeld_MetaData[];
#endif
		static void NewProp_bRightHandHeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRightHandHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwoHanded_MetaData[];
#endif
		static void NewProp_bTwoHanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwoHanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpToMC_MetaData[];
#endif
		static void NewProp_bInterpToMC_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpToMC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateTwoHand_MetaData[];
#endif
		static void NewProp_bRotateTwoHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateTwoHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateOneHand_MetaData[];
#endif
		static void NewProp_bRotateOneHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateOneHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeOneHanded_MetaData[];
#endif
		static void NewProp_bCanBeOneHanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeOneHanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllingMC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllingMC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonControllingMC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonControllingMC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bControllingMCLeft_MetaData[];
#endif
		static void NewProp_bControllingMCLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bControllingMCLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllingHandHold_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllingHandHold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrabbable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grabbable.h" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_ItemGripSize_MetaData[] = {
		{ "Category", "Grabbable" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_ItemGripSize = { "ItemGripSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrabbable, ItemGripSize), METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_ItemGripSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_ItemGripSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_ItemWeight_MetaData[] = {
		{ "Category", "Grabbable" },
		{ "Comment", "//FRotator ItemRotation = FRotator(0, -75.f, -85.f);\n//FVector ItemLocation = FVector(4.f, 11.f, -3.5f);\n" },
		{ "ModuleRelativePath", "Grabbable.h" },
		{ "ToolTip", "FRotator ItemRotation = FRotator(0, -75.f, -85.f);\nFVector ItemLocation = FVector(4.f, 11.f, -3.5f);" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrabbable, ItemWeight), METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_ItemWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_ItemWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_bBeingHeld_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "Comment", "// For two hand item grabbing.\n" },
		{ "ModuleRelativePath", "Grabbable.h" },
		{ "ToolTip", "For two hand item grabbing." },
	};
#endif
	void Z_Construct_UClass_AGrabbable_Statics::NewProp_bBeingHeld_SetBit(void* Obj)
	{
		((AGrabbable*)Obj)->bBeingHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_bBeingHeld = { "bBeingHeld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrabbable), &Z_Construct_UClass_AGrabbable_Statics::NewProp_bBeingHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_bBeingHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_bBeingHeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_bLeftHandHeld_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	void Z_Construct_UClass_AGrabbable_Statics::NewProp_bLeftHandHeld_SetBit(void* Obj)
	{
		((AGrabbable*)Obj)->bLeftHandHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_bLeftHandHeld = { "bLeftHandHeld", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrabbable), &Z_Construct_UClass_AGrabbable_Statics::NewProp_bLeftHandHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_bLeftHandHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_bLeftHandHeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_bRightHandHeld_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	void Z_Construct_UClass_AGrabbable_Statics::NewProp_bRightHandHeld_SetBit(void* Obj)
	{
		((AGrabbable*)Obj)->bRightHandHeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_bRightHandHeld = { "bRightHandHeld", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrabbable), &Z_Construct_UClass_AGrabbable_Statics::NewProp_bRightHandHeld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_bRightHandHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_bRightHandHeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_bTwoHanded_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	void Z_Construct_UClass_AGrabbable_Statics::NewProp_bTwoHanded_SetBit(void* Obj)
	{
		((AGrabbable*)Obj)->bTwoHanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_bTwoHanded = { "bTwoHanded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrabbable), &Z_Construct_UClass_AGrabbable_Statics::NewProp_bTwoHanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_bTwoHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_bTwoHanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_bInterpToMC_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	void Z_Construct_UClass_AGrabbable_Statics::NewProp_bInterpToMC_SetBit(void* Obj)
	{
		((AGrabbable*)Obj)->bInterpToMC = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_bInterpToMC = { "bInterpToMC", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrabbable), &Z_Construct_UClass_AGrabbable_Statics::NewProp_bInterpToMC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_bInterpToMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_bInterpToMC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateTwoHand_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	void Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateTwoHand_SetBit(void* Obj)
	{
		((AGrabbable*)Obj)->bRotateTwoHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateTwoHand = { "bRotateTwoHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrabbable), &Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateTwoHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateTwoHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateTwoHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateOneHand_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	void Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateOneHand_SetBit(void* Obj)
	{
		((AGrabbable*)Obj)->bRotateOneHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateOneHand = { "bRotateOneHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrabbable), &Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateOneHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateOneHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateOneHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_bCanBeOneHanded_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	void Z_Construct_UClass_AGrabbable_Statics::NewProp_bCanBeOneHanded_SetBit(void* Obj)
	{
		((AGrabbable*)Obj)->bCanBeOneHanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_bCanBeOneHanded = { "bCanBeOneHanded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrabbable), &Z_Construct_UClass_AGrabbable_Statics::NewProp_bCanBeOneHanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_bCanBeOneHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_bCanBeOneHanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_ControllingMC_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_ControllingMC = { "ControllingMC", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrabbable, ControllingMC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_ControllingMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_ControllingMC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_NonControllingMC_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_NonControllingMC = { "NonControllingMC", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrabbable, NonControllingMC), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_NonControllingMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_NonControllingMC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_bControllingMCLeft_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	void Z_Construct_UClass_AGrabbable_Statics::NewProp_bControllingMCLeft_SetBit(void* Obj)
	{
		((AGrabbable*)Obj)->bControllingMCLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_bControllingMCLeft = { "bControllingMCLeft", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGrabbable), &Z_Construct_UClass_AGrabbable_Statics::NewProp_bControllingMCLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_bControllingMCLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_bControllingMCLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_ControllingHandHold_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_ControllingHandHold = { "ControllingHandHold", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrabbable, ControllingHandHold), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_ControllingHandHold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_ControllingHandHold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_MotionController1_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_MotionController1 = { "MotionController1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrabbable, MotionController1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_MotionController1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_MotionController1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_MotionController2_MetaData[] = {
		{ "Category", "TwoHanded" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_MotionController2 = { "MotionController2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrabbable, MotionController2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_MotionController2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_MotionController2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "Grabbable" },
		{ "Comment", "/** \n\x09\x09Starting point of the item, set by stage.\n\x09\x09The item will be sent to this location if the player teleports in the portal room and the item isn't in the player's hands, or the staring PortalRoom.\n\x09*/" },
		{ "ModuleRelativePath", "Grabbable.h" },
		{ "ToolTip", "Starting point of the item, set by stage.\nThe item will be sent to this location if the player teleports in the portal room and the item isn't in the player's hands, or the staring PortalRoom." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrabbable, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbable_Statics::NewProp_StartRotation_MetaData[] = {
		{ "Category", "Grabbable" },
		{ "ModuleRelativePath", "Grabbable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGrabbable_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrabbable, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::NewProp_StartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::NewProp_StartRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrabbable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_ItemGripSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_ItemWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_bBeingHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_bLeftHandHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_bRightHandHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_bTwoHanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_bInterpToMC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateTwoHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_bRotateOneHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_bCanBeOneHanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_ControllingMC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_NonControllingMC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_bControllingMCLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_ControllingHandHold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_MotionController1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_MotionController2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbable_Statics::NewProp_StartRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrabbable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrabbable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrabbable_Statics::ClassParams = {
		&AGrabbable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrabbable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrabbable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrabbable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrabbable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrabbable, 3367098599);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AGrabbable>()
	{
		return AGrabbable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrabbable(Z_Construct_UClass_AGrabbable, &AGrabbable::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AGrabbable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrabbable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
