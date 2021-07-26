// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FQuat;
class USceneComponent;
struct FRotator;
#ifdef ARCHITECTUREEXPLORER_QuatRotLib_generated_h
#error "QuatRotLib.generated.h already included, missing '#pragma once' in QuatRotLib.h"
#endif
#define ARCHITECTUREEXPLORER_QuatRotLib_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddActorLocalRotationQuatLerp); \
	DECLARE_FUNCTION(execAddActorLocalRotationQuat); \
	DECLARE_FUNCTION(execSetActorRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetActorWorldRotationQuat); \
	DECLARE_FUNCTION(execAddLocalRotationQuat); \
	DECLARE_FUNCTION(execSetRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetWorldRotationQuat); \
	DECLARE_FUNCTION(execEuler_To_Quaternion);


#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddActorLocalRotationQuatLerp); \
	DECLARE_FUNCTION(execAddActorLocalRotationQuat); \
	DECLARE_FUNCTION(execSetActorRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetActorWorldRotationQuat); \
	DECLARE_FUNCTION(execAddLocalRotationQuat); \
	DECLARE_FUNCTION(execSetRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetWorldRotationQuat); \
	DECLARE_FUNCTION(execEuler_To_Quaternion);


#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuatRotLib(); \
	friend struct Z_Construct_UClass_UQuatRotLib_Statics; \
public: \
	DECLARE_CLASS(UQuatRotLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(UQuatRotLib)


#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUQuatRotLib(); \
	friend struct Z_Construct_UClass_UQuatRotLib_Statics; \
public: \
	DECLARE_CLASS(UQuatRotLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(UQuatRotLib)


#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuatRotLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuatRotLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuatRotLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuatRotLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuatRotLib(UQuatRotLib&&); \
	NO_API UQuatRotLib(const UQuatRotLib&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuatRotLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuatRotLib(UQuatRotLib&&); \
	NO_API UQuatRotLib(const UQuatRotLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuatRotLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuatRotLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuatRotLib)


#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_12_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class UQuatRotLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_QuatRotLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
