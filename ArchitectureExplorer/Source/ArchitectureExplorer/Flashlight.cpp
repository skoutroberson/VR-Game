// Fill out your copyright notice in the Description page of Project Settings.


#include "Flashlight.h"
#include "Grabbable.h"
#include "Kismet/GameplayStatics.h"

AFlashlight::AFlashlight()
{
	AGrabbable::ItemGripSize = 55.f;
}

void AFlashlight::BeginPlay()
{
	Super::BeginPlay();

	LM = Cast<ALightManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ALightManager::StaticClass()));
}

void AFlashlight::TurnOn()
{
	LM->TurnOn(FString("BP_Flashlight"), 5000.f, 200.f);
	bOn = true;
}

void AFlashlight::TurnOff()
{
	LM->TurnOff(FString("BP_Flashlight"), 0, 0);
	bOn = false;
}
