// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioDistanceCrossfader.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "VRCharacter.h"
#include "Engine/World.h"

// Sets default values
AAudioDistanceCrossfader::AAudioDistanceCrossfader()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ADCRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ADCRoot"));
	SetRootComponent(ADCRoot);

	ACol = CreateDefaultSubobject<UBoxComponent>(TEXT("ACol"));
	ACol->AttachTo(ADCRoot);

	BCol = CreateDefaultSubobject<UBoxComponent>(TEXT("BCol"));
	BCol->AttachTo(ADCRoot);

	//AVRCharacter *VRChar = UGameplayStatics::GetActorOfClass()
}

// Called when the game starts or when spawned
void AAudioDistanceCrossfader::BeginPlay()
{
	Super::BeginPlay();

	SetActorTickEnabled(false);

	InitializeAudioArrays();
	
	World = GetWorld();

	// set CameraCollision
	AActor *VRChar = UGameplayStatics::GetActorOfClass(World, AVRCharacter::StaticClass());
	TArray<UActorComponent*> Temp = VRChar->GetComponentsByTag(USphereComponent::StaticClass(), FName("CamCol"));
	for (auto i : Temp)
	{
		USphereComponent *SC = Cast<USphereComponent>(i);
		if (SC != nullptr)
		{
			CameraCollision = SC;
		}
	}

	DistanceAB = FVector::Distance(ACol->GetComponentLocation(), BCol->GetComponentLocation());
}

// Called every frame
void AAudioDistanceCrossfader::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CrossfadeAB(DeltaTime);
}

bool AAudioDistanceCrossfader::ShouldStopCrossfading(USceneComponent* Col)
{
	const FVector UV = Col->GetUpVector();
	const FVector ColLocation = Col->GetComponentLocation();
	const FVector CameraLocation = CameraCollision->GetComponentLocation();
	FVector Disp = CameraLocation - ColLocation;
	Disp = Disp.GetSafeNormal();

	const float Dot = FVector::DotProduct(UV, Disp);

	if (Dot > 0)
	{
		SetActorTickEnabled(false);

		UBoxComponent *C = Cast<UBoxComponent>(Col);
		
		if (C == ACol)
		{
			VolumeA = 1.0f;
			VolumeB = 0.0f;
		}
		else // BCol
		{
			VolumeB = 1.0f;
			VolumeA = 0.0f;
		}

		for (auto a : AudioA)
		{
			a->SetVolumeMultiplier(VolumeA);
		}
		for (auto b : AudioB)
		{
			b->SetVolumeMultiplier(VolumeB * VolumeBMultiplier);
		}
	}

	return false;
}

void AAudioDistanceCrossfader::CrossfadeAB(float DeltaTime)
{
	const FVector CL = CameraCollision->GetComponentLocation();
	const FVector AL = ACol->GetComponentLocation();
	const FVector BL = BCol->GetComponentLocation();

	const float d = FVector::Distance(AL, BL);

	float NewVolumeA;
	float NewVolumeB;

	FVector BADif = BL - AL;
	BADif = BADif.GetSafeNormal();

	FVector DifA = CL - AL;
	const float AMag = DifA.Size();
	DifA = DifA.GetSafeNormal();

	const float DotA = FVector::DotProduct(DifA, BADif);

	if (DotA <= 0.0f)
	{
		NewVolumeA = 1.0f;
		NewVolumeB = 0.0f;
	}
	else
	{
		FVector Proj = BADif * DotA * AMag;
		NewVolumeA = (d - Proj.Size()) / d;
		NewVolumeB = 1.0f - NewVolumeA;
	}
	
	
	//UE_LOG(LogTemp, Warning, TEXT("New A: %f"), NewVolumeA);
	//UE_LOG(LogTemp, Warning, TEXT("New B: %f"), NewVolumeB);

	for (auto a : AudioA)
	{
		a->SetVolumeMultiplier(NewVolumeA);
	}
	for (auto b : AudioB)
	{
		b->SetVolumeMultiplier(NewVolumeB * VolumeBMultiplier);
	}
}

