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
	LeftPeekVectorMax = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftPeekVectorMax"));
	RightPeekVectorMax = CreateDefaultSubobject<UArrowComponent>(TEXT("RightPeekVectorMax"));
	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));

	SetRootComponent(PeekRoot);

	LeftPeekVector->SetupAttachment(PeekRoot);
	RightPeekVector->SetupAttachment(PeekRoot);
	LeftPeekVectorMax->SetupAttachment(PeekRoot);
	RightPeekVectorMax->SetupAttachment(PeekRoot);
	Sphere->SetupAttachment(PeekRoot);

	LeftPeekVector->ArrowSize = 0.2f;
	RightPeekVector->ArrowSize = 0.2f;
	LeftPeekVector->SetArrowColor(FColor::Magenta);
	RightPeekVector->SetArrowColor(FColor::Cyan);

	LeftPeekVectorMax->ArrowSize = 0.1f;
	RightPeekVectorMax->ArrowSize = 0.1f;
	LeftPeekVectorMax->SetArrowColor(FColor::Yellow);
	RightPeekVectorMax->SetArrowColor(FColor::Yellow);

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
	HeadLocation = GetActorLocation() + GetActorUpVector() * 140.f - RightPeekVector->GetForwardVector() * 15.f - LeftPeekVector->GetForwardVector() * 15.f;

	//DrawDebugSphere(World, HeadLocation, 4.f, 20.f, FColor::Cyan, true);

	ErrolActor = UGameplayStatics::GetActorOfClass(World, AErrolCharacter::StaticClass());
	QueryParams.AddIgnoredActor(ErrolActor);
	//QueryParams.AddIgnoredActors(World->GetAllActorsOfClass)
	QueryParams.IgnoreMask = 1 << 5;
}

// Called every frame
void APeekPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool APeekPoint::IsValid(const float Threshold)
{
	bool bIsValid = false;
	const FVector CFV = PlayerCamera->GetForwardVector();
	const FVector CL = PlayerCamera->GetComponentLocation();
	const FVector AL = GetActorLocation();
	FVector Disp = CL - HeadLocation;

	if (Disp.Size2D() < 150.f)
	{
		return bIsValid;
	}

	FVector Dir = Disp.GetSafeNormal();
	const float DotLook = FVector::DotProduct(Dir, CFV);
	Disp = CL - AL;
	Disp.Z = 0;
	Dir = Disp.GetSafeNormal();
	const float DotLeft = FVector::DotProduct(Dir, LeftPeekVector->GetForwardVector());
	const float DotRight = FVector::DotProduct(Dir, RightPeekVector->GetForwardVector());

	bool bLeft = false;
	
	if (DotLeft > DotRight)
	{
		bLeft = true;
	}

	if (bLeft && DotLeft < MinDot && DotRight < 0)
	{
		return bIsValid;
	}
	else if (!bLeft && DotRight < MinDot && DotRight < 0)
	{
		return bIsValid;
	}

	//DrawDebugLine(World, HeadLocation, CL, FColor::Cyan, false, 1.1 * World->DeltaTimeSeconds);
	
	if (DotLook > Threshold)
	{
		FHitResult HitResult;
		
		const bool Trace = World->LineTraceSingleByChannel(HitResult, HeadLocation, CL, ECollisionChannel::ECC_WorldDynamic, QueryParams);
		if (!Trace || HitResult.Actor == Player) 
		{
			bIsValid = true;
			if (bLeft)
			{
				ErrolPeekSide = Left;
				PeekPositionVector = RightPeekVector->GetForwardVector();
			}
			else
			{
				ErrolPeekSide = Right;
				PeekPositionVector = LeftPeekVector->GetForwardVector();
			}
		}
	}

	return bIsValid;
}

void APeekPoint::InitializeHandControllerPointers()
{
	LeftHandController = Player->LeftController;
	RightHandController = Player->RightController;
	//	setting errol's state here for debug purposes
	//Cast<AErrolCharacter>(ErrolActor)->EnterPeekState();
}