// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyCan.h"

// Sets default values
AKeyCan::AKeyCan()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
}

// Called when the game starts or when spawned
void AKeyCan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeyCan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AKeyCan::AttachKey(ADoorKey * Key)
{
	if (Key != nullptr)
	{
		bHasKey = true;
		const FAttachmentTransformRules ATR = FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true);
		Key->AttachToActor(this, ATR);
		Key->AddActorWorldOffset(FVector(0, 0, 0.5f));
		UE_LOG(LogTemp, Warning, TEXT("AttachKey"));
		// set relative location/rotation so it is laying in the can
	}
}

