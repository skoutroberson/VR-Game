// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ARCHITECTUREEXPLORER_Chainsaw_generated_h
#error "Chainsaw.generated.h already included, missing '#pragma once' in Chainsaw.h"
#endif
#define ARCHITECTUREEXPLORER_Chainsaw_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExitEndrevState); \
	DECLARE_FUNCTION(execExitStartupState); \
	DECLARE_FUNCTION(execStartDismember); \
	DECLARE_FUNCTION(execBladeBeginOverlap);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExitEndrevState); \
	DECLARE_FUNCTION(execExitStartupState); \
	DECLARE_FUNCTION(execStartDismember); \
	DECLARE_FUNCTION(execBladeBeginOverlap);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_EVENT_PARMS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_CALLBACK_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChainsaw(); \
	friend struct Z_Construct_UClass_AChainsaw_Statics; \
public: \
	DECLARE_CLASS(AChainsaw, AGrabbable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AChainsaw)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAChainsaw(); \
	friend struct Z_Construct_UClass_AChainsaw_Statics; \
public: \
	DECLARE_CLASS(AChainsaw, AGrabbable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AChainsaw)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChainsaw(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChainsaw) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChainsaw); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChainsaw); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChainsaw(AChainsaw&&); \
	NO_API AChainsaw(const AChainsaw&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChainsaw(AChainsaw&&); \
	NO_API AChainsaw(const AChainsaw&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChainsaw); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChainsaw); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChainsaw)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_25_PROLOG \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_EVENT_PARMS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AChainsaw>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Chainsaw_h


#define FOREACH_ENUM_SAWSTATE(op) \
	op(SawState::STATE_IDLE) \
	op(SawState::STATE_STARTUP) \
	op(SawState::STATE_REVVING) \
	op(SawState::STATE_ENDREV) 

enum class SawState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<SawState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
