// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/SawPiece.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSawPiece() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_SawPieceState();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ASawPiece_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_ASawPiece();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static UEnum* SawPieceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_SawPieceState, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("SawPieceState"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<SawPieceState>()
	{
		return SawPieceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SawPieceState(SawPieceState_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("SawPieceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_SawPieceState_Hash() { return 3269008778U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_SawPieceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SawPieceState"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_SawPieceState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SawPieceState::STATE_WAITING", (int64)SawPieceState::STATE_WAITING },
				{ "SawPieceState::STATE_UPDATING_FLDOT", (int64)SawPieceState::STATE_UPDATING_FLDOT },
				{ "SawPieceState::STATE_FADING_OUT", (int64)SawPieceState::STATE_FADING_OUT },
				{ "SawPieceState::STATE_FADING_IN", (int64)SawPieceState::STATE_FADING_IN },
				{ "SawPieceState::STATE_FADED_IN", (int64)SawPieceState::STATE_FADED_IN },
				{ "SawPieceState::STATE_FOUND", (int64)SawPieceState::STATE_FOUND },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "SawPiece.h" },
				{ "STATE_FADED_IN.DisplayName", "FadedIn" },
				{ "STATE_FADED_IN.Name", "SawPieceState::STATE_FADED_IN" },
				{ "STATE_FADING_IN.DisplayName", "FadingIn" },
				{ "STATE_FADING_IN.Name", "SawPieceState::STATE_FADING_IN" },
				{ "STATE_FADING_OUT.DisplayName", "FadingOut" },
				{ "STATE_FADING_OUT.Name", "SawPieceState::STATE_FADING_OUT" },
				{ "STATE_FOUND.DisplayName", "Found" },
				{ "STATE_FOUND.Name", "SawPieceState::STATE_FOUND" },
				{ "STATE_UPDATING_FLDOT.DisplayName", "UpdatingFLDot" },
				{ "STATE_UPDATING_FLDOT.Name", "SawPieceState::STATE_UPDATING_FLDOT" },
				{ "STATE_WAITING.DisplayName", "Waiting" },
				{ "STATE_WAITING.Name", "SawPieceState::STATE_WAITING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"SawPieceState",
				"SawPieceState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ASawPiece::execFlashlightLOS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FlashlightLOS();
		P_NATIVE_END;
	}
	void ASawPiece::StaticRegisterNativesASawPiece()
	{
		UClass* Class = ASawPiece::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlashlightLOS", &ASawPiece::execFlashlightLOS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics
	{
		struct SawPiece_eventFlashlightLOS_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SawPiece_eventFlashlightLOS_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SawPiece_eventFlashlightLOS_Parms), &Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns true if the saw piece and flashlight have line of sight of eachother.\n" },
		{ "ModuleRelativePath", "SawPiece.h" },
		{ "ToolTip", "Returns true if the saw piece and flashlight have line of sight of eachother." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASawPiece, nullptr, "FlashlightLOS", nullptr, nullptr, sizeof(SawPiece_eventFlashlightLOS_Parms), Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASawPiece_FlashlightLOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASawPiece_FlashlightLOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASawPiece_NoRegister()
	{
		return ASawPiece::StaticClass();
	}
	struct Z_Construct_UClass_ASawPiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASawPiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASawPiece_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASawPiece_FlashlightLOS, "FlashlightLOS" }, // 511758272
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASawPiece_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SawPiece.h" },
		{ "ModuleRelativePath", "SawPiece.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASawPiece_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "SawPiece" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SawPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASawPiece_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASawPiece, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASawPiece_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASawPiece_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASawPiece_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "Category", "SawPiece" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SawPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASawPiece_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASawPiece, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASawPiece_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASawPiece_Statics::NewProp_SphereCollision_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASawPiece_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASawPiece_Statics::NewProp_State_MetaData[] = {
		{ "Category", "SawPiece" },
		{ "ModuleRelativePath", "SawPiece.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASawPiece_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASawPiece, State), Z_Construct_UEnum_ArchitectureExplorer_SawPieceState, METADATA_PARAMS(Z_Construct_UClass_ASawPiece_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASawPiece_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASawPiece_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASawPiece_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASawPiece_Statics::NewProp_SphereCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASawPiece_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASawPiece_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASawPiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASawPiece>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASawPiece_Statics::ClassParams = {
		&ASawPiece::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASawPiece_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASawPiece_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASawPiece_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASawPiece_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASawPiece()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASawPiece_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASawPiece, 2766452460);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<ASawPiece>()
	{
		return ASawPiece::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASawPiece(Z_Construct_UClass_ASawPiece, &ASawPiece::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("ASawPiece"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASawPiece);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
