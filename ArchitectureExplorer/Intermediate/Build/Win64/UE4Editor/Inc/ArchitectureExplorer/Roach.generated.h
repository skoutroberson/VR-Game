// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
enum class CockroachState : uint8;
#ifdef ARCHITECTUREEXPLORER_Roach_generated_h
#error "Roach.generated.h already included, missing '#pragma once' in Roach.h"
#endif
#define ARCHITECTUREEXPLORER_Roach_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeSwerveSpeed); \
	DECLARE_FUNCTION(execChangeSwerveDirectionAndRate); \
	DECLARE_FUNCTION(execChangeWiggleDirection); \
	DECLARE_FUNCTION(execHitRigidBody); \
	DECLARE_FUNCTION(execChangeState);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeSwerveSpeed); \
	DECLARE_FUNCTION(execChangeSwerveDirectionAndRate); \
	DECLARE_FUNCTION(execChangeWiggleDirection); \
	DECLARE_FUNCTION(execHitRigidBody); \
	DECLARE_FUNCTION(execChangeState);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_EVENT_PARMS \
	struct Roach_eventUpdateAnimationSpeed_Parms \
	{ \
		float NewSpeed; \
	};


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_CALLBACK_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoach(); \
	friend struct Z_Construct_UClass_ARoach_Statics; \
public: \
	DECLARE_CLASS(ARoach, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ARoach)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_INCLASS \
private: \
	static void StaticRegisterNativesARoach(); \
	friend struct Z_Construct_UClass_ARoach_Statics; \
public: \
	DECLARE_CLASS(ARoach, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ARoach)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoach(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoach) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoach); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoach); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoach(ARoach&&); \
	NO_API ARoach(const ARoach&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoach(ARoach&&); \
	NO_API ARoach(const ARoach&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoach); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoach); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoach)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(ARoach, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__bTurnLeft() { return STRUCT_OFFSET(ARoach, bTurnLeft); } \
	FORCEINLINE static uint32 __PPO__bMoveToGoal() { return STRUCT_OFFSET(ARoach, bMoveToGoal); } \
	FORCEINLINE static uint32 __PPO__bTurn() { return STRUCT_OFFSET(ARoach, bTurn); }


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_38_PROLOG \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_EVENT_PARMS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class ARoach>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h


#define FOREACH_ENUM_COCKROACHSTATE(op) \
	op(CockroachState::STATE_IDLE) \
	op(CockroachState::STATE_WAIT) \
	op(CockroachState::STATE_MOVE) \
	op(CockroachState::STATE_FALL) \
	op(CockroachState::STATE_COPULATE) 

enum class CockroachState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<CockroachState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
