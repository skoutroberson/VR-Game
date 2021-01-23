// Fill out your copyright notice in the Description page of Project Settings.


#include "ErrolController.h"
#include "ErrolCharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Engine/World.h"

ATargetPoint * AErrolController::GetRandomWaypoint()
{
	return nullptr;
}

void AErrolController::GoToRandomWaypoint()
{
}

void AErrolController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult & Result)
{
	Super::OnMoveCompleted(RequestID, Result);
	UE_LOG(LogTemp, Warning, TEXT("HERE MOTHAFUCKA!"));
	GetWorldTimerManager().ClearTimer(LookAroundTimerHandle);
	GetWorldTimerManager().SetTimer(LookAroundTimerHandle, this, &AErrolController::LookAroundTimerCompleted, LookAroundTimerRate, true);
	//GetWorldTimerManager().UnPauseTimer(LookAroundTimerHandle);
	// Depending on ErrolState. look around
	
}

void AErrolController::SetLookAroundTimerRate()
{
	LookAroundTimerRate = 3.5f;
}

void AErrolController::InitializeLookAroundTimerhandle()
{
	SetLookAroundTimerRate();
	GetWorld()->GetTimerManager().SetTimer(LookAroundTimerHandle, this, &AErrolController::LookAroundTimerCompleted, LookAroundTimerRate, true);
	GetWorldTimerManager().PauseTimer(LookAroundTimerHandle);
}

void AErrolController::LookAroundTimerCompleted()
{
	UE_LOG(LogTemp, Warning, TEXT("TImer"));
	AErrolCharacter * ErrolChar = Cast<AErrolCharacter>(GetPawn());
	GetWorldTimerManager().PauseTimer(LookAroundTimerHandle);
	ErrolChar->GoToRandomWaypoint();
}