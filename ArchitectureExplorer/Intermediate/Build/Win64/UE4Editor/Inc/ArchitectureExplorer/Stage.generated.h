// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_Stage_generated_h
#error "Stage.generated.h already included, missing '#pragma once' in Stage.h"
#endif
#define ARCHITECTUREEXPLORER_Stage_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetStage); \
	DECLARE_FUNCTION(execEndStage); \
	DECLARE_FUNCTION(execBeginStage);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetStage); \
	DECLARE_FUNCTION(execEndStage); \
	DECLARE_FUNCTION(execBeginStage);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStage(); \
	friend struct Z_Construct_UClass_AStage_Statics; \
public: \
	DECLARE_CLASS(AStage, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AStage)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAStage(); \
	friend struct Z_Construct_UClass_AStage_Statics; \
public: \
	DECLARE_CLASS(AStage, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AStage)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStage(AStage&&); \
	NO_API AStage(const AStage&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStage(AStage&&); \
	NO_API AStage(const AStage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStage)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_14_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AStage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Stage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
