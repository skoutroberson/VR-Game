// Fill out your copyright notice in the Description page of Project Settings.


#include "ErrolCharacter.h"

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
	// Move to random places on Nav Mesh with distance from player based on a value.
}