// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ErrolSaw.generated.h"

UENUM(BlueprintType)
enum class ErrolSawState : uint8
{
	STATE_IDLE			UMETA(DisplayName = "Idle"),
	STATE_INVISIBLE		UMETA(DisplayName = "Invisible"),
	STATE_MOCAP			UMETA(DisplayName = "Mocap"),
	STATE_ANIM2			UMETA(DisplayName = "Anim2"),
	STATE_RAGDOLL		UMETA(DisplayName = "Ragdoll"),
};

UCLASS()
class ARCHITECTUREEXPLORER_API AErrolSaw : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AErrolSaw();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ErrolSawState State = ErrolSawState::STATE_IDLE;

	UFUNCTION(BlueprintCallable)
	void ChangeState(ErrolSawState NewState);

	UFUNCTION(BlueprintCallable)
	void EnterState(ErrolSawState NewState);

	UFUNCTION(BlueprintCallable)
	void ExitState(ErrolSawState NewState);

	// set in ErrolCharacter.cpp
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent *MocapMesh = nullptr;
	// set in ErrolCharacter.cpp
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent *Anim2Mesh = nullptr;

	// this is the skeletal mesh
	USceneComponent *Root = nullptr;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void Rev();
};
