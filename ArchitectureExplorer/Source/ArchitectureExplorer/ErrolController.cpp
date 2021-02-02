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

	switch (ErrolCharacter->State)
	{
	case ErrolState::STATE_PATROL:
		UE_LOG(LogTemp, Warning, TEXT("HERE MOTHAFUCKA!"));
		GetWorldTimerManager().SetTimer(LookAroundTimerHandle, this, &AErrolController::LookAroundTimerCompleted, LookAroundTimerRate, true);
		break;
	}
}

void AErrolController::SetLookAroundTimerRate(float Rate)
{
	LookAroundTimerRate = Rate;
}

void AErrolController::InitializeLookAroundTimer()
{
	ErrolCharacter = Cast<AErrolCharacter>(GetPawn());
	SetLookAroundTimerRate(3.5f);
	GetWorld()->GetTimerManager().SetTimer(LookAroundTimerHandle, this, &AErrolController::LookAroundTimerCompleted, LookAroundTimerRate, true, 0.2f);
	GetWorldTimerManager().PauseTimer(LookAroundTimerHandle);
}

void AErrolController::LookAroundTimerCompleted()
{
	UE_LOG(LogTemp, Warning, TEXT("TImer"));
	GetWorldTimerManager().ClearTimer(LookAroundTimerHandle);
	//GetWorldTimerManager().PauseTimer(LookAroundTimerHandle);
	ErrolCharacter->GoToRandomWaypoint();
}