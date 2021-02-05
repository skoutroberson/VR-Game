// Fill out your copyright notice in the Description page of Project Settings.

/**
*	Singleton class to hold triggers to be used in stage classes.
*
*	This class is neccasary so stage classes don't have to spawn a bunch of triggers when they are created.
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "TriggerManager.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API ATriggerManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATriggerManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Triggers")
	TArray<UBoxComponent*> Triggers;

private:
	UPROPERTY(VisibleAnywhere)
	int TriggerCount = 8;

};
