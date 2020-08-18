// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "MotionControllerComponent.h"
#include "UObject/NameTypes.h"
#include "DrawDebugHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "HandController.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DoorRoot"));
	SetRootComponent(DoorRoot);
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();

	TArray<UStaticMeshComponent*> StaticComps;
	GetComponents<UStaticMeshComponent>(StaticComps);

	DoorMesh = StaticComps[0];
	
	//DrawDebugLine(GetWorld(), DoorMesh->GetComponentLocation(), DoorMesh->GetComponentLocation() + DoorMesh->GetForwardVector() * 100.f, FColor::Green, true);
	//DrawDebugLine(GetWorld(), DoorMesh->GetComponentLocation(), DoorMesh->GetComponentLocation() + DoorMesh->GetForwardVector().RotateAngleAxis(-90.f, DoorMesh->GetUpVector()) * 100.f, FColor::Red, true);

}
// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsBeingUsed)
	{
		UseDoor(DeltaTime);
	}
}

void ADoor::UseDoor(float DeltaTime)
{
	//UE_LOG(LogTemp, Warning, TEXT("%f"), FVector(LastHCLocation - HandController->GetActorLocation()).Size());

	FVector HCDelta = LastHCLocation - HandController->GetActorLocation();
	FVector DFV = DoorMesh->GetForwardVector();
	float Dot = FVector::DotProduct(HCDelta, DFV) / 1000.f;

	//FRotator DR = FRotator(0, DeltaYaw * 10 * DeltaTime, 0);
	//FQuat DQ = UQuatRotLib::Euler_To_Quaternion(DR);
	//UQuatRotLib::AddActorLocalRotationQuat(this, DQ);

	UE_LOG(LogTemp, Warning, TEXT("DOT: %f"), Dot);

	FQuat DQ = FQuat(DoorMesh->GetUpVector(), Dot * HCDelta.Size() * (180.f / PI) * Push);
	AddActorLocalRotation(DQ);

	LastHCLocation = HandController->GetActorLocation();
}

void ADoor::PassController(AActor * HC)
{
	HandController = HC;
	LastHCLocation = HandController->GetActorLocation();
	
	
	float Dot = FVector::DotProduct(HandController->GetActorForwardVector(), DoorMesh->GetForwardVector());
	if (Dot > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("PULL TO OPEN"));
		Push = 1;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PUSH TO OPEN"));
		Push = -1;
	}
	
}

void ADoor::SetIsBeingUsed(bool Value)
{
	bIsBeingUsed = Value;
}

FVector2D ADoor::ConvertVector3D(FVector Vec)
{
	FVector2D Result;
	Result.X = Vec.X;
	Result.Y = Vec.Y;
	
	return Result;
}