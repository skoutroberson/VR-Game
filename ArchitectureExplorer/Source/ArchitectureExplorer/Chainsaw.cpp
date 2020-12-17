// Fill out your copyright notice in the Description page of Project Settings.


#include "Chainsaw.h"
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"

AChainsaw::AChainsaw()
{
	AGrabbable::ItemGripSize = 58.f;
}

void AChainsaw::BeginPlay()
{
	Super::BeginPlay();

	FString Name = GetComponentByClass(UBoxComponent::StaticClass())->GetName();
	UE_LOG(LogTemp, Warning, TEXT("Name: %s"), *Name);

	UActorComponent * AC = GetComponentByClass(UBoxComponent::StaticClass());
	BladeCollision = Cast<UBoxComponent>(AC);

	if (BladeCollision == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("BladeCollision cast failed in Chainsaw.cpp"));
	}

	BladeCollision->OnComponentBeginOverlap.AddDynamic(this, &AChainsaw::BladeBeginOverlap);

}

void AChainsaw::BladeBeginOverlap(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlap Errol!"));
	DrawDebugSphere(GetWorld(), SweepResult.ImpactPoint, 5.f, 10.f, FColor::Cyan, true);
}
