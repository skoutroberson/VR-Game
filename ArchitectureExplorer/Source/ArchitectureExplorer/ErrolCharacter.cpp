// Fill out your copyright notice in the Description page of Project Settings.


#include "ErrolCharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "AIController.h"
#include "AITypes.h"
#include "ErrolController.h"
#include "Perception/AIPerceptionComponent.h"
#include "VRCharacter.h"
#include "HandController.h"
#include "Camera/CameraComponent.h"
#include "DrawDebugHelpers.h"


// Sets default values
AErrolCharacter::AErrolCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	State = ErrolState::STATE_IDLE;
}

// Called when the game starts or when spawned
void AErrolCharacter::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();

	ErrolEye = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), FName("ET"))[0]);

	AErrolController * ErrolCon = Cast<AErrolController>(GetController());
	ErrolCon->InitializeLookAroundTimerhandle();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);
	GoToRandomWaypoint();

	GetWorld()->GetTimerManager().SetTimer(SetUpCanSeeHandle, this, &AErrolCharacter::InitializeCanSeeVariables, 1.f, false, 0.2f);
}

// Called every frame
void AErrolCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawDebugPoint(World, ErrolEye->GetComponentLocation(), 4.f, FColor::Red, false, DeltaTime*2.f, ESceneDepthPriorityGroup::SDPG_Foreground);

	switch (State)
	{
	case ErrolState::STATE_IDLE:
		break;
	case ErrolState::STATE_PATROL:
		break;
	case ErrolState::STATE_CHASE:
		break;
	}

}

// Called to bind functionality to input
void AErrolCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AErrolCharacter::Patrol()
{
	// Move to random places on Nav Mesh with distance from player based on a variable.
}

ATargetPoint * AErrolCharacter::GetRandomWaypoint()
{
	auto index = FMath::RandRange(0, Waypoints.Num() - 1);
	return Cast<ATargetPoint>(Waypoints[index]);
}

void AErrolCharacter::GoToRandomWaypoint()
{
	AAIController * AICon = Cast<AAIController>(GetController());
	AICon->MoveToActor(GetRandomWaypoint(), -1.f, true, true, true);
}

void AErrolCharacter::EnterIdleState()
{
}

void AErrolCharacter::EnterPatrolState()
{
}

void AErrolCharacter::EnterChaseState()
{
	State = ErrolState::STATE_CHASE;
}

void AErrolCharacter::InitializeCanSeeVariables()
{
	UE_LOG(LogTemp, Warning, TEXT("Initalize can see!"));
	Player = Cast<AActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass()));
	AVRCharacter * TempC = Cast<AVRCharacter>(Player);
	LHandController = Cast<AActor>(TempC->LeftController);
	RHandController = Cast<AActor>(TempC->RightController);
	UActorComponent * TempAC = Player->GetComponentByClass(UCameraComponent::StaticClass());
	PlayerCamera = Cast<UCameraComponent>(TempAC);
	InitializeChaseTimer();
}

void AErrolCharacter::InitializeChaseTimer()
{
	GetWorld()->GetTimerManager().SetTimer(ChaseTimerHandle, this, &AErrolCharacter::ShouldChase, CanSeeTimerRate, true, 1.0f);
}

void AErrolCharacter::ShouldChase()
{	
	FHitResult Outhit;
	FCollisionQueryParams EyeParams;
	EyeParams.AddIgnoredActor(this);
	EyeParams.AddIgnoredActor(Player);
	FVector EyeLocation = ErrolEye->GetComponentLocation();
	FVector CameraLocation = PlayerCamera->GetComponentLocation();
	FVector LHCLocation = LHandController->GetActorLocation();
	FVector RHCLocation = RHandController->GetActorLocation();
	bool Trace1 = World->LineTraceSingleByChannel(Outhit, EyeLocation, CameraLocation, ECollisionChannel::ECC_WorldDynamic, EyeParams);
	bool Trace2 = World->LineTraceSingleByChannel(Outhit, EyeLocation, LHCLocation, ECollisionChannel::ECC_WorldDynamic, EyeParams);
	bool Trace3 = World->LineTraceSingleByChannel(Outhit, EyeLocation, RHCLocation, ECollisionChannel::ECC_WorldDynamic, EyeParams);

	if (!Trace1)
	{
		UE_LOG(LogTemp, Warning, TEXT("I see camera!"));
		DrawDebugLine(World, EyeLocation, CameraLocation, FColor::Orange, false, World->DeltaTimeSeconds * 2.f);
	}
	if (!Trace2)
	{
		UE_LOG(LogTemp, Warning, TEXT("I see Left hand!"));
		DrawDebugLine(World, EyeLocation, LHCLocation, FColor::Red, false, World->DeltaTimeSeconds * 2.f);
	}
	if (!Trace3)
	{
		UE_LOG(LogTemp, Warning, TEXT("I see Right hand!"));
		DrawDebugLine(World, EyeLocation, RHCLocation, FColor::Cyan, false, World->DeltaTimeSeconds * 2.f);
	}
}
