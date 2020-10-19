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
	if (TriggerManager == nullptr){UE_LOG(LogTemp, Warning, TEXT("TriggerManager cast failed!"));}

	//SetActorTickInterval(1.f);
}

// Called when the game starts or when spawned
void AStage::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Base stage beginplay"));

	//constexpr size_t sizeOfT = sizeof(Flags);
}

// Called every frame
void AStage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AStage::BeginOverlapTrigger0(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	BOTrigger0();
}

void AStage::EndOverlapTrigger0(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	EOTrigger0();
}

void AStage::BeginOverlapTrigger1(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	BOTrigger1();
}

void AStage::EndOverlapTrigger1(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	EOTrigger1();
}

void AStage::BeginOverlapTrigger2(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	BOTrigger2();
}

void AStage::EndOverlapTrigger2(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	EOTrigger2();
}

void AStage::BeginOverlapTrigger3(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	BOTrigger3();
}

void AStage::EndOverlapTrigger3(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	EOTrigger3();
}

void AStage::BeginOverlapTrigger4(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	BOTrigger4();
}

void AStage::EndOverlapTrigger4(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	EOTrigger4();
}

void AStage::BeginOverlapTrigger5(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	BOTrigger5();
}

void AStage::EndOverlapTrigger5(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	EOTrigger5();
}

void AStage::BeginOverlapTrigger6(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	BOTrigger6();
}

void AStage::EndOverlapTrigger6(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	EOTrigger6();
}

void AStage::BeginOverlapTrigger7(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	BOTrigger7();
}

void AStage::EndOverlapTrigger7(UPrimitiveComponent * FirstComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	EOTrigger7();
}

void AStage::AddTriggerDelegates()
{
	TriggerManager->Triggers[0]->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger0);
	TriggerManager->Triggers[1]->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger1);
	TriggerManager->Triggers[2]->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger2);
	TriggerManager->Triggers[3]->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger3);
	TriggerManager->Triggers[4]->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger4);
	TriggerManager->Triggers[5]->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger5);
	TriggerManager->Triggers[6]->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger6);
	TriggerManager->Triggers[7]->OnComponentBeginOverlap.AddDynamic(this, &AStage::BeginOverlapTrigger7);
}

void AStage::RemoveTriggerDelegates()
{
	TriggerManager->Triggers[0]->OnComponentBeginOverlap.RemoveDynamic(this, &AStage::BeginOverlapTrigger0);
	TriggerManager->Triggers[1]->OnComponentBeginOverlap.RemoveDynamic(this, &AStage::BeginOverlapTrigger1);
	TriggerManager->Triggers[2]->OnComponentBeginOverlap.RemoveDynamic(this, &AStage::BeginOverlapTrigger2);
	TriggerManager->Triggers[3]->OnComponentBeginOverlap.RemoveDynamic(this, &AStage::BeginOverlapTrigger3);
	TriggerManager->Triggers[4]->OnComponentBeginOverlap.RemoveDynamic(this, &AStage::BeginOverlapTrigger4);
	TriggerManager->Triggers[5]->OnComponentBeginOverlap.RemoveDynamic(this, &AStage::BeginOverlapTrigger5);
	TriggerManager->Triggers[6]->OnComponentBeginOverlap.RemoveDynamic(this, &AStage::BeginOverlapTrigger6);
	TriggerManager->Triggers[7]->OnComponentBeginOverlap.RemoveDynamic(this, &AStage::BeginOverlapTrigger7);
}