// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grabbable.generated.h"

UCLASS()
class ARCHITECTUREEXPLORER_API AGrabbable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrabbable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Grabbable)
	float ItemGripSize = 100.f;
	FRotator ItemRotation = FRotator(0, 0, 0);
	FVector ItemLocation = FVector(0, 0, 0);
	//FRotator ItemRotation = FRotator(0, -75.f, -85.f);
	//FVector ItemLocation = FVector(4.f, 11.f, -3.5f);


	// For two hand item grabbing.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TwoHanded)
	bool bBeingHeld = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = TwoHanded)
	bool bLeftHandHeld = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = TwoHanded)
	bool bRightHandHeld = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TwoHanded)
	bool bTwoHanded = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TwoHanded)
	bool bRotateTwoHand = false;

	USceneComponent * HandHold1 = nullptr;
	USceneComponent * HandHold2 = nullptr;

	FVector HandHoldOffset1 = FVector::ZeroVector;
	FVector HandHoldOffset2 = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TwoHanded)
	AActor* MotionController1 = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TwoHanded)
	AActor* MotionController2 = nullptr;

	void Grab();

};
