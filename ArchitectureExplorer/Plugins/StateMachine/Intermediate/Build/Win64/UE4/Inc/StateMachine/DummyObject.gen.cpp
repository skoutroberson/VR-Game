// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateMachine/Classes/DummyObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyObject() {}
// Cross Module References
	STATEMACHINE_API UClass* Z_Construct_UClass_UDummyObject_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_UDummyObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_StateMachine();
// End Cross Module References
	void UDummyObject::StaticRegisterNativesUDummyObject()
	{
	}
	UClass* Z_Construct_UClass_UDummyObject_NoRegister()
	{
		return UDummyObject::StaticClass();
	}
	struct Z_Construct_UClass_UDummyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDummyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StateMachine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDummyObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DummyObject.h" },
		{ "ModuleRelativePath", "Classes/DummyObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDummyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDummyObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDummyObject_Statics::ClassParams = {
		&UDummyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDummyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDummyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDummyObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDummyObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDummyObject, 4035161152);
	template<> STATEMACHINE_API UClass* StaticClass<UDummyObject>()
	{
		return UDummyObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDummyObject(Z_Construct_UClass_UDummyObject, &UDummyObject::StaticClass, TEXT("/Script/StateMachine"), TEXT("UDummyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDummyObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
