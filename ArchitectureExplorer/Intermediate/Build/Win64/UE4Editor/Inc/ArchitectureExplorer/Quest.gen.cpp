// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchitectureExplorer/Quest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}
// Cross Module References
	ARCHITECTUREEXPLORER_API UEnum* Z_Construct_UEnum_ArchitectureExplorer_EQuestCompletion();
	UPackage* Z_Construct_UPackage__Script_ArchitectureExplorer();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	ARCHITECTUREEXPLORER_API UClass* Z_Construct_UClass_UQuest();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_State_NoRegister();
	STATEMACHINE_API UClass* Z_Construct_UClass_USM_InputAtom_NoRegister();
// End Cross Module References
	static UEnum* EQuestCompletion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArchitectureExplorer_EQuestCompletion, Z_Construct_UPackage__Script_ArchitectureExplorer(), TEXT("EQuestCompletion"));
		}
		return Singleton;
	}
	template<> ARCHITECTUREEXPLORER_API UEnum* StaticEnum<EQuestCompletion>()
	{
		return EQuestCompletion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestCompletion(EQuestCompletion_StaticEnum, TEXT("/Script/ArchitectureExplorer"), TEXT("EQuestCompletion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArchitectureExplorer_EQuestCompletion_Hash() { return 2868669837U; }
	UEnum* Z_Construct_UEnum_ArchitectureExplorer_EQuestCompletion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArchitectureExplorer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestCompletion"), 0, Get_Z_Construct_UEnum_ArchitectureExplorer_EQuestCompletion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestCompletion::EQC_NotStarted", (int64)EQuestCompletion::EQC_NotStarted },
				{ "EQuestCompletion::EQC_Started", (int64)EQuestCompletion::EQC_Started },
				{ "EQuestCompletion::EQC_Succeeded", (int64)EQuestCompletion::EQC_Succeeded },
				{ "EQuestCompletion::EQC_Failed", (int64)EQuestCompletion::EQC_Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EQC_Failed.Name", "EQuestCompletion::EQC_Failed" },
				{ "EQC_NotStarted.Name", "EQuestCompletion::EQC_NotStarted" },
				{ "EQC_Started.Name", "EQuestCompletion::EQC_Started" },
				{ "EQC_Succeeded.Name", "EQuestCompletion::EQC_Succeeded" },
				{ "ModuleRelativePath", "Quest.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
				nullptr,
				"EQuestCompletion",
				"EQuestCompletion",
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
	void UQuest::StaticRegisterNativesUQuest()
	{
	}
	UClass* Z_Construct_UClass_UQuest_NoRegister()
	{
		return UQuest::StaticClass();
	}
	struct Z_Construct_UClass_UQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_QuestName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestStateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestStateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInputBlackList_MetaData[];
#endif
		static void NewProp_bInputBlackList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInputBlackList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchitectureExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Quest.h" },
		{ "ModuleRelativePath", "Quest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// The name of the quest.\n" },
		{ "ModuleRelativePath", "Quest.h" },
		{ "ToolTip", "The name of the quest." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, QuestName), METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_QuestStateMachine_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// If this machine accepts our QuestActivities log, the quest is successful.\n" },
		{ "ModuleRelativePath", "Quest.h" },
		{ "ToolTip", "If this machine accepts our QuestActivities log, the quest is successful." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_QuestStateMachine = { "QuestStateMachine", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, QuestStateMachine), Z_Construct_UClass_USM_State_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_QuestStateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_QuestStateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_bInputBlackList_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// If true, the InputList is a blacklist. Otherwise, it's a whitelist.\n" },
		{ "ModuleRelativePath", "Quest.h" },
		{ "ToolTip", "If true, the InputList is a blacklist. Otherwise, it's a whitelist." },
	};
#endif
	void Z_Construct_UClass_UQuest_Statics::NewProp_bInputBlackList_SetBit(void* Obj)
	{
		((UQuest*)Obj)->bInputBlackList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_bInputBlackList = { "bInputBlackList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UQuest), &Z_Construct_UClass_UQuest_Statics::NewProp_bInputBlackList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_bInputBlackList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_bInputBlackList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_InputList_Inner = { "InputList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USM_InputAtom_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_InputList_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// The blacklist/whitelist (depending on bBlackList) used to filter InputAtoms this Quest recognizes.\n" },
		{ "ModuleRelativePath", "Quest.h" },
		{ "ToolTip", "The blacklist/whitelist (depending on bBlackList) used to filter InputAtoms this Quest recognizes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_InputList = { "InputList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, InputList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_InputList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_InputList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_QuestStateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_bInputBlackList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_InputList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_InputList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuest_Statics::ClassParams = {
		&UQuest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuest, 1337036457);
	template<> ARCHITECTUREEXPLORER_API UClass* StaticClass<UQuest>()
	{
		return UQuest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuest(Z_Construct_UClass_UQuest, &UQuest::StaticClass, TEXT("/Script/ArchitectureExplorer"), TEXT("UQuest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
