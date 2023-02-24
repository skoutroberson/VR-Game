// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorKey.h"
#include "KeyCan.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API AKeyCan : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeyCan();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent *Mesh = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void AttachKey(ADoorKey *Key);

	UPROPERTY(BlueprintReadOnly)
	bool bHasKey = false;

	UPROPERTY(BlueprintReadWrite)
	bool bHitByPlayer = false;



};
