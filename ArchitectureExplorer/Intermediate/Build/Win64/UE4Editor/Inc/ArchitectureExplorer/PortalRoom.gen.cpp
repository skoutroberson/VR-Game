// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/PortalRoom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalRoom() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APortalRoom_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APortalRoom();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APortalRoom::execTeleportPlayer)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_TargetRoom);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportPlayer(Z_Param_Out_TargetRoom,Z_Param_Out_Player);
		P_NATIVE_END;
	}
	static FName NAME_APortalRoom_DisablePortal = FName(TEXT("DisablePortal"));
	void APortalRoom::DisablePortal()
	{
		ProcessEvent(FindFunctionChecked(NAME_APortalRoom_DisablePortal),NULL);
	}
	static FName NAME_APortalRoom_EnablePortal = FName(TEXT("EnablePortal"));
	void APortalRoom::EnablePortal()
	{
		ProcessEvent(FindFunctionChecked(NAME_APortalRoom_EnablePortal),NULL);
	}
	static FName NAME_APortalRoom_TurnOnSoundsAndLighting = FName(TEXT("TurnOnSoundsAndLighting"));
	void APortalRoom::TurnOnSoundsAndLighting()
	{
		ProcessEvent(FindFunctionChecked(NAME_APortalRoom_TurnOnSoundsAndLighting),NULL);
	}
	void APortalRoom::StaticRegisterNativesAPortalRoom()
	{
		UClass* Class = APortalRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TeleportPlayer", &APortalRoom::execTeleportPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APortalRoom_DisablePortal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalRoom_DisablePortal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// hides portal, shows intersecting meshes, and removes portal collisions. MUST BE CALLED ON THE TARGET PORTAL AS WELL OR ELSE BAD\n" },
		{ "ModuleRelativePath", "PortalRoom.h" },
		{ "ToolTip", "hides portal, shows intersecting meshes, and removes portal collisions. MUST BE CALLED ON THE TARGET PORTAL AS WELL OR ELSE BAD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalRoom_DisablePortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalRoom, nullptr, "DisablePortal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalRoom_DisablePortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalRoom_DisablePortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalRoom_DisablePortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalRoom_DisablePortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalRoom_EnablePortal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalRoom_EnablePortal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// shows portal, hides intersecting meshes, and adds collision to portal. MUST BE CALLED ON THE TARGET PORTAL AS WELL OR ELSE BAD\n" },
		{ "ModuleRelativePath", "PortalRoom.h" },
		{ "ToolTip", "shows portal, hides intersecting meshes, and adds collision to portal. MUST BE CALLED ON THE TARGET PORTAL AS WELL OR ELSE BAD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalRoom_EnablePortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalRoom, nullptr, "EnablePortal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalRoom_EnablePortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalRoom_EnablePortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalRoom_EnablePortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalRoom_EnablePortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics
	{
		struct PortalRoom_eventTeleportPlayer_Parms
		{
			AActor* TargetRoom;
			AActor* Player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetRoom;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::NewProp_TargetRoom = { "TargetRoom", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalRoom_eventTeleportPlayer_Parms, TargetRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PortalRoom_eventTeleportPlayer_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::NewProp_TargetRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomFunctions" },
		{ "ModuleRelativePath", "PortalRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalRoom, nullptr, "TeleportPlayer", nullptr, nullptr, sizeof(PortalRoom_eventTeleportPlayer_Parms), Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalRoom_TeleportPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalRoom_TeleportPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalRoom_TurnOnSoundsAndLighting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalRoom_TurnOnSoundsAndLighting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PortalRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalRoom_TurnOnSoundsAndLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalRoom, nullptr, "TurnOnSoundsAndLighting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalRoom_TurnOnSoundsAndLighting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalRoom_TurnOnSoundsAndLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalRoom_TurnOnSoundsAndLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalRoom_TurnOnSoundsAndLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APortalRoom_NoRegister()
	{
		return APortalRoom::StaticClass();
	}
	struct Z_Construct_UClass_APortalRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorEndHinge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorEndHinge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheEndDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TheEndDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PPV_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PPV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldSoundClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSoundSubmix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldSoundSubmix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortalRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APortalRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APortalRoom_DisablePortal, "DisablePortal" }, // 169310758
		{ &Z_Construct_UFunction_APortalRoom_EnablePortal, "EnablePortal" }, // 2786161211
		{ &Z_Construct_UFunction_APortalRoom_TeleportPlayer, "TeleportPlayer" }, // 4208780132
		{ &Z_Construct_UFunction_APortalRoom_TurnOnSoundsAndLighting, "TurnOnSoundsAndLighting" }, // 1687070514
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PortalRoom.h" },
		{ "ModuleRelativePath", "PortalRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalRoom_Statics::NewProp_OverlappingGrabbables_Inner = { "OverlappingGrabbables", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalRoom_Statics::NewProp_OverlappingGrabbables_MetaData[] = {
		{ "Category", "PortalRoom" },
		{ "Comment", "// this set keeps track of all items that the player is grabbing or has placed in the portal room so we can teleport these with the player\n" },
		{ "ModuleRelativePath", "PortalRoom.h" },
		{ "ToolTip", "this set keeps track of all items that the player is grabbing or has placed in the portal room so we can teleport these with the player" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APortalRoom_Statics::NewProp_OverlappingGrabbables = { "OverlappingGrabbables", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalRoom, OverlappingGrabbables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APortalRoom_Statics::NewProp_OverlappingGrabbables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalRoom_Statics::NewProp_OverlappingGrabbables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalRoom_Statics::NewProp_bUpdateSoundsAndLighting_MetaData[] = {
		{ "Category", "PortalRoom" },
		{ "Comment", "// for updating the indirect lighting and sounds based on the start door angle\n" },
		{ "ModuleRelativePath", "PortalRoom.h" },
		{ "ToolTip", "for updating the indirect lighting and sounds based on the start door angle" },
	};
#endif
	void Z_Construct_UClass_APortalRoom_Statics::NewProp_bUpdateSoundsAndLighting_SetBit(void* Obj)
	{
		((APortalRoom*)Obj)->bUpdateSoundsAndLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APortalRoom_Statics::NewProp_bUpdateSoundsAndLighting = { "bUpdateSoundsAndLighting", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APortalRoom), &Z_Construct_UClass_APortalRoom_Statics::NewProp_bUpdateSoundsAndLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_APortalRoom_Statics::NewProp_bUpdateSoundsAndLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalRoom_Statics::NewProp_bUpdateSoundsAndLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalRoom_Statics::NewProp_DoorEndHinge_MetaData[] = {
		{ "Category", "PortalRoom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalRoom_Statics::NewProp_DoorEndHinge = { "DoorEndHinge", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalRoom, DoorEndHinge), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalRoom_Statics::NewProp_DoorEndHinge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalRoom_Statics::NewProp_DoorEndHinge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalRoom_Statics::NewProp_TheEndDoor_MetaData[] = {
		{ "Category", "PortalRoom" },
		{ "ModuleRelativePath", "PortalRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalRoom_Statics::NewProp_TheEndDoor = { "TheEndDoor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalRoom, TheEndDoor), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalRoom_Statics::NewProp_TheEndDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalRoom_Statics::NewProp_TheEndDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalRoom_Statics::NewProp_PPV_MetaData[] = {
		{ "Category", "PortalRoom" },
		{ "ModuleRelativePath", "PortalRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalRoom_Statics::NewProp_PPV = { "PPV", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalRoom, PPV), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalRoom_Statics::NewProp_PPV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalRoom_Statics::NewProp_PPV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalRoom_Statics::NewProp_WorldSoundClass_MetaData[] = {
		{ "Category", "PortalRoom" },
		{ "ModuleRelativePath", "PortalRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalRoom_Statics::NewProp_WorldSoundClass = { "WorldSoundClass", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalRoom, WorldSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalRoom_Statics::NewProp_WorldSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalRoom_Statics::NewProp_WorldSoundClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalRoom_Statics::NewProp_WorldSoundSubmix_MetaData[] = {
		{ "Category", "PortalRoom" },
		{ "ModuleRelativePath", "PortalRoom.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalRoom_Statics::NewProp_WorldSoundSubmix = { "WorldSoundSubmix", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortalRoom, WorldSoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortalRoom_Statics::NewProp_WorldSoundSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortalRoom_Statics::NewProp_WorldSoundSubmix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortalRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalRoom_Statics::NewProp_OverlappingGrabbables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalRoom_Statics::NewProp_OverlappingGrabbables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalRoom_Statics::NewProp_bUpdateSoundsAndLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalRoom_Statics::NewProp_DoorEndHinge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalRoom_Statics::NewProp_TheEndDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalRoom_Statics::NewProp_PPV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalRoom_Statics::NewProp_WorldSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalRoom_Statics::NewProp_WorldSoundSubmix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortalRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalRoom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortalRoom_Statics::ClassParams = {
		&APortalRoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APortalRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APortalRoom_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortalRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortalRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortalRoom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortalRoom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortalRoom, 1799450213);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<APortalRoom>()
	{
		return APortalRoom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortalRoom(Z_Construct_UClass_APortalRoom, &APortalRoom::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("APortalRoom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortalRoom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
