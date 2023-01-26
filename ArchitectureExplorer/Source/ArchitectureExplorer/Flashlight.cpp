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
	LM->TurnOn(FString("BP_Flashlight2_2"), 5000.f, 200.f);
	PlayButtonPressAudio();
	//ButtonPressAudio->Play();
	bOn = true;
}

void AFlashlight::TurnOff()
{
	LM->TurnOff(FString("BP_Flashlight2_2"), 0, 0);
	PlayButtonPressAudio();
	bOn = false;
}

void AFlashlight::PressButton()
{
	PlayButtonPressAudio();
	if (bOn)
	{
		LM->EditLight(this, 0, 0);
		bOn = false;
	}
	else
	{
		LM->EditLight(this, 2000.f, 200.f);
		//LM->TurnOn(FString("BP_Flashlight2_2"), 5000.f, 200.f);
		bOn = true;
	}
}
