// Fill out your copyright notice in the Description page of Project Settings.


#include "Flashlight.h"
#include "Grabbable.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"
#include "Components/StaticMeshComponent.h"

AFlashlight::AFlashlight()
{
	AGrabbable::ItemGripSize = 55.f;
	AGrabbable::ValidOneHandHandHolds.SetNum(1);
	AGrabbable::ValidOneHandHandHolds.Insert(1, 0);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
	ButtonPressAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("Button Press"));
	ButtonPressAudio->SetupAttachment(Mesh);
}

void AFlashlight::BeginPlay()
{
	Super::BeginPlay();

	LM = Cast<ALightManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ALightManager::StaticClass()));
}

void AFlashlight::TurnOn()
{
	LM->TurnOn(FString("BP_Flashlight"), 5000.f, 200.f);
	ButtonPressAudio->Play();
	bOn = true;
}

void AFlashlight::TurnOff()
{
	LM->TurnOff(FString("BP_Flashlight"), 0, 0);
	ButtonPressAudio->Play();
	bOn = false;
}
