// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabbable.h"

// Sets default values
AGrabbable::AGrabbable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AGrabbable::BeginPlay()
{
	Super::BeginPlay();

	if (bTwoHanded)
	{
		UE_LOG(LogTemp, Warning, TEXT("POOP"));
		HandHold1 = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), TEXT("1"))[0]);
		HandHold2 = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), TEXT("2"))[0]);
		HandHoldOffset1 = GetActorLocation() - HandHold1->GetComponentLocation();
		HandHoldOffset2 = GetActorLocation() - HandHold2->GetComponentLocation();
	}
}

void AGrabbable::Tick(float DeltaTime)
{
}

void AGrabbable::Gripped(int HandHoldNum)
{
}

void AGrabbable::Released(int HandHoldNum)
{
}

// Called every frame
/*
void AGrabbable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *GetName());
}
*/
void AGrabbable::Grab()
{

}

