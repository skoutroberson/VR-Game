// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
#ifdef ARCHITECTUREEXPLORER_Crawler_generated_h
#error "Crawler.generated.h already included, missing '#pragma once' in Crawler.h"
#endif
#define ARCHITECTUREEXPLORER_Crawler_generated_h

#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_SPARSE_DATA
#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHitRigidBody); \
	DECLARE_FUNCTION(execRotateToNormal);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHitRigidBody); \
	DECLARE_FUNCTION(execRotateToNormal);


#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrawler(); \
	friend struct Z_Construct_UClass_ACrawler_Statics; \
public: \
	DECLARE_CLASS(ACrawler, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ACrawler)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_INCLASS \
private: \
	static void StaticRegisterNativesACrawler(); \
	friend struct Z_Construct_UClass_ACrawler_Statics; \
public: \
	DECLARE_CLASS(ACrawler, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArchitectureExplorer"), NO_API) \
	DECLARE_SERIALIZER(ACrawler)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrawler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrawler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrawler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrawler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrawler(ACrawler&&); \
	NO_API ACrawler(const ACrawler&); \
public:


#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrawler(ACrawler&&); \
	NO_API ACrawler(const ACrawler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrawler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrawler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACrawler)


#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_PRIVATE_PROPERTY_OFFSET
#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_20_PROLOG
#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_RPC_WRAPPERS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_INCLASS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_PRIVATE_PROPERTY_OFFSET \
	ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_SPARSE_DATA \
	ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_INCLASS_NO_PURE_DECLS \
	ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<class ACrawler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArchitectureExplorer_Source_ArchitectureExplorer_Crawler_h


#define FOREACH_ENUM_CRAWLERSTATE(op) \
	op(CrawlerState::STATE_IDLE) \
	op(CrawlerState::STATE_MOVE) \
	op(CrawlerState::STATE_FALL) 

enum class CrawlerState : uint8;
template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<CrawlerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
