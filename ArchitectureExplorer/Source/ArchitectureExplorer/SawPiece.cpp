// Fill out your copyright notice in the Description page of Project Settings.


#include "SawPiece.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Flashlight.h"
#include "DrawDebugHelpers.h"

// Sets default values
ASawPiece::ASawPiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SetRootComponent(SphereCollision);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(SphereCollision);

	State = SawPieceState::STATE_WAITING;
}

// Called when the game starts or when spawned
void ASawPiece::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();
	
	Flashlight = UGameplayStatics::GetActorOfClass(World, AFlashlight::StaticClass());
	FLC = Cast<USceneComponent>(Flashlight->GetComponentsByTag(UStaticMeshComponent::StaticClass(), FName("Volumetric"))[0]);
}

// Called every frame
void ASawPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ASawPiece::FlashlightLOS()
{
	FHitResult HitResult;
	const FVector AL = GetActorLocation();
	const FVector FLL = FLC->GetComponentLocation();
	
	bool bTrace = World->LineTraceSingleByChannel(HitResult, FLL, AL, ECollisionChannel::ECC_Camera);

	if (bTrace)
	{
		//DrawDebugSphere(World, HitResult.ImpactPoint, 10.f, 20, FColor::Cyan, true);
		//UE_LOG(LogTemp, Warning, TEXT("LOS Hit: %s"), *HitResult.GetActor()->GetName());
		const float DistSquared = FVector::DistSquared(HitResult.ImpactPoint, AL);
		if (DistSquared < 120.f)
		{
			return true;
		}
	}
	else
	{
		return true;
	}

	return false;
}

