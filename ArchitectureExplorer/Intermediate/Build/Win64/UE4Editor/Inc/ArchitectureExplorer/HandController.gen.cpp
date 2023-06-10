// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/HandController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandController() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_HandControllerState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AHandController_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_AHandController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
// End Cross Module References
	static UEnum* HandControllerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_HandControllerState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("HandControllerState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<HandControllerState>()
	{
		return HandControllerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_HandControllerState(HandControllerState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("HandControllerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_HandControllerState_Hash() { return 832772849U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_HandControllerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("HandControllerState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_HandControllerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HandControllerState::STATE_IDLE", (int64)HandControllerState::STATE_IDLE },
				{ "HandControllerState::STATE_CANGRAB", (int64)HandControllerState::STATE_CANGRAB },
				{ "HandControllerState::STATE_FLASHLIGHT", (int64)HandControllerState::STATE_FLASHLIGHT },
				{ "HandControllerState::STATE_BALL", (int64)HandControllerState::STATE_BALL },
				{ "HandControllerState::STATE_LADDER", (int64)HandControllerState::STATE_LADDER },
				{ "HandControllerState::STATE_DOOR", (int64)HandControllerState::STATE_DOOR },
				{ "HandControllerState::STATE_CHAINSAW1", (int64)HandControllerState::STATE_CHAINSAW1 },
				{ "HandControllerState::STATE_CHAINSAW2", (int64)HandControllerState::STATE_CHAINSAW2 },
				{ "HandControllerState::STATE_PET", (int64)HandControllerState::STATE_PET },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "HandController.h" },
				{ "STATE_BALL.DisplayName", "Ball" },
				{ "STATE_BALL.Name", "HandControllerState::STATE_BALL" },
				{ "STATE_CANGRAB.DisplayName", "CanGrab" },
				{ "STATE_CANGRAB.Name", "HandControllerState::STATE_CANGRAB" },
				{ "STATE_CHAINSAW1.DisplayName", "Chainsaw1" },
				{ "STATE_CHAINSAW1.Name", "HandControllerState::STATE_CHAINSAW1" },
				{ "STATE_CHAINSAW2.DisplayName", "Chainsaw2" },
				{ "STATE_CHAINSAW2.Name", "HandControllerState::STATE_CHAINSAW2" },
				{ "STATE_DOOR.DisplayName", "Door" },
				{ "STATE_DOOR.Name", "HandControllerState::STATE_DOOR" },
				{ "STATE_FLASHLIGHT.DisplayName", "Flashlight" },
				{ "STATE_FLASHLIGHT.Name", "HandControllerState::STATE_FLASHLIGHT" },
				{ "STATE_IDLE.DisplayName", "Idle" },
				{ "STATE_IDLE.Name", "HandControllerState::STATE_IDLE" },
				{ "STATE_LADDER.DisplayName", "Ladder" },
				{ "STATE_LADDER.Name", "HandControllerState::STATE_LADDER" },
				{ "STATE_PET.DisplayName", "Pet" },
				{ "STATE_PET.Name", "HandControllerState::STATE_PET" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"HandControllerState",
				"HandControllerState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AHandController::execActorEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHandController::execActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHandController::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHandController::execGrip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Grip();
		P_NATIVE_END;
	}
	static FName NAME_AHandController_UpdateAnimation = FName(TEXT("UpdateAnimation"));
	void AHandController::UpdateAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHandController_UpdateAnimation),NULL);
	}
	void AHandController::StaticRegisterNativesAHandController()
	{
		UClass* Class = AHandController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorBeginOverlap", &AHandController::execActorBeginOverlap },
			{ "ActorEndOverlap", &AHandController::execActorEndOverlap },
			{ "Grip", &AHandController::execGrip },
			{ "Release", &AHandController::execRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics
	{
		struct HandController_eventActorBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandController_eventActorBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandController_eventActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Callbacks\n" },
		{ "ModuleRelativePath", "HandController.h" },
		{ "ToolTip", "Callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHandController, nullptr, "ActorBeginOverlap", nullptr, nullptr, sizeof(HandController_eventActorBeginOverlap_Parms), Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHandController_ActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHandController_ActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics
	{
		struct HandController_eventActorEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandController_eventActorEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HandController_eventActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// I nested both of these functions. There might be a \n// better solution than the if(!bIsGripping)\n" },
		{ "ModuleRelativePath", "HandController.h" },
		{ "ToolTip", "I nested both of these functions. There might be a\nbetter solution than the if(!bIsGripping)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHandController, nullptr, "ActorEndOverlap", nullptr, nullptr, sizeof(HandController_eventActorEndOverlap_Parms), Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHandController_ActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHandController_ActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHandController_Grip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHandController_Grip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandController_Grip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHandController, nullptr, "Grip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHandController_Grip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandController_Grip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHandController_Grip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHandController_Grip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHandController_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHandController_Release_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandController_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHandController, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHandController_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandController_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHandController_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHandController_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHandController_UpdateAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHandController_UpdateAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHandController_UpdateAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHandController, nullptr, "UpdateAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHandController_UpdateAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHandController_UpdateAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHandController_UpdateAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHandController_UpdateAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHandController_NoRegister()
	{
		return AHandController::StaticClass();
	}
	struct Z_Construct_UClass_AHandController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandControllerVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandControllerVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeft_MetaData[];
#endif
		static void NewProp_bLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripSizeDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripSizeDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripSizeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripSizeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ButtonPress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoldingFlashlight_MetaData[];
#endif
		static void NewProp_bIsHoldingFlashlight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoldingFlashlight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoldingChainsaw_MetaData[];
#endif
		static void NewProp_bIsHoldingChainsaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoldingChainsaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoldingBottle_MetaData[];
#endif
		static void NewProp_bIsHoldingBottle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoldingBottle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HapticEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHandController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHandController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHandController_ActorBeginOverlap, "ActorBeginOverlap" }, // 923936220
		{ &Z_Construct_UFunction_AHandController_ActorEndOverlap, "ActorEndOverlap" }, // 2599293571
		{ &Z_Construct_UFunction_AHandController_Grip, "Grip" }, // 2449933679
		{ &Z_Construct_UFunction_AHandController_Release, "Release" }, // 273026658
		{ &Z_Construct_UFunction_AHandController_UpdateAnimation, "UpdateAnimation" }, // 520880581
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HandController.h" },
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_DeltaLocation_MetaData[] = {
		{ "Category", "HandController" },
		{ "Comment", "// AKA the velocity vector of the hand controller\n" },
		{ "ModuleRelativePath", "HandController.h" },
		{ "ToolTip", "AKA the velocity vector of the hand controller" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_DeltaLocation = { "DeltaLocation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHandController, DeltaLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_DeltaLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_DeltaLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_HandControllerVelocity_MetaData[] = {
		{ "Category", "HandController" },
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_HandControllerVelocity = { "HandControllerVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHandController, HandControllerVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_HandControllerVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_HandControllerVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_bLeft_MetaData[] = {
		{ "Category", "HandController" },
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	void Z_Construct_UClass_AHandController_Statics::NewProp_bLeft_SetBit(void* Obj)
	{
		((AHandController*)Obj)->bLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_bLeft = { "bLeft", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHandController), &Z_Construct_UClass_AHandController_Statics::NewProp_bLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_bLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_bLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_GripSize_MetaData[] = {
		{ "Category", "HandAnimation" },
		{ "Comment", "// Animation stuff\n" },
		{ "ModuleRelativePath", "HandController.h" },
		{ "ToolTip", "Animation stuff" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_GripSize = { "GripSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHandController, GripSize), METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_GripSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_GripSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_GripSizeDefault_MetaData[] = {
		{ "Category", "HandAnimation" },
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_GripSizeDefault = { "GripSizeDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHandController, GripSizeDefault), METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_GripSizeDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_GripSizeDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_GripSizeMax_MetaData[] = {
		{ "Category", "HandAnimation" },
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_GripSizeMax = { "GripSizeMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHandController, GripSizeMax), METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_GripSizeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_GripSizeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_ButtonPress_MetaData[] = {
		{ "Category", "HandAnimation" },
		{ "Comment", "// Flashlight variables/functions\n" },
		{ "ModuleRelativePath", "HandController.h" },
		{ "ToolTip", "Flashlight variables/functions" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_ButtonPress = { "ButtonPress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHandController, ButtonPress), METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_ButtonPress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_ButtonPress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingFlashlight_MetaData[] = {
		{ "Category", "HandAnimation" },
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	void Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingFlashlight_SetBit(void* Obj)
	{
		((AHandController*)Obj)->bIsHoldingFlashlight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingFlashlight = { "bIsHoldingFlashlight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHandController), &Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingFlashlight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingFlashlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingFlashlight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingChainsaw_MetaData[] = {
		{ "Category", "HandAnimation" },
		{ "Comment", "// Chainsaw variables/functions\n" },
		{ "ModuleRelativePath", "HandController.h" },
		{ "ToolTip", "Chainsaw variables/functions" },
	};
#endif
	void Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingChainsaw_SetBit(void* Obj)
	{
		((AHandController*)Obj)->bIsHoldingChainsaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingChainsaw = { "bIsHoldingChainsaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHandController), &Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingChainsaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingChainsaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingChainsaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingBottle_MetaData[] = {
		{ "Category", "HandAnimation" },
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	void Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingBottle_SetBit(void* Obj)
	{
		((AHandController*)Obj)->bIsHoldingBottle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingBottle = { "bIsHoldingBottle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHandController), &Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingBottle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingBottle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingBottle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_MotionController_MetaData[] = {
		{ "Category", "HandController" },
		{ "Comment", "// Default sub object\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HandController.h" },
		{ "ToolTip", "Default sub object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHandController, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_HapticEffect_MetaData[] = {
		{ "Category", "HandController" },
		{ "Comment", "// Parameters\n" },
		{ "ModuleRelativePath", "HandController.h" },
		{ "ToolTip", "Parameters" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHandController, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_HapticEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_HapticEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_GrabActor_MetaData[] = {
		{ "Category", "HandController" },
		{ "Comment", "// Actor that the hand controller can pick up\n" },
		{ "ModuleRelativePath", "HandController.h" },
		{ "ToolTip", "Actor that the hand controller can pick up" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_GrabActor = { "GrabActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHandController, GrabActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_GrabActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_GrabActor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHandController_Statics::NewProp_State_MetaData[] = {
		{ "Category", "HandAnimation" },
		{ "ModuleRelativePath", "HandController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHandController_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHandController, State), Z_Construct_UEnum_ArchitectureExplorer_HandControllerState, METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHandController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_DeltaLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_HandControllerVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_bLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_GripSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_GripSizeDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_GripSizeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_ButtonPress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingFlashlight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingChainsaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_bIsHoldingBottle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_HapticEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_GrabActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHandController_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHandController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHandController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHandController_Statics::ClassParams = {
		&AHandController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHandController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHandController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHandController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHandController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHandController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHandController, 3939579652);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<AHandController>()
	{
		return AHandController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHandController(Z_Construct_UClass_AHandController, &AHandController::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("AHandController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHandController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
