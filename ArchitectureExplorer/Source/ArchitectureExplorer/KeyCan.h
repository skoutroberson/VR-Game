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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent *Mesh = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void AttachKey(ADoorKey *Key);

	UFUNCTION(BlueprintCallable)
	void DetachKey();

	UPROPERTY(BlueprintReadOnly)
	bool bHasKey = false;

	UPROPERTY(BlueprintReadWrite)
	bool bHitByPlayer = false;

	UPROPERTY(VisibleAnywhere)
	float StartZ = -9999.f;

	UPROPERTY(BlueprintReadWrite)
	bool bCheckZ = false;

	void CheckZ();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	ADoorKey  *AttachedKey = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EndZDistance = 10.f;

	UPROPERTY(BlueprintReadWrite)
	FVector SpawnLocation = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite)
	FRotator SpawnRotation;
};
