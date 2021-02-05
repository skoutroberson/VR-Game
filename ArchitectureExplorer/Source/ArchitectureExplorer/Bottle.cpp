// Fill out your copyright notice in the Description page of Project Settings.


#include "Bottle.h"
#include "Grabbable.h"

ABottle::ABottle()
{
	AGrabbable::ItemGripSize = 55.f;
}

void ABottle::NotifyErrolCharacter()
{
	UE_LOG(LogTemp, Warning, TEXT("BOTTLEBREAK!"));
}
