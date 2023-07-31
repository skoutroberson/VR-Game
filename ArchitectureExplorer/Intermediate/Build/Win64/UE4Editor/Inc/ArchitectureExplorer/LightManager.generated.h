// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef ARCHITECTUREEXPLORER_LightManager_generated_h
#error "LightManager.generated.h already included, missing '#pragma once' in LightManager.h"
#endif
#define ARCHITECTUREEXPLORER_LightManager_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_RPC_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlickerLight(); \
	friend struct Z_Construct_UClass_UFlickerLight_Statics; \
public: \
	DECLARE_CLASS(UFlickerLight, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(UFlickerLight)


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFlickerLight(); \
	friend struct Z_Construct_UClass_UFlickerLight_Statics; \
public: \
	DECLARE_CLASS(UFlickerLight, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(UFlickerLight)


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlickerLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlickerLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlickerLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlickerLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlickerLight(UFlickerLight&&); \
	NO_API UFlickerLight(const UFlickerLight&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlickerLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlickerLight(UFlickerLight&&); \
	NO_API UFlickerLight(const UFlickerLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlickerLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlickerLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlickerLight)


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_14_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class UFlickerLight>();

#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditFlickerLight); \
	DECLARE_FUNCTION(execRemoveFlickerLight); \
	DECLARE_FUNCTION(execAddFlickerLight); \
	DECLARE_FUNCTION(execEditLight); \
	DECLARE_FUNCTION(execTurnOn);


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditFlickerLight); \
	DECLARE_FUNCTION(execRemoveFlickerLight); \
	DECLARE_FUNCTION(execAddFlickerLight); \
	DECLARE_FUNCTION(execEditLight); \
	DECLARE_FUNCTION(execTurnOn);


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightManager(); \
	friend struct Z_Construct_UClass_ALightManager_Statics; \
public: \
	DECLARE_CLASS(ALightManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ALightManager)


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_INCLASS \
private: \
	static void StaticRegisterNativesALightManager(); \
	friend struct Z_Construct_UClass_ALightManager_Statics; \
public: \
	DECLARE_CLASS(ALightManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ALightManager)


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightManager(ALightManager&&); \
	NO_API ALightManager(const ALightManager&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightManager(ALightManager&&); \
	NO_API ALightManager(const ALightManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightManager)


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_31_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class ALightManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_LightManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
