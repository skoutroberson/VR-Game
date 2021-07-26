// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ARCHITECTUREEXPLORER_BoxTrigger_generated_h
#error "BoxTrigger.generated.h already included, missing '#pragma once' in BoxTrigger.h"
#endif
#define ARCHITECTUREEXPLORER_BoxTrigger_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxTrigger(); \
	friend struct Z_Construct_UClass_ABoxTrigger_Statics; \
public: \
	DECLARE_CLASS(ABoxTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ABoxTrigger)


#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABoxTrigger(); \
	friend struct Z_Construct_UClass_ABoxTrigger_Statics; \
public: \
	DECLARE_CLASS(ABoxTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ABoxTrigger)


#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoxTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxTrigger(ABoxTrigger&&); \
	NO_API ABoxTrigger(const ABoxTrigger&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxTrigger(ABoxTrigger&&); \
	NO_API ABoxTrigger(const ABoxTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoxTrigger)


#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_12_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class ABoxTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_BoxTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
