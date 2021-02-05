// Fill out your copyright notice in the Description page of Project Settings.


#include "Crawler.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACrawler::ACrawler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CrawlerRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CrawlerRoot"));
	SetRootComponent(CrawlerRoot);

	StartingPosition = FVector(-893, 4132, 271);

}

// Called when the game starts or when spawned
void ACrawler::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Warning, TEXT("%f"), GetActorLocation().Y);
	
}

// Called every frame
void ACrawler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//UE_LOG(LogTemp, Warning, TEXT("%f"), GetActorLocation().Y);

	if (GetActorLocation().Y < 2000)
	{
		SetActorLocation(StartingPosition);
	}
	else
	{
		SetActorLocation(UKismetMathLibrary::VInterpTo_Constant(GetActorLocation(),
			FVector(GetActorLocation().X, GetActorLocation().Y - 1000, GetActorLocation().Z)
			, DeltaTime, 200.f));
	}
	
}

