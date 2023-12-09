// Fill out your copyright notice in the Description page of Project Settings.


#include "Dog.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "VRCharacter.h"

// Sets default values
ADog::ADog()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	State = DogState::STATE_SITTING;
	//SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
}

// Called when the game starts or when spawned
void ADog::BeginPlay()
{
	Super::BeginPlay();

	// set ball
	TArray<AActor*> Balls;
	UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), ABall::StaticClass(), FName("Dog"), Balls);
	Ball = Cast<ABall>(Balls[0]);

	Player = UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass());
}

// Called every frame
void ADog::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (State)
	{
	case DogState::STATE_FETCHING:

		if (!bEndGame)
		{
			if (!bRanTowardsHouse && Fetches > 1)
			{
				CheckBallDistance();
			}
		}
		ShouldPickUpBall();
		//RotateToFaceBall(DeltaTime);
		break;
	case DogState::STATE_RETURNING:
		ShouldDropBall();
		break;
	case DogState::STATE_SITTING:
		//RotateToFacePlayer();
		if (bFetchWhenReady)
		{
			FetchWhenReady();
		}
		// ShouldFetchBall()
		break;
	case DogState::STATE_PICKUP:
		// check ball distance,
		CheckPickupBallDistance();
		//Rotate to face ball
		//UE_LOG(LogTemp, Warning, TEXT("RotateToFaceBall"));
		RotateToFaceBall(DeltaTime);
		break;
	}

}

void ADog::FetchWhenReady()
{
	// fetch ball if the ball is > distance away from player
	const float d = FVector::Dist(Ball->GetActorLocation(), Player->GetActorLocation());

	if (d > FetchWhenReadyDistance)
	{
		FetchBall();
	}
}

void ADog::ShouldPickUpBall()
{
	// if close to ball then change state to STATE_PICKUP
	// slow down move speed
	const float Distance = FVector::Distance(GetActorLocation(), Ball->GetActorLocation());
	
	if (bWantsToFetch && !bRanTowardsHouse && Distance < PickupBallDistance)
	{
		Ball->bBeingFetched = true;
		GetController()->StopMovement();
		EnableAnimNotify();
		State = DogState::STATE_PICKUP;
		const FVector NewVelocity = Ball->GetVelocity() * 0.33f;
		Cast<UPrimitiveComponent>(Ball->GetRootComponent())->SetPhysicsLinearVelocity(NewVelocity);
	}
}

void ADog::ShouldDropBall()
{
	const float Distance = FVector::Distance(GetActorLocation(), Player->GetActorLocation());
	if (Distance < 150.f)
	{
		DropBall();
	}
}

void ADog::DropBall()
{
	//UE_LOG(LogTemp, Warning, TEXT("Drop Ball"))
	GetController()->StopMovement();
	State = DogState::STATE_SITTINGDOWN;
	WaitAndDropBall();
	
	
	/*
	UPrimitiveComponent *PrimBall = Cast<UPrimitiveComponent>(Ball->GetRootComponent());
	if (PrimBall != nullptr)
	{
		
		PrimBall->DetachFromParent(true);
		//Ball->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		PrimBall->SetSimulatePhysics(true);
		//PrimBall->AddImpulse(GetActorForwardVector() * 0.001f);
		Ball->bBeingFetched = false;
		
	}
	*/
}

void ADog::CheckBallDistance()
{
	const float Distance = FVector::Distance(Player->GetActorLocation(), Ball->GetActorLocation());

	if (State == DogState::STATE_FETCHING && Fetches == RunTowardsHouseFetches && Distance > 300.f)
	{
		// fling ball towards the house and make dog run and bark towards the house
		bRanTowardsHouse = true;
		RunTowardsHouse();
	}
}

void ADog::CheckPickupBallDistance()
{
	const float Distance = FVector::Distance(GetActorLocation(), Ball->GetActorLocation());
	//UE_LOG(LogTemp, Warning, TEXT("Distance: %f"), Distance);
	if (Distance > PickupBallDistance + 30.f)
	{
		State = DogState::STATE_FETCHING;
		DisableAnimNotify();
		MoveToBallCPP();
	}
}

void ADog::RotateToFaceBall(float DeltaTime)
{
	const FRotator AR = GetActorRotation();
	const FVector AL = GetActorLocation();
	const FVector FV = GetActorForwardVector();
	const FVector BL = Ball->GetActorLocation();
	FVector Disp = BL - AL;
	Disp.Z = 0;
	Disp = Disp.GetSafeNormal();
	const float Angle = -FMath::Acos(FVector::DotProduct(Disp, FV));
	FRotator NewRotation = AR;
	NewRotation.Yaw += Angle;

	SetActorRotation(FMath::RInterpConstantTo(AR, NewRotation, DeltaTime, 100.f));
	//SetActorRotation(NewRotation);
}

void ADog::RotateToFacePlayer()
{
}

void ADog::PickupBall()
{
	// attach ball to mouth socket
}

void ADog::FetchBall()
{
	if (State == DogState::STATE_SITTING)
	{
		State = DogState::STATE_STANDINGUP;
		Ball->bBeingFetched = true;

		if (!bEndGame)
		{
			Fetches = (Fetches > RunTowardsHouseFetches) ? RunTowardsHouseFetches : Fetches + 1;
		}

	}

}

