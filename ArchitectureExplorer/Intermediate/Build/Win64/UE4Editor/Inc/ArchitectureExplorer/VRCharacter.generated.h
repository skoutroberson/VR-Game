// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_VRCharacter_generated_h
#error "VRCharacter.generated.h already included, missing '#pragma once' in VRCharacter.h"
#endif
#define ARCHITECTUREEXPLORER_VRCharacter_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReleaseRight); \
	DECLARE_FUNCTION(execGripRight); \
	DECLARE_FUNCTION(execReleaseLeft); \
	DECLARE_FUNCTION(execGripLeft);


#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReleaseRight); \
	DECLARE_FUNCTION(execGripRight); \
	DECLARE_FUNCTION(execReleaseLeft); \
	DECLARE_FUNCTION(execGripLeft);


#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRCharacter)


#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxTeleportDistance() { return STRUCT_OFFSET(AVRCharacter, MaxTeleportDistance); } \
	FORCEINLINE static uint32 __PPO__LeftFootstepSound() { return STRUCT_OFFSET(AVRCharacter, LeftFootstepSound); } \
	FORCEINLINE static uint32 __PPO__RightFootstepSound() { return STRUCT_OFFSET(AVRCharacter, RightFootstepSound); } \
	FORCEINLINE static uint32 __PPO__DistanceThreshold() { return STRUCT_OFFSET(AVRCharacter, DistanceThreshold); } \
	FORCEINLINE static uint32 __PPO__DistanceMovedDecrementAmount() { return STRUCT_OFFSET(AVRCharacter, DistanceMovedDecrementAmount); } \
	FORCEINLINE static uint32 __PPO__VelocityThreshold() { return STRUCT_OFFSET(AVRCharacter, VelocityThreshold); }


#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_15_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AVRCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_VRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
