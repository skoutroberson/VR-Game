// Fill out your copyright notice in the Description page of Project Settings.


#include "AlienScare.h"
#include "Kismet/GameplayStatics.h"
#include "VRCharacter.h"
#include "Camera/CameraComponent.h"
#include "Phone.h"

AlienScare::AlienScare()
{
	PrimaryActorTick.bCanEverTick = true;
}

AlienScare::~AlienScare()
{
}

// Called when the game starts or when spawned
void AlienScare::BeginPlay()
{
	Super::BeginPlay();

	World = GetWorld();

	PhoneTransform1 = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), FName("PL1"))[0])->GetComponentTransform();
	PhoneTransform2 = Cast<USceneComponent>(GetComponentsByTag(USceneComponent::StaticClass(), FName("PL2"))[0])->GetComponentTransform();

	PlayerCamera = Cast<USceneComponent>(UGameplayStatics::GetActorOfClass(World, AVRCharacter::StaticClass())->GetComponentByClass(UCameraComponent::StaticClass()));
	Phone = Cast<APhone>(UGameplayStatics::GetActorOfClass(World, APhone::StaticClass()));
}

void AlienScare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (State)
	{
		case AlienScareState::STATE_MOVING_PHONE:
			MovePhone();
		break;
	}
}

void AlienScare::MovePhone()
{
	// Check if phone is on screen, if it is not on screen then move it, call it, and advance the scare.

	const FVector PL1 = PhoneTransform1.GetLocation();
	const FVector PL2 = PhoneTransform2.GetLocation();
	const FVector CL = PlayerCamera->GetComponentLocation();
	const FVector Disp1 = (PL1 - CL).GetSafeNormal();
	const FVector Disp2 = (PL2 - CL).GetSafeNormal();
	const FVector CFV = PlayerCamera->GetForwardVector();
	const float Dot1 = FVector::DotProduct(CFV, Disp1);
	const float Dot2 = FVector::DotProduct(CFV, Disp2);

	UE_LOG(LogTemp, Warning, TEXT("Dot1: %f"), Dot1);
	UE_LOG(LogTemp, Warning, TEXT("Dot2: %f"), Dot2);

	#define HMD_MAX_FOV 0.33f

	if (Dot1 < HMD_MAX_FOV || Dot2 < HMD_MAX_FOV)
	{
		State = AlienScareState::STATE_CALLING_PHONE;
		if (Dot1 < Dot2)
		{
			Phone->SetActorTransform(PhoneTransform1);
		}
		else
		{
			Phone->SetActorTransform(PhoneTransform2);
		}
		Phone->State = PhoneState::STATE_ALIEN1;
		Phone->CallPhone();
	}

	UE_LOG(LogTemp, Warning, TEXT("YOOOOOO ALIEN SCARE"));

}
