// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/PortalLadderRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalLadderRoom() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APortalLadderRoom_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APortalLadderRoom();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APortalLadderRoom::execUpdateSoundsAndLightingBasedOnDoorAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSoundsAndLightingBasedOnDoorAngle(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalLadderRoom::execTeleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Teleport();
		P_NATIVE_END;
	}
	static FName NAME_APortalLadderRoom_DisablePortal = FName(TEXT("DisablePortal"));
	void APortalLadderRoom::DisablePortal()
	{
		ProcessEvent(FindFunctionChecked(NAME_APortalLadderRoom_DisablePortal),NULL);
	}
	static FName NAME_APortalLadderRoom_EnablePortal = FName(TEXT("EnablePortal"));
	void APortalLadderRoom::EnablePortal()
	{
		ProcessEvent(FindFunctionChecked(NAME_APortalLadderRoom_EnablePortal),NULL);
	}
	void APortalLadderRoom::StaticRegisterNativesAPortalLadderRoom()
	{
		UClass* Class = APortalLadderRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Teleport", &APortalLadderRoom::execTeleport },
			{ "UpdateSoundsAndLightingBasedOnDoorAngle", &APortalLadderRoom::execUpdateSoundsAndLightingBasedOnDoorAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APortalLadderRoom_DisablePortal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalLadderRoom_DisablePortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalLadderRoom_DisablePortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalLadderRoom, nullptr, "DisablePortal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalLadderRoom_DisablePortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalLadderRoom_DisablePortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalLadderRoom_DisablePortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalLadderRoom_DisablePortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalLadderRoom_EnablePortal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalLadderRoom_EnablePortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalLadderRoom_EnablePortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalLadderRoom, nullptr, "EnablePortal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalLadderRoom_EnablePortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalLadderRoom_EnablePortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalLadderRoom_EnablePortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalLadderRoom_EnablePortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalLadderRoom_Teleport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalLadderRoom_Teleport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalLadderRoom_Teleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalLadderRoom, nullptr, "Teleport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalLadderRoom_Teleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalLadderRoom_Teleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalLadderRoom_Teleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalLadderRoom_Teleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics
	{
		struct PortalLadderRoom_eventUpdateSoundsAndLightingBasedOnDoorAngle_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalLadderRoom_eventUpdateSoundsAndLightingBasedOnDoorAngle_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalLadderRoom, nullptr, "UpdateSoundsAndLightingBasedOnDoorAngle", nullptr, nullptr, sizeof(PortalLadderRoom_eventUpdateSoundsAndLightingBasedOnDoorAngle_Parms), Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APortalLadderRoom_NoRegister()
	{
		return APortalLadderRoom::StaticClass();
	}
	struct Z_Construct_UClass_APortalLadderRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPortalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPortalLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingGrabbables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingGrabbables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingGrabbables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateSoundsAndLighting_MetaData[];
#endif
		static void NewProp_bUpdateSoundsAndLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSoundsAndLighting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortalLadderRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APortalLadderRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APortalLadderRoom_DisablePortal, "DisablePortal" }, // 4102147990
		{ &Z_Construct_UFunction_APortalLadderRoom_EnablePortal, "EnablePortal" }, // 618791119
		{ &Z_Construct_UFunction_APortalLadderRoom_Teleport, "Teleport" }, // 547937728
		{ &Z_Construct_UFunction_APortalLadderRoom_UpdateSoundsAndLightingBasedOnDoorAngle, "UpdateSoundsAndLightingBasedOnDoorAngle" }, // 328688287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalLadderRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PortalLadderRoom.h" },
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_RoomMesh_MetaData[] = {
		{ "Category", "PortalLadderRoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_RoomMesh = { "RoomMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalLadderRoom, RoomMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_RoomMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_RoomMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_TeleportTrigger_MetaData[] = {
		{ "Category", "PortalLadderRoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_TeleportTrigger = { "TeleportTrigger", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalLadderRoom, TeleportTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_TeleportTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_TeleportTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_TargetPortalLocation_MetaData[] = {
		{ "Category", "PortalLadderRoom" },
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_TargetPortalLocation = { "TargetPortalLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalLadderRoom, TargetPortalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_TargetPortalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_TargetPortalLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingMeshes_Inner = { "OverlappingMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingMeshes_MetaData[] = {
		{ "Category", "PortalLadderRoom" },
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingMeshes = { "OverlappingMeshes", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalLadderRoom, OverlappingMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingGrabbables_Inner = { "OverlappingGrabbables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingGrabbables_MetaData[] = {
		{ "Category", "PortalLadderRoom" },
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingGrabbables = { "OverlappingGrabbables", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalLadderRoom, OverlappingGrabbables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingGrabbables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingGrabbables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_bUpdateSoundsAndLighting_MetaData[] = {
		{ "Category", "PortalLadderRoom" },
		{ "ModuleRelativePath", "PortalLadderRoom.h" },
	};
#endif
	void Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_bUpdateSoundsAndLighting_SetBit(void* Obj)
	{
		((APortalLadderRoom*)Obj)->bUpdateSoundsAndLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_bUpdateSoundsAndLighting = { "bUpdateSoundsAndLighting", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APortalLadderRoom), &Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_bUpdateSoundsAndLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_bUpdateSoundsAndLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_bUpdateSoundsAndLighting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortalLadderRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_RoomMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_TeleportTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_TargetPortalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingGrabbables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_OverlappingGrabbables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalLadderRoom_Statics::NewProp_bUpdateSoundsAndLighting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortalLadderRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalLadderRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortalLadderRoom_Statics::ClassParams = {
		&APortalLadderRoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APortalLadderRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APortalLadderRoom_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortalLadderRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortalLadderRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortalLadderRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortalLadderRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortalLadderRoom, 2113855006);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<APortalLadderRoom>()
	{
		return APortalLadderRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortalLadderRoom(Z_Construct_UClass_APortalLadderRoom, &APortalLadderRoom::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("APortalLadderRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortalLadderRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
