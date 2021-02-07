// Fill out your copyright notice in the Description page of Project Settings.


#include "Bottle.h"
#include "Grabbable.h"
#include "ErrolCharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

ABottle::ABottle()
{
	AGrabbable::ItemGripSize = 55.f;
}

void ABottle::BeginPlay()
{
	Errol = Cast<AErrolCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AErrolCharacter::StaticClass()));
	if (Errol == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Errol cast failed in Bottle.cpp!"));
	}
}

void ABottle::NotifyErrolCharacter()
{
	Errol->IHearABottleBreakHeHe(this);
	UE_LOG(LogTemp, Warning, TEXT("BOTTLEBREAK!"));
}
