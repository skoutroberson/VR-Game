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
		ShouldPickUpBall();
		if (!bRanTowardsHouse && Fetches > 1)
		{
			CheckBallDistance();
		}
		break;
	case DogState::STATE_RETURNING:
		ShouldDropBall();
		break;
	case DogState::STATE_SITTING:
		//RotateToFacePlayer();
		break;
	}

}

void ADog::ShouldPickUpBall()
{
	// if close to ball then change state to STATE_PICKUP
	// slow down move speed
	const float Distance = FVector::Distance(GetActorLocation(), Ball->GetActorLocation());
	
	if (!bRanTowardsHouse && Distance < PickupBallDistance)
	{
		GetController()->StopMovement();
		State = DogState::STATE_PICKUP;
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
	UE_LOG(LogTemp, Warning, TEXT("Drop Ball"))
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

	if (State == DogState::STATE_FETCHING && Distance > 300.f)
	{
		// fling ball towards the house and make dog run and bark towards the house
		bRanTowardsHouse = true;
		RunTowardsHouse();
	}
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
	if (bWantsToFetch == true && State == DogState::STATE_SITTING)
	{
		State = DogState::STATE_STANDINGUP;
		Fetches = (Fetches > 2) ? 2 : Fetches + 1;
	}
}

