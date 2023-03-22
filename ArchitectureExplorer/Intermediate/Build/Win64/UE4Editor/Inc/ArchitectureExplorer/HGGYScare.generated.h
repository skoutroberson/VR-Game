// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_HGGYScare_generated_h
#error "HGGYScare.generated.h already included, missing '#pragma once' in HGGYScare.h"
#endif
#define ARCHITECTUREEXPLORER_HGGYScare_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnterCallingPhoneState); \
	DECLARE_FUNCTION(execEnterMovingPhoneState);


#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnterCallingPhoneState); \
	DECLARE_FUNCTION(execEnterMovingPhoneState);


#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_EVENT_PARMS
#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_CALLBACK_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHGGYScare(); \
	friend struct Z_Construct_UClass_AHGGYScare_Statics; \
public: \
	DECLARE_CLASS(AHGGYScare, AScare, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AHGGYScare)


#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAHGGYScare(); \
	friend struct Z_Construct_UClass_AHGGYScare_Statics; \
public: \
	DECLARE_CLASS(AHGGYScare, AScare, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AHGGYScare)


#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHGGYScare(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHGGYScare) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHGGYScare); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHGGYScare); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHGGYScare(AHGGYScare&&); \
	NO_API AHGGYScare(const AHGGYScare&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHGGYScare(AHGGYScare&&); \
	NO_API AHGGYScare(const AHGGYScare&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHGGYScare); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHGGYScare); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHGGYScare)


#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_28_PROLOG \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_EVENT_PARMS


#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AHGGYScare>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_HGGYScare_h


#define FOREACH_ENUM_HGGYSTATE(op) \
	op(HGGYState::STATE_IDLE) \
	op(HGGYState::STATE_MOVING_PHONE) \
	op(HGGYState::STATE_CALLING_PHONE) \
	op(HGGYState::STATE_TALKING) \
	op(HGGYState::STATE_CHASING) \
	op(HGGYState::STATE_ENDING) 

enum class HGGYState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<HGGYState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
