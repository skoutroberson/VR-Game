// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define ARCHITECTUREEXPLORER_Door_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenDoorUsingCurve); \
	DECLARE_FUNCTION(execCloseDoorUsingCurve); \
	DECLARE_FUNCTION(execSetDoorBackwards); \
	DECLARE_FUNCTION(execCloseDoorFast);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenDoorUsingCurve); \
	DECLARE_FUNCTION(execCloseDoorUsingCurve); \
	DECLARE_FUNCTION(execSetDoorBackwards); \
	DECLARE_FUNCTION(execCloseDoorFast);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_EVENT_PARMS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_CALLBACK_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OpenSound() { return STRUCT_OFFSET(ADoor, OpenSound); } \
	FORCEINLINE static uint32 __PPO__CloseSound() { return STRUCT_OFFSET(ADoor, CloseSound); } \
	FORCEINLINE static uint32 __PPO__SwingOpenSound() { return STRUCT_OFFSET(ADoor, SwingOpenSound); } \
	FORCEINLINE static uint32 __PPO__SwingCloseSound() { return STRUCT_OFFSET(ADoor, SwingCloseSound); } \
	FORCEINLINE static uint32 __PPO__LockedSound() { return STRUCT_OFFSET(ADoor, LockedSound); } \
	FORCEINLINE static uint32 __PPO__UnlockSound() { return STRUCT_OFFSET(ADoor, UnlockSound); } \
	FORCEINLINE static uint32 __PPO__HandCollisionSound() { return STRUCT_OFFSET(ADoor, HandCollisionSound); } \
	FORCEINLINE static uint32 __PPO__CapsuleCollisionSound() { return STRUCT_OFFSET(ADoor, CapsuleCollisionSound); }


#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_11_PROLOG \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_EVENT_PARMS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Door_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
