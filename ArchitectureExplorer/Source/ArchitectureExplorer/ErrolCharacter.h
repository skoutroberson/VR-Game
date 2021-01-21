// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "ErrolCharacter.generated.h"

UENUM(BlueprintType)
enum class ErrolState : uint8
{
	STATE_IDLE		UMETA(DisplayName="Idle"),
	STATE_PATROL	UMETA(DisplayName="Patrol"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API AErrolCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AErrolCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ErrolState State;

private:
	void Patrol();

private:
	UPROPERTY()
		TArray<AActor*> Waypoints;

	UFUNCTION()
		ATargetPoint* GetRandomWaypoint();

	UFUNCTION()
		void GoToRandomWaypoint();

};
