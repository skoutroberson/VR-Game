// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
enum class ErrolState : uint8;
#ifdef ARCHITECTUREEXPLORER_ErrolCharacter_generated_h
#error "ErrolCharacter.generated.h already included, missing '#pragma once' in ErrolCharacter.h"
#endif
#define ARCHITECTUREEXPLORER_ErrolCharacter_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShouldKill); \
	DECLARE_FUNCTION(execShouldChase); \
	DECLARE_FUNCTION(execSetDetectionGauge); \
	DECLARE_FUNCTION(execSetSeeFlashlightGauge); \
	DECLARE_FUNCTION(execSetHearGauge); \
	DECLARE_FUNCTION(execSetSeeGauge); \
	DECLARE_FUNCTION(execInitializeCanSeeVariables); \
	DECLARE_FUNCTION(execExitShoulderPeekState); \
	DECLARE_FUNCTION(execExitPeekState); \
	DECLARE_FUNCTION(execEnterShoulderPeekState); \
	DECLARE_FUNCTION(execEnterPeekState); \
	DECLARE_FUNCTION(execGoToRandomWaypoint); \
	DECLARE_FUNCTION(execGetRandomWaypoint);


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShouldKill); \
	DECLARE_FUNCTION(execShouldChase); \
	DECLARE_FUNCTION(execSetDetectionGauge); \
	DECLARE_FUNCTION(execSetSeeFlashlightGauge); \
	DECLARE_FUNCTION(execSetHearGauge); \
	DECLARE_FUNCTION(execSetSeeGauge); \
	DECLARE_FUNCTION(execInitializeCanSeeVariables); \
	DECLARE_FUNCTION(execExitShoulderPeekState); \
	DECLARE_FUNCTION(execExitPeekState); \
	DECLARE_FUNCTION(execEnterShoulderPeekState); \
	DECLARE_FUNCTION(execEnterPeekState); \
	DECLARE_FUNCTION(execGoToRandomWaypoint); \
	DECLARE_FUNCTION(execGetRandomWaypoint);


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_EVENT_PARMS \
	struct ErrolCharacter_eventUpdateAnimation_Parms \
	{ \
		ErrolState CurrentState; \
	};


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_CALLBACK_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAErrolCharacter(); \
	friend struct Z_Construct_UClass_AErrolCharacter_Statics; \
public: \
	DECLARE_CLASS(AErrolCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AErrolCharacter)


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAErrolCharacter(); \
	friend struct Z_Construct_UClass_AErrolCharacter_Statics; \
public: \
	DECLARE_CLASS(AErrolCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AErrolCharacter)


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AErrolCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AErrolCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AErrolCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AErrolCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AErrolCharacter(AErrolCharacter&&); \
	NO_API AErrolCharacter(const AErrolCharacter&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AErrolCharacter(AErrolCharacter&&); \
	NO_API AErrolCharacter(const AErrolCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AErrolCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AErrolCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AErrolCharacter)


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Waypoints() { return STRUCT_OFFSET(AErrolCharacter, Waypoints); }


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_39_PROLOG \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_EVENT_PARMS


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AErrolCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_ErrolCharacter_h


#define FOREACH_ENUM_ERROLPEEKSTATE(op) \
	op(ErrolPeekState::STATE_IDLE) \
	op(ErrolPeekState::STATE_WAITPEEK) \
	op(ErrolPeekState::STATE_LEFTPEEK) \
	op(ErrolPeekState::STATE_RIGHTPEEK) 

enum class ErrolPeekState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<ErrolPeekState>();

#define FOREACH_ENUM_ERROLSTATE(op) \
	op(ErrolState::STATE_IDLE) \
	op(ErrolState::STATE_PATROL) \
	op(ErrolState::STATE_CHASE) \
	op(ErrolState::STATE_INVESTIGATE) \
	op(ErrolState::STATE_LOOKAROUND) \
	op(ErrolState::STATE_KILL) \
	op(ErrolState::STATE_PEEK) \
	op(ErrolState::STATE_SCARE1) \
	op(ErrolState::STATE_SHOULDERPEEK) \
	op(ErrolState::STATE_FLYAT) \
	op(ErrolState::STATE_BEINGCUT) 

enum class ErrolState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<ErrolState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
