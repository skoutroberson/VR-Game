// Fill out your copyright notice in the Description page of Project Settings.


#include "ErrolController.h"
#include "ErrolCharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Engine/World.h"

void AErrolController::BeginPlay()
{
	Super::BeginPlay();
}

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
		ErrolCharacter->EnterLookAroundState();
		GetWorldTimerManager().SetTimer(LookAroundTimerHandle, this, &AErrolController::LookAroundTimerCompleted, LookAroundTimerRate, true);
		break;
	case ErrolState::STATE_CHASE:
		UE_LOG(LogTemp, Warning, TEXT("Chase Result: %s"), *Result.ToString());
		//ErrolCharacter->ExitChaseState();
		//ErrolCharacter->EnterKillState();
		//UE_LOG(LogTemp, Warning, TEXT("Result: %s"), *Result.ToString());
		break;
	case ErrolState::STATE_INVESTIGATE:
		UE_LOG(LogTemp, Warning, TEXT("IM INVESTIGATING THE NOISE!"));
		break;
	}
}

void AErrolController::SetLookAroundTimerRate(float Rate)
{
	LookAroundTimerRate = Rate;
}

// I need to add a looking around animation to play while this timer is running.
void AErrolController::InitializeLookAroundTimer()
{
	ErrolCharacter = Cast<AErrolCharacter>(GetPawn());
	GetWorld()->GetTimerManager().SetTimer(LookAroundTimerHandle, this, &AErrolController::LookAroundTimerCompleted, LookAroundTimerRate, true, 0.2f);
	GetWorldTimerManager().PauseTimer(LookAroundTimerHandle);
}

// Stop looking around and patrol again
void AErrolController::LookAroundTimerCompleted()
{
	GetWorldTimerManager().ClearTimer(LookAroundTimerHandle);
	ErrolCharacter->ExitLookAroundState();
	//GetWorldTimerManager().PauseTimer(LookAroundTimerHandle);
	ErrolCharacter->GoToRandomWaypoint();
}

void AErrolController::StopTimers()
{
	GetWorldTimerManager().ClearTimer(LookAroundTimerHandle);
}