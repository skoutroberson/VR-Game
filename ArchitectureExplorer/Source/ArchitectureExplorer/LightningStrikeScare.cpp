// Fill out your copyright notice in the Description page of Project Settings.


#include "LightningStrikeScare.h"
#include "Kismet/GameplayStatics.h"
#include "VRCharacter.h"
#include "Camera/CameraComponent.h"

void ALightningStrikeScare::BeginPlay()
{
	Super::BeginPlay();

	PlayerCamera = Cast<USceneComponent>(UGameplayStatics::GetActorOfClass(GetWorld(), AVRCharacter::StaticClass())->GetComponentByClass(UCameraComponent::StaticClass()));
	ErrolMesh = Cast<USkeletalMeshComponent>(GetComponentsByTag(USkeletalMeshComponent::StaticClass(), FName("1"))[0]);
	ErrolMesh2 = Cast<USkeletalMeshComponent>(GetComponentsByTag(USkeletalMeshComponent::StaticClass(), FName("2"))[0]);
}

void ALightningStrikeScare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bOverlappingWindowTrigger)
	{
		ComputePlayerCameraDotValue(DeltaTime);
	}
	else if (bSpawnPeekErrolTrigger)
	{
		UnHideErrolMesh();
	}
	else if (bEndPeekWhenSeen)
	{
		EndPeekWhenSeen();
	}
}

void ALightningStrikeScare::ComputePlayerCameraDotValue(float DeltaTime)
{
	if(GetPlayerCameraDot() > 0.5f)
	{
		PlayerCameraDotValue += GetPlayerCameraDot() * DeltaTime;
	}
	else
	{
		PlayerCameraDotValue -= DeltaTime;
	}

	if (PlayerCameraDotValue > PlayerCameraDotThreshold)
	{
		PlayerCameraDotValue = PlayerCameraDotThreshold;

		if (PlayerCamera->GetComponentLocation().Z < 219.f && GetPlayerCameraDot() > 0.9f)
		{
			bOverlappingWindowTrigger = false;
			LightningStrike();
			PlayerCameraDotValue = 0;
		}
	}

	if (PlayerCameraDotValue < 0)
	{
		PlayerCameraDotValue = 0;
	}
}

void ALightningStrikeScare::UnHideErrolMesh()
{
	if (GetPlayerCameraDot() < 0.0f)
	{
		bSpawnPeekErrolTrigger = false;
		bEndPeekWhenSeen = true;
		ErrolMesh2->SetVisibility(true);
		ErrolMesh->SetVisibility(false);
		PlayLeavesRustleSound();
	}
}

void ALightningStrikeScare::EndPeekWhenSeen()
{
	FVector HeadLocation = ErrolMesh2->GetBoneLocation(FName("Head"), EBoneSpaces::WorldSpace);
	FVector Disp = HeadLocation - PlayerCamera->GetComponentLocation();
	Disp.Normalize();
	float Dot = FVector::DotProduct(PlayerCamera->GetForwardVector(), Disp);
	if (Dot > 0.9f || PlayerCamera->GetComponentLocation().Y < 380.0f)
	{
		bEndPeekWhenSeen = false;
		EndWindowPeek();
		SetActorTickEnabled(false);
	}
}

float ALightningStrikeScare::GetPlayerCameraDot()
{
	FVector HeadLocation = ErrolMesh->GetBoneLocation(FName("Head"), EBoneSpaces::WorldSpace);
	FVector Disp = HeadLocation - PlayerCamera->GetComponentLocation();
	Disp.Normalize();
	return FVector::DotProduct(PlayerCamera->GetForwardVector(), Disp);
}

void ALightningStrikeScare::StartScareInternal()
{
	UE_LOG(LogTemp, Warning, TEXT("POOF"));
}

void ALightningStrikeScare::EndScareInternal()
{
}


