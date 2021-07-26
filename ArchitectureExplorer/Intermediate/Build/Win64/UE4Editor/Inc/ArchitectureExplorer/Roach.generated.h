// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_Roach_generated_h
#error "Roach.generated.h already included, missing '#pragma once' in Roach.h"
#endif
#define ARCHITECTUREEXPLORER_Roach_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReachedGoal); \
	DECLARE_FUNCTION(execStopWait);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReachedGoal); \
	DECLARE_FUNCTION(execStopWait);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoach(); \
	friend struct Z_Construct_UClass_ARoach_Statics; \
public: \
	DECLARE_CLASS(ARoach, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ARoach)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARoach(); \
	friend struct Z_Construct_UClass_ARoach_Statics; \
public: \
	DECLARE_CLASS(ARoach, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ARoach)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoach(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoach) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoach); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoach); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoach(ARoach&&); \
	NO_API ARoach(const ARoach&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoach(ARoach&&); \
	NO_API ARoach(const ARoach&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoach); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoach); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoach)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_10_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class ARoach>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Roach_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
