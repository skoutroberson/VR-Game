// Fill out your copyright notice in the Description page of Project Settings.


#include "Chainsaw.h"
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/SkeletalMeshComponent.h"

AChainsaw::AChainsaw()
{
	AGrabbable::ItemGripSize = 58.f;
	AGrabbable::bTwoHanded = true;
	PrimaryActorTick.bCanEverTick = true;
}

void AChainsaw::BeginPlay()
{
	Super::BeginPlay();

	UActorComponent * AC = GetComponentByClass(UBoxComponent::StaticClass());
	BladeCollision = Cast<UBoxComponent>(AC);

	if (BladeCollision == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("BladeCollision cast failed in Chainsaw.cpp"));
	}

	// THESE TWO LINES NEED TO BE IN EVERY TWO HANDED GRABBABLE ACTOR
	AGrabbable::HandHold1 = Cast<USceneComponent>(GetComponentsByTag(UActorComponent::StaticClass(), TEXT("1"))[0]);
	AGrabbable::HandHold2 = Cast<USceneComponent>(GetComponentsByTag(UActorComponent::StaticClass(), TEXT("2"))[0]);

	SkeletalMesh = Cast<USkeletalMeshComponent>(GetComponentByClass(USkeletalMeshComponent::StaticClass()));

	//BladeCollision->OnComponentBeginOverlap.AddDynamic(this, &AChainsaw::BladeBeginOverlap);

}

void AChainsaw::Tick(float DeltaTime)
{
	if (AGrabbable::bRotateTwoHand)
	{
		const FVector SMFV = SkeletalMesh->GetForwardVector();
		const FVector MC1L = AGrabbable::MotionController1->GetActorLocation();
		const FVector MC2L = AGrabbable::MotionController2->GetActorLocation();
		const FVector MCDif = (MC1L - MC2L).GetSafeNormal();
		const float Angle = FMath::Acos(FVector::DotProduct(SMFV, MCDif));
		const FVector Axis = FVector::CrossProduct(SMFV, MCDif).GetSafeNormal();
		const FQuat DeltaRotation = FQuat(Axis, Angle);
		AddActorLocalRotation(DeltaRotation);
	}
}

void AChainsaw::BladeBeginOverlap(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlap Errol!"));
	DrawDebugSphere(GetWorld(), SweepResult.ImpactPoint, 5.f, 10.f, FColor::Cyan, true);
}
