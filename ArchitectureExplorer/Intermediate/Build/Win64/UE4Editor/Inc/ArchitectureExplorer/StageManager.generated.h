// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_StageManager_generated_h
#error "StageManager.generated.h already included, missing '#pragma once' in StageManager.h"
#endif
#define ARCHITECTUREEXPLORER_StageManager_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCurrentStageCompleted);


#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCurrentStageCompleted);


#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStageManager(); \
	friend struct Z_Construct_UClass_AStageManager_Statics; \
public: \
	DECLARE_CLASS(AStageManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AStageManager)


#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAStageManager(); \
	friend struct Z_Construct_UClass_AStageManager_Statics; \
public: \
	DECLARE_CLASS(AStageManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AStageManager)


#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStageManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStageManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStageManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStageManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStageManager(AStageManager&&); \
	NO_API AStageManager(const AStageManager&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStageManager(AStageManager&&); \
	NO_API AStageManager(const AStageManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStageManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStageManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStageManager)


#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_23_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AStageManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_StageManager_h


#define FOREACH_ENUM_ESTAGENUM(op) \
	op(EStageNum::STAGE_1) \
	op(EStageNum::STAGE_2) \
	op(EStageNum::STAGE_3) 

enum class EStageNum : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<EStageNum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
