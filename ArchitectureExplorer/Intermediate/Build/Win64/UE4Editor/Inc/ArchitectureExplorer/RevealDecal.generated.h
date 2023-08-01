// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_RevealDecal_generated_h
#error "RevealDecal.generated.h already included, missing '#pragma once' in RevealDecal.h"
#endif
#define ARCHITECTUREEXPLORER_RevealDecal_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlashlightLineOfSight);


#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlashlightLineOfSight);


#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_EVENT_PARMS
#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_CALLBACK_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARevealDecal(); \
	friend struct Z_Construct_UClass_ARevealDecal_Statics; \
public: \
	DECLARE_CLASS(ARevealDecal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ARevealDecal)


#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_INCLASS \
private: \
	static void StaticRegisterNativesARevealDecal(); \
	friend struct Z_Construct_UClass_ARevealDecal_Statics; \
public: \
	DECLARE_CLASS(ARevealDecal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ARevealDecal)


#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARevealDecal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARevealDecal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARevealDecal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARevealDecal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARevealDecal(ARevealDecal&&); \
	NO_API ARevealDecal(const ARevealDecal&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARevealDecal(ARevealDecal&&); \
	NO_API ARevealDecal(const ARevealDecal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARevealDecal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARevealDecal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARevealDecal)


#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_20_PROLOG \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_EVENT_PARMS


#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class ARevealDecal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_RevealDecal_h


#define FOREACH_ENUM_REVEALSTATE(op) \
	op(RevealState::STATE_WAITING) \
	op(RevealState::STATE_UPDATING_FLDOT) \
	op(RevealState::STATE_FADING_OUT) \
	op(RevealState::STATE_FADING_IN) \
	op(RevealState::STATE_FADED_IN) 

enum class RevealState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<RevealState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
