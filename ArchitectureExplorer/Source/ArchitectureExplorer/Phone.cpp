// Fill out your copyright notice in the Description page of Project Settings.


#include "Phone.h"

APhone::APhone()
{
	AGrabbable::ItemGripSize = 55.f;
	AGrabbable::ValidOneHandHandHolds.SetNum(1);
	AGrabbable::ValidOneHandHandHolds.Insert(1, 0);
}

void APhone::BeginPlay()
{
	Super::BeginPlay();
}
