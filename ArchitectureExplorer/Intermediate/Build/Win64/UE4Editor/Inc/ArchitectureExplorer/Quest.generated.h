// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCHITECTUREEXPLORER_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define ARCHITECTUREEXPLORER_Quest_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_RPC_WRAPPERS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend struct Z_Construct_UClass_UQuest_Statics; \
public: \
	DECLARE_CLASS(UQuest, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(UQuest)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUQuest(); \
	friend struct Z_Construct_UClass_UQuest_Statics; \
public: \
	DECLARE_CLASS(UQuest, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(UQuest)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuest(UQuest&&); \
	NO_API UQuest(const UQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuest)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_22_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class UQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Quest_h


#define FOREACH_ENUM_EQUESTCOMPLETION(op) \
	op(EQuestCompletion::EQC_NotStarted) \
	op(EQuestCompletion::EQC_Started) \
	op(EQuestCompletion::EQC_Succeeded) \
	op(EQuestCompletion::EQC_Failed) 

enum class EQuestCompletion : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<EQuestCompletion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
