// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FHitResult;
#ifdef ARCHITECTUREEXPLORER_Cockroach_generated_h
#error "Cockroach.generated.h already included, missing '#pragma once' in Cockroach.h"
#endif
#define ARCHITECTUREEXPLORER_Cockroach_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotateToNormal); \
	DECLARE_FUNCTION(execHitRigidBody);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotateToNormal); \
	DECLARE_FUNCTION(execHitRigidBody);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACockroach(); \
	friend struct Z_Construct_UClass_ACockroach_Statics; \
public: \
	DECLARE_CLASS(ACockroach, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ACockroach)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_INCLASS \
private: \
	static void StaticRegisterNativesACockroach(); \
	friend struct Z_Construct_UClass_ACockroach_Statics; \
public: \
	DECLARE_CLASS(ACockroach, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ACockroach)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACockroach(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACockroach) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACockroach); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACockroach); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACockroach(ACockroach&&); \
	NO_API ACockroach(const ACockroach&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACockroach(ACockroach&&); \
	NO_API ACockroach(const ACockroach&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACockroach); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACockroach); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACockroach)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_18_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class ACockroach>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Cockroach_h


#define FOREACH_ENUM_ROACHSTATE(op) \
	op(RoachState::STATE_IDLE) \
	op(RoachState::STATE_MOVE) \
	op(RoachState::STATE_FALL) 

enum class RoachState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<RoachState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
