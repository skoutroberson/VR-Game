// Fill out your copyright notice in the Description page of Project Settings.


#include "PeekPoint.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"

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
	
}

// Called every frame
void APeekPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

