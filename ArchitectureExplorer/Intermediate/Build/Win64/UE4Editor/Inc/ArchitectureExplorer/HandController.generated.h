// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ARCHITECTUREEXPLORER_HandController_generated_h
#error "HandController.generated.h already included, missing '#pragma once' in HandController.h"
#endif
#define ARCHITECTUREEXPLORER_HandController_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActorEndOverlap); \
	DECLARE_FUNCTION(execActorBeginOverlap);


#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHandController(); \
	friend struct Z_Construct_UClass_AHandController_Statics; \
public: \
	DECLARE_CLASS(AHandController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AHandController)


#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHandController(); \
	friend struct Z_Construct_UClass_AHandController_Statics; \
public: \
	DECLARE_CLASS(AHandController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AHandController)


#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHandController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHandController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHandController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHandController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHandController(AHandController&&); \
	NO_API AHandController(const AHandController&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHandController(AHandController&&); \
	NO_API AHandController(const AHandController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHandController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHandController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHandController)


#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MotionController() { return STRUCT_OFFSET(AHandController, MotionController); } \
	FORCEINLINE static uint32 __PPO__HapticEffect() { return STRUCT_OFFSET(AHandController, HapticEffect); }


#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_12_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AHandController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_HandController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
