// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_Errol_generated_h
#error "Errol.generated.h already included, missing '#pragma once' in Errol.h"
#endif
#define ARCHITECTUREEXPLORER_Errol_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_RPC_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAErrol(); \
	friend struct Z_Construct_UClass_AErrol_Statics; \
public: \
	DECLARE_CLASS(AErrol, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AErrol)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAErrol(); \
	friend struct Z_Construct_UClass_AErrol_Statics; \
public: \
	DECLARE_CLASS(AErrol, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(AErrol)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AErrol(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AErrol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AErrol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AErrol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AErrol(AErrol&&); \
	NO_API AErrol(const AErrol&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AErrol(AErrol&&); \
	NO_API AErrol(const AErrol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AErrol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AErrol); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AErrol)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_23_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class AErrol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Errol_h


#define FOREACH_ENUM_ANIMSTATE(op) \
	op(Idle) \
	op(Walk) \
	op(Run) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
