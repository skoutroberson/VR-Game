// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SM_State.h"
#include "Engine/DataAsset.h"
#include "Quest.generated.h"

UENUM()
enum class EQuestCompletion : uint8
{
	EQC_NotStarted,
	EQC_Started,
	EQC_Succeeded,
	EQC_Failed
};

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API UQuest : public UDataAsset
{
	GENERATED_BODY()

public:

	// The name of the quest.
	UPROPERTY(EditAnywhere)
	FText QuestName;

	// If this machine accepts our QuestActivities log, the quest is successful.
	UPROPERTY(EditAnywhere)
	USM_State* QuestStateMachine;

	// If true, the InputList is a blacklist. Otherwise, it's a whitelist.
	UPROPERTY(EditAnywhere)
	uint32 bInputBlackList : 1;

	// The blacklist/whitelist (depending on bBlackList) used to filter InputAtoms this Quest recognizes.
	UPROPERTY(EditAnywhere)
	TArray<USM_InputAtom*> InputList;
	
};
