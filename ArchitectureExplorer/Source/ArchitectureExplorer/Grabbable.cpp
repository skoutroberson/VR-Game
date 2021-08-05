// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabbable.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "VRCharacter.h"

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

	
	HandHold1 = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), TEXT("1"))[0]);
	HandHoldOffset1 = GetActorLocation() - HandHold1->GetComponentLocation();

	if (GetComponentsByTag(USceneComponent::StaticClass(), TEXT("2")).Num() > 0)
	{
		HandHold2 = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), TEXT("2"))[0]);
	}
	if (HandHold2 != nullptr)
	{
		HandHoldOffset2 = GetActorLocation() - HandHold2->GetComponentLocation();
	}

	AActor* VRChar = UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass());
	TArray<UActorComponent*> Meshes;
	Meshes = GetComponentsByClass(UMeshComponent::StaticClass());
	for (auto m : Meshes)
	{
		Cast<UPrimitiveComponent>(m)->MoveIgnoreActors.Push(VRChar);
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

