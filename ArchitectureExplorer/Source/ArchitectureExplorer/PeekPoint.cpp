// Fill out your copyright notice in the Description page of Project Settings.


#include "PeekPoint.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "VRCharacter.h"
#include "ErrolCharacter.h"
#include "DrawDebugHelpers.h"

// Sets default values
APeekPoint::APeekPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PeekRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PeekRoot"));
	LeftPeekVector = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftPeekVector"));
	RightPeekVector = CreateDefaultSubobject<UArrowComponent>(TEXT("RightPeekVector"));
	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));

	SetRootComponent(PeekRoot);

	LeftPeekVector->SetupAttachment(PeekRoot);
	RightPeekVector->SetupAttachment(PeekRoot);
	Sphere->SetupAttachment(PeekRoot);

	LeftPeekVector->ArrowSize = 0.2f;
	RightPeekVector->ArrowSize = 0.2f;
	LeftPeekVector->SetArrowColor(FColor::Magenta);
	RightPeekVector->SetArrowColor(FColor::Cyan);

	Sphere->SetHiddenInGame(true);
	Sphere->SetWorldScale3D(FVector(0.01f, 0.01f, 0.01f));
}

// Called when the game starts or when spawned
void APeekPoint::BeginPlay()
{
	Super::BeginPlay();
	
	World = GetWorld();
	Player = Cast<AVRCharacter>(UGameplayStatics::GetActorOfClass(World, AVRCharacter::StaticClass()));
	PlayerCamera = Cast<UCameraComponent>(Player->GetComponentByClass(UCameraComponent::StaticClass()));

	//	Initialize LeftHandController and RightHandController after they are spawned in
	World->GetTimerManager().SetTimer(InitializerHandle, this, &APeekPoint::InitializeHandControllerPointers, 0.1f, false, 0.2f);

	//HeadLocation = GetActorLocation() + GetActorUpVector() * 200.f + RightPeekVector->GetForwardVector() * 10.f + LeftPeekVector->GetForwardVector() * 10.f;
	HeadLocation = GetActorLocation() + GetActorUpVector() * 200.f - RightPeekVector->GetForwardVector() * 8.f - LeftPeekVector->GetForwardVector() * 8.f;

	DrawDebugSphere(World, HeadLocation, 4.f, 20.f, FColor::Cyan, true);

	ErrolActor = UGameplayStatics::GetActorOfClass(World, AErrolCharacter::StaticClass());
	QueryParams.AddIgnoredActor(ErrolActor);
}

// Called every frame
void APeekPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool APeekPoint::IsValid(const float Threshold)
{
	const FVector CFV = PlayerCamera->GetForwardVector();
	const FVector CL = PlayerCamera->GetComponentLocation();
	const FVector Disp = CL - HeadLocation;
	const float Magnitude = Disp.Size();
	const FVector Dir = Disp.GetSafeNormal();
	const float Dot = FVector::DotProduct(Disp, CFV);

	DrawDebugLine(World, HeadLocation, CL, FColor::Cyan, false, 1.1 * World->DeltaTimeSeconds);
	
	bool bIsValid = false;
	if (Dot > Threshold)
	{
		FHitResult HitResult;
		
		const bool Trace = World->LineTraceSingleByChannel(HitResult, HeadLocation, CL, ECollisionChannel::ECC_PhysicsBody, QueryParams);
		if (Trace && HitResult.Actor->ActorHasTag(FName("Player"))) 
		{
			bIsValid = true;
		}
	}

	return bIsValid;
}

void APeekPoint::InitializeHandControllerPointers()
{
	LeftHandController = Player->LeftController;
	RightHandController = Player->RightController;
	//	setting errol's state here for debug purposes
	Cast<AErrolCharacter>(ErrolActor)->EnterPeekState();
}