// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_AlienScare_generated_h
#error "AlienScare.generated.h already included, missing '#pragma once' in AlienScare.h"
#endif
#define ARCHITECTUREEXPLORER_AlienScare_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_RPC_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAlienScare(); \
	friend struct Z_Construct_UClass_AlienScare_Statics; \
public: \
	DECLARE_CLASS(AlienScare, AScare, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AlienScare)


#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAlienScare(); \
	friend struct Z_Construct_UClass_AlienScare_Statics; \
public: \
	DECLARE_CLASS(AlienScare, AScare, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AlienScare)


#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AlienScare(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AlienScare) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AlienScare); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AlienScare); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AlienScare(AlienScare&&); \
	NO_API AlienScare(const AlienScare&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AlienScare(AlienScare&&); \
	NO_API AlienScare(const AlienScare&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AlienScare); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AlienScare); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AlienScare)


#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_37_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AlienScare>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_AlienScare_h


#define FOREACH_ENUM_ALIENSCARESTATE(op) \
	op(AlienScareState::STATE_IDLE) \
	op(AlienScareState::STATE_START_SCARE) \
	op(AlienScareState::STATE_MOVING_PHONE) \
	op(AlienScareState::STATE_CALLING_PHONE) \
	op(AlienScareState::STATE_WAIT_CHASE) \
	op(AlienScareState::STATE_CHASE) \
	op(AlienScareState::STATE_END_CHASE) \
	op(AlienScareState::STATE_END_SCARE) 

enum class AlienScareState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<AlienScareState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
