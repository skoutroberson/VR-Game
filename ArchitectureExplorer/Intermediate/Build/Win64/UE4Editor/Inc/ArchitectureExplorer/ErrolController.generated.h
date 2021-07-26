// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
#ifdef ARCHITECTUREEXPLORER_ErrolController_generated_h
#error "ErrolController.generated.h already included, missing '#pragma once' in ErrolController.h"
#endif
#define ARCHITECTUREEXPLORER_ErrolController_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLookAroundTimerCompleted); \
	DECLARE_FUNCTION(execGoToRandomWaypoint); \
	DECLARE_FUNCTION(execGetRandomWaypoint);


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLookAroundTimerCompleted); \
	DECLARE_FUNCTION(execGoToRandomWaypoint); \
	DECLARE_FUNCTION(execGetRandomWaypoint);


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAErrolController(); \
	friend struct Z_Construct_UClass_AErrolController_Statics; \
public: \
	DECLARE_CLASS(AErrolController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AErrolController)


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAErrolController(); \
	friend struct Z_Construct_UClass_AErrolController_Statics; \
public: \
	DECLARE_CLASS(AErrolController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AErrolController)


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AErrolController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AErrolController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AErrolController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AErrolController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AErrolController(AErrolController&&); \
	NO_API AErrolController(const AErrolController&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AErrolController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AErrolController(AErrolController&&); \
	NO_API AErrolController(const AErrolController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AErrolController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AErrolController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AErrolController)


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Waypoints() { return STRUCT_OFFSET(AErrolController, Waypoints); }


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_13_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AErrolController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_ErrolController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
