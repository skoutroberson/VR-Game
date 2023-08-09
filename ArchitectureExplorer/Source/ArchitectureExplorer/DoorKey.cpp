// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorKey.h"
#include "HandController.h"

ADoorKey::ADoorKey()
{
	PrimaryActorTick.bCanEverTick = true;
	AGrabbable::ValidOneHandHandHolds.SetNum(1);
	AGrabbable::ValidOneHandHandHolds.Insert(1, 0);
}

void ADoorKey::BeginPlay()
{
	Super::BeginPlay();
}

void ADoorKey::DestroyKey()
{
	AHandController *HC = Cast<AHandController>(ControllingMC);
	HC->Release();
	this->Destroy();
	HC->Grip();
}
