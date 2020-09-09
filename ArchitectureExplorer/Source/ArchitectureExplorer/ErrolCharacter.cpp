// Fill out your copyright notice in the Description page of Project Settings.


#include "ErrolCharacter.h"

// Sets default values
AErrolCharacter::AErrolCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

}

// Called to bind functionality to input
void AErrolCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

