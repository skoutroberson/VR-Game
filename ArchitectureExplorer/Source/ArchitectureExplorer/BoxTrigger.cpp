// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxTrigger.h"
#include "DrawDebugHelpers.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

ABoxTrigger::ABoxTrigger()
{
	
}

void ABoxTrigger::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
	
	OnActorBeginOverlap.AddDynamic(this, &ABoxTrigger::ActorBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &ABoxTrigger::ActorEndOverlap);
}

void ABoxTrigger::ActorBeginOverlap(AActor * OverlappedActor, AActor * OtherActor)
{
	if (!bTriggered)
	{
		TArray<AActor*> OverlappingActors;
		GetOverlappingActors(OverlappingActors);

		for (AActor* OverlappingActor : OverlappingActors)
		{
			if (OverlappingActor->ActorHasTag(TEXT("Player")))
			{
				UE_LOG(LogTemp, Warning, TEXT("PLAYERINTERCEPTBRO!!!"));

				TriggerFunction();

				bTriggered = true;
				break;
			}
		}
	}
}

void ABoxTrigger::TriggerFunction()
{
	UE_LOG(LogTemp, Warning, TEXT("Base class trigger function"));
}

void ABoxTrigger::ActorEndOverlap(AActor * OverlappedActor, AActor * OtherActor)
{
}