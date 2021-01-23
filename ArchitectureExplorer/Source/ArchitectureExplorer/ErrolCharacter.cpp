// Fill out your copyright notice in the Description page of Project Settings.


#include "ErrolCharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "AIController.h"
#include "AITypes.h"
#include "ErrolController.h"

// Sets default values
AErrolCharacter::AErrolCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	State = ErrolState::STATE_IDLE;
}

// Called when the game starts or when spawned
void AErrolCharacter::BeginPlay()
{
	Super::BeginPlay();

	AErrolController * ErrolCon = Cast<AErrolController>(GetController());
	ErrolCon->InitializeLookAroundTimerhandle(); 

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);
	GoToRandomWaypoint();
}

// Called every frame
void AErrolCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (State)
	{
	case ErrolState::STATE_IDLE:
		break;
	case ErrolState::STATE_PATROL:
		//	Patrol();
		break;
	}

}

// Called to bind functionality to input
void AErrolCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AErrolCharacter::Patrol()
{
	// Move to random places on Nav Mesh with distance from player based on a variable.
}

ATargetPoint * AErrolCharacter::GetRandomWaypoint()
{
	auto index = FMath::RandRange(0, Waypoints.Num() - 1);
	return Cast<ATargetPoint>(Waypoints[index]);
}

void AErrolCharacter::GoToRandomWaypoint()
{
	
	AAIController * AICon = Cast<AAIController>(GetController());
	AICon->MoveToActor(GetRandomWaypoint(), -1.f, true, true, true);
	
	//MoveToActor(GetRandomWaypoint());
	//AICon->OnMoveCompleted
}
