// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/PeekPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeekPoint() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APeekPoint_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_APeekPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APeekPoint::StaticRegisterNativesAPeekPoint()
	{
	}
	UClass* Z_Construct_UClass_APeekPoint_NoRegister()
	{
		return APeekPoint::StaticClass();
	}
	struct Z_Construct_UClass_APeekPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeekRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PeekRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftPeekVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftPeekVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightPeekVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightPeekVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftPeekVectorMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftPeekVectorMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightPeekVectorMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightPeekVectorMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeekPositionVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeekPositionVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[];
#endif
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APeekPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeekPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PeekPoint.h" },
		{ "ModuleRelativePath", "PeekPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeekPoint_Statics::NewProp_PeekRoot_MetaData[] = {
		{ "Category", "PeekPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PeekPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APeekPoint_Statics::NewProp_PeekRoot = { "PeekRoot", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APeekPoint, PeekRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APeekPoint_Statics::NewProp_PeekRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::NewProp_PeekRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeekPoint_Statics::NewProp_LeftPeekVector_MetaData[] = {
		{ "Category", "PeekPoint" },
		{ "Comment", "//\x09Visual representations of where Errol will face if he peeks from this PeekPoint. Also used to determine if Errol should do a left or right peek from this point.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PeekPoint.h" },
		{ "ToolTip", "Visual representations of where Errol will face if he peeks from this PeekPoint. Also used to determine if Errol should do a left or right peek from this point." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APeekPoint_Statics::NewProp_LeftPeekVector = { "LeftPeekVector", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APeekPoint, LeftPeekVector), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APeekPoint_Statics::NewProp_LeftPeekVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::NewProp_LeftPeekVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeekPoint_Statics::NewProp_RightPeekVector_MetaData[] = {
		{ "Category", "PeekPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PeekPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APeekPoint_Statics::NewProp_RightPeekVector = { "RightPeekVector", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APeekPoint, RightPeekVector), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APeekPoint_Statics::NewProp_RightPeekVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::NewProp_RightPeekVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeekPoint_Statics::NewProp_LeftPeekVectorMax_MetaData[] = {
		{ "Category", "PeekPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PeekPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APeekPoint_Statics::NewProp_LeftPeekVectorMax = { "LeftPeekVectorMax", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APeekPoint, LeftPeekVectorMax), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APeekPoint_Statics::NewProp_LeftPeekVectorMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::NewProp_LeftPeekVectorMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeekPoint_Statics::NewProp_RightPeekVectorMax_MetaData[] = {
		{ "Category", "PeekPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PeekPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APeekPoint_Statics::NewProp_RightPeekVectorMax = { "RightPeekVectorMax", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APeekPoint, RightPeekVectorMax), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APeekPoint_Statics::NewProp_RightPeekVectorMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::NewProp_RightPeekVectorMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeekPoint_Statics::NewProp_PeekPositionVector_MetaData[] = {
		{ "Category", "PeekPoint" },
		{ "ModuleRelativePath", "PeekPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APeekPoint_Statics::NewProp_PeekPositionVector = { "PeekPositionVector", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APeekPoint, PeekPositionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APeekPoint_Statics::NewProp_PeekPositionVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::NewProp_PeekPositionVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeekPoint_Statics::NewProp_Sphere_MetaData[] = {
		{ "Category", "PeekPoint" },
		{ "Comment", "//\x09Used for visualizing where the peek point is. This will always be hidden in game\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PeekPoint.h" },
		{ "ToolTip", "Used for visualizing where the peek point is. This will always be hidden in game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APeekPoint_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APeekPoint, Sphere), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APeekPoint_Statics::NewProp_Sphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::NewProp_Sphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeekPoint_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "PeekPoint" },
		{ "ModuleRelativePath", "PeekPoint.h" },
	};
#endif
	void Z_Construct_UClass_APeekPoint_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((APeekPoint*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APeekPoint_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APeekPoint), &Z_Construct_UClass_APeekPoint_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_APeekPoint_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APeekPoint_Statics::NewProp_MinDot_MetaData[] = {
		{ "Category", "PeekPoint" },
		{ "ModuleRelativePath", "PeekPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APeekPoint_Statics::NewProp_MinDot = { "MinDot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APeekPoint, MinDot), METADATA_PARAMS(Z_Construct_UClass_APeekPoint_Statics::NewProp_MinDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::NewProp_MinDot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APeekPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APeekPoint_Statics::NewProp_PeekRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APeekPoint_Statics::NewProp_LeftPeekVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APeekPoint_Statics::NewProp_RightPeekVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APeekPoint_Statics::NewProp_LeftPeekVectorMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APeekPoint_Statics::NewProp_RightPeekVectorMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APeekPoint_Statics::NewProp_PeekPositionVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APeekPoint_Statics::NewProp_Sphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APeekPoint_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APeekPoint_Statics::NewProp_MinDot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APeekPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APeekPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APeekPoint_Statics::ClassParams = {
		&APeekPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APeekPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APeekPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APeekPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APeekPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APeekPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APeekPoint, 3932615102);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<APeekPoint>()
	{
		return APeekPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeekPoint(Z_Construct_UClass_APeekPoint, &APeekPoint::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("APeekPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeekPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
