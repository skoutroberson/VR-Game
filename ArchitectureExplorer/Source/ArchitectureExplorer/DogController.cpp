// Fill out your copyright notice in the Description page of Project Settings.


#include "DogController.h"
#include "Dog.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

void ADogController::BeginPlay()
{
	Super::BeginPlay();

	Dog = Cast<ADog>(UGameplayStatics::GetActorOfClass(GetWorld(), ADog::StaticClass()));
}

void ADogController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	switch(Result.Code)
	{
	case EPathFollowingResult::Success:
		UE_LOG(LogTemp, Warning, TEXT("DOG PATH SUCCEEDED"));
			break;
	case EPathFollowingResult::Aborted:
		if (Result.IsSuccess())
		{
			UE_LOG(LogTemp, Warning, TEXT("DOG PATH ABORTED AND SUCCEEDED"));
		}
		else if (Result.IsFailure())
		{
			UE_LOG(LogTemp, Warning, TEXT("DOG PATH ABORTED AND FAILED"));
			if (Dog->State == DogState::STATE_FETCHING)
			{
				// play sad sound
				Dog->State = DogState::STATE_SITTINGDOWN;
			}
			else
			{
				// play sad sound
				Dog->DropBall();
			}
		}
		else if (Result.IsInterrupted())
		{
			UE_LOG(LogTemp, Warning, TEXT("DOG PATH ABORTED BECAUSE OF INTERRUPTION"));
		}
		break;
	case EPathFollowingResult::Blocked:
		UE_LOG(LogTemp, Warning, TEXT("DOG PATH BLOCKED"));
		break;
	case EPathFollowingResult::Invalid:
		UE_LOG(LogTemp, Warning, TEXT("DOG MOVE REQUEST INVALID"));
		if (Dog->State == DogState::STATE_FETCHING)
		{
			// play sad sound
			Dog->State = DogState::STATE_SITTINGDOWN;
		}
		else
		{
			// play sad sound
			Dog->DropBall();
		}
		break;
	case EPathFollowingResult::OffPath:
		UE_LOG(LogTemp, Warning, TEXT("DOG IS NOT ON NAV MESH :("));
		break;
	}
}