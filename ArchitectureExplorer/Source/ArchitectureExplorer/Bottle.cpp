// Fill out your copyright notice in the Description page of Project Settings.


#include "Bottle.h"
#include "Grabbable.h"
#include "ErrolCharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

ABottle::ABottle()
{
	PrimaryActorTick.bCanEverTick = true;
	
	AGrabbable::ItemGripSize = 55.f;
}

void ABottle::BeginPlay()
{
	Super::BeginPlay();
	Errol = Cast<AErrolCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AErrolCharacter::StaticClass()));
	if (Errol == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Errol cast failed in Bottle.cpp!"));
	}
}

void ABottle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("SLFJSL"));
}

void ABottle::NotifyErrolCharacter()
{
	Errol->HearSound(this, 3);
	UE_LOG(LogTemp, Warning, TEXT("BOTTLEBREAK!"));
}
