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
	PrimaryActorTick.bCanEverTick = false;

	AActor * TMA;
	TMA = UGameplayStatics::GetActorOfClass(GetWorld(), ATriggerManager::StaticClass());
	TriggerManager = Cast<ATriggerManager>(TMA);
	if (TriggerManager == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("TriggerManager cast failed!"));
	}

	//SetActorTickInterval(1.f);
}

// Called when the game starts or when spawned
void AStage::BeginPlay()
{
	Super::BeginPlay();

	TriggerManager->Triggers[0]->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger0);

	//constexpr size_t sizeOfT = sizeof(Triggers);

	//constexpr size_t sizeOfT = sizeof(Flags);
}

// Called every frame
void AStage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AStage::BeginOverlapTrigger0(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	TArray<AActor*> OverlappingActors;
	TriggerManager->Triggers[0]->GetOverlappingActors(OverlappingActors, AVRCharacter::StaticClass());

	for (AActor* OverlappingActor : OverlappingActors)
	{
		if (OverlappingActor->ActorHasTag(TEXT("Player")))
		{
			UE_LOG(LogTemp, Warning, TEXT("BOTrigger0!"));
			BOTrigger0();
		}
	}
}

void AStage::EndOverlapTrigger0()
{
}

void AStage::BOTrigger0()
{
	UE_LOG(LogTemp, Warning, TEXT("BOTrigger0 base class function"));
}

void AStage::EOTrigger0()
{
}

void AStage::PrintTest()
{
	UE_LOG(LogTemp, Warning, TEXT("Stage -1"));
}