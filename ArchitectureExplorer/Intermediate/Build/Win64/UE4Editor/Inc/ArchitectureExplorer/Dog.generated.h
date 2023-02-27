// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_Dog_generated_h
#error "Dog.generated.h already included, missing '#pragma once' in Dog.h"
#endif
#define ARCHITECTUREEXPLORER_Dog_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDropBall); \
	DECLARE_FUNCTION(execFetchBall); \
	DECLARE_FUNCTION(execPickupBall);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDropBall); \
	DECLARE_FUNCTION(execFetchBall); \
	DECLARE_FUNCTION(execPickupBall);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_EVENT_PARMS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_CALLBACK_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADog(); \
	friend struct Z_Construct_UClass_ADog_Statics; \
public: \
	DECLARE_CLASS(ADog, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ADog)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_INCLASS \
private: \
	static void StaticRegisterNativesADog(); \
	friend struct Z_Construct_UClass_ADog_Statics; \
public: \
	DECLARE_CLASS(ADog, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ADog)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADog(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADog) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADog); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADog(ADog&&); \
	NO_API ADog(const ADog&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADog(ADog&&); \
	NO_API ADog(const ADog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADog); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADog); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADog)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_25_PROLOG \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_EVENT_PARMS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class ADog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Dog_h


#define FOREACH_ENUM_DOGSTATE(op) \
	op(DogState::STATE_IDLE) \
	op(DogState::STATE_LAYING) \
	op(DogState::STATE_SITTING) \
	op(DogState::STATE_STANDINGUP) \
	op(DogState::STATE_SITTINGDOWN) \
	op(DogState::STATE_STAYWALKRUN) \
	op(DogState::STATE_FETCHING) \
	op(DogState::STATE_RETURNING) \
	op(DogState::STATE_PICKUP) \
	op(DogState::STATE_DROP) 

enum class DogState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<DogState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
