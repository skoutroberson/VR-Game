// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Roach.h"
#include "RoachSpawner.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API ARoachSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoachSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Maximum roaches that this spawner can spawn DONT CHANGE AT RUNTIME
	UPROPERTY(EditAnywhere, NoClear)
	int MaxRoachCount = 30;

	UFUNCTION(BlueprintCallable)
	void SpawnRoaches(int NumberOfRoaches);

	UPROPERTY(VisibleAnywhere)
	int RoachCount = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<ARoach>> Roaches;

	UFUNCTION() // spawn 1 roach per frame and increment RoachCount until it equals TargetRoachCount then turn bSpawningRoaches off and tick off
	void SpawnRoach();

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ARoach> RoachBP;

private:

	UWorld *World = nullptr;

	bool bSpawningRoaches = false; // for ticking and spawning a roach per frame

	int TargetRoachCount = 0;

};
