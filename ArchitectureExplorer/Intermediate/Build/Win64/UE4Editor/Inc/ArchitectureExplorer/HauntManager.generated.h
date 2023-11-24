// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_HauntManager_generated_h
#error "HauntManager.generated.h already included, missing '#pragma once' in HauntManager.h"
#endif
#define ARCHITECTUREEXPLORER_HauntManager_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRollHauntTime); \
	DECLARE_FUNCTION(execResumeHaunting); \
	DECLARE_FUNCTION(execPauseHaunting); \
	DECLARE_FUNCTION(execStopHaunting); \
	DECLARE_FUNCTION(execStartHaunting);


#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRollHauntTime); \
	DECLARE_FUNCTION(execResumeHaunting); \
	DECLARE_FUNCTION(execPauseHaunting); \
	DECLARE_FUNCTION(execStopHaunting); \
	DECLARE_FUNCTION(execStartHaunting);


#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_EVENT_PARMS
#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_CALLBACK_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHauntManager(); \
	friend struct Z_Construct_UClass_AHauntManager_Statics; \
public: \
	DECLARE_CLASS(AHauntManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AHauntManager)


#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAHauntManager(); \
	friend struct Z_Construct_UClass_AHauntManager_Statics; \
public: \
	DECLARE_CLASS(AHauntManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AHauntManager)


#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHauntManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHauntManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHauntManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHauntManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHauntManager(AHauntManager&&); \
	NO_API AHauntManager(const AHauntManager&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHauntManager(AHauntManager&&); \
	NO_API AHauntManager(const AHauntManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHauntManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHauntManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHauntManager)


#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_18_PROLOG \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_EVENT_PARMS


#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AHauntManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_HauntManager_h


#define FOREACH_ENUM_HAUNTMANAGERSTATE(op) \
	op(HauntManagerState::STATE_IDLE) \
	op(HauntManagerState::STATE_TIMER) \
	op(HauntManagerState::STATE_HAUNTING) \
	op(HauntManagerState::STATE_PAUSED) 

enum class HauntManagerState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<HauntManagerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
