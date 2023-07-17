// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_Phone_generated_h
#error "Phone.generated.h already included, missing '#pragma once' in Phone.h"
#endif
#define ARCHITECTUREEXPLORER_Phone_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_RPC_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_EVENT_PARMS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_CALLBACK_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhone(); \
	friend struct Z_Construct_UClass_APhone_Statics; \
public: \
	DECLARE_CLASS(APhone, AGrabbable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(APhone)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAPhone(); \
	friend struct Z_Construct_UClass_APhone_Statics; \
public: \
	DECLARE_CLASS(APhone, AGrabbable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(APhone)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhone(APhone&&); \
	NO_API APhone(const APhone&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhone(APhone&&); \
	NO_API APhone(const APhone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhone)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_23_PROLOG \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_EVENT_PARMS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_CALLBACK_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class APhone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Phone_h


#define FOREACH_ENUM_PHONESTATE(op) \
	op(PhoneState::STATE_IDLE) \
	op(PhoneState::STATE_CALL1) \
	op(PhoneState::STATE_HGGY) \
	op(PhoneState::STATE_ALIEN1) \
	op(PhoneState::STATE_ALIEN2) \
	op(PhoneState::STATE_ALIEN3) 

enum class PhoneState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<PhoneState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
