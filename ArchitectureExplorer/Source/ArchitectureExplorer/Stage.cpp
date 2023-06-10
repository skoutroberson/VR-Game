// Fill out your copyright notice in the Description page of Project Settings.


#include "Stage.h"
#include <vector>
#include "Stage1.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
#include "VRCharacter.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

using namespace std;

// Sets default values
AStage::AStage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//SetActorTickInterval(1.f);
}

// Called when the game starts or when spawned
void AStage::BeginPlay()
{
	Super::BeginPlay();

	//AddTriggerDelegates();

	//UE_LOG(LogTemp, Warning, TEXT("Base stage beginplay"));

	//constexpr size_t sizeOfT = sizeof(Flags);
}

void AStage::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

}

// Called every frame
void AStage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AStage::BeginStage()
{
}

void AStage::EndStage()
{
}

void AStage::ResetStage()
{
}

void AStage::NewLoop()
{
}

