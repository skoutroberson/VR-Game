// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_SawPiece_generated_h
#error "SawPiece.generated.h already included, missing '#pragma once' in SawPiece.h"
#endif
#define ARCHITECTUREEXPLORER_SawPiece_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlashlightLOS);


#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlashlightLOS);


#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASawPiece(); \
	friend struct Z_Construct_UClass_ASawPiece_Statics; \
public: \
	DECLARE_CLASS(ASawPiece, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ASawPiece)


#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASawPiece(); \
	friend struct Z_Construct_UClass_ASawPiece_Statics; \
public: \
	DECLARE_CLASS(ASawPiece, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ASawPiece)


#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASawPiece(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASawPiece) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASawPiece); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASawPiece); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASawPiece(ASawPiece&&); \
	NO_API ASawPiece(const ASawPiece&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASawPiece(ASawPiece&&); \
	NO_API ASawPiece(const ASawPiece&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASawPiece); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASawPiece); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASawPiece)


#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_20_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class ASawPiece>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_SawPiece_h


#define FOREACH_ENUM_SAWPIECESTATE(op) \
	op(SawPieceState::STATE_WAITING) \
	op(SawPieceState::STATE_UPDATING_FLDOT) \
	op(SawPieceState::STATE_FADING_OUT) \
	op(SawPieceState::STATE_FADING_IN) \
	op(SawPieceState::STATE_FADED_IN) \
	op(SawPieceState::STATE_FOUND) 

enum class SawPieceState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<SawPieceState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
