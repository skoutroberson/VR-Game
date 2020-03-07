// Fill out your copyright notice in the Description page of Project Settings.


#include "Crawler.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
ACrawler::ACrawler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CrawlerRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CrawlerRoot"));
	SetRootComponent(CrawlerRoot);

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body->SetupAttachment(CrawlerRoot);

}

// Called when the game starts or when spawned
void ACrawler::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACrawler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

