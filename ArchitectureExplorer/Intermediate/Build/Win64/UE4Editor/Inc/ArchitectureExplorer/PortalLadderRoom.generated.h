// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_PortalLadderRoom_generated_h
#error "PortalLadderRoom.generated.h already included, missing '#pragma once' in PortalLadderRoom.h"
#endif
#define ARCHITECTUREEXPLORER_PortalLadderRoom_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSoundsAndLightingBasedOnDoorAngle); \
	DECLARE_FUNCTION(execTeleport);


#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSoundsAndLightingBasedOnDoorAngle); \
	DECLARE_FUNCTION(execTeleport);


#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_EVENT_PARMS
#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_CALLBACK_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortalLadderRoom(); \
	friend struct Z_Construct_UClass_APortalLadderRoom_Statics; \
public: \
	DECLARE_CLASS(APortalLadderRoom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(APortalLadderRoom)


#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPortalLadderRoom(); \
	friend struct Z_Construct_UClass_APortalLadderRoom_Statics; \
public: \
	DECLARE_CLASS(APortalLadderRoom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(APortalLadderRoom)


#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APortalLadderRoom(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortalLadderRoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalLadderRoom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalLadderRoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortalLadderRoom(APortalLadderRoom&&); \
	NO_API APortalLadderRoom(const APortalLadderRoom&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortalLadderRoom(APortalLadderRoom&&); \
	NO_API APortalLadderRoom(const APortalLadderRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalLadderRoom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalLadderRoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortalLadderRoom)


#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_10_PROLOG \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_EVENT_PARMS


#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class APortalLadderRoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_PortalLadderRoom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
