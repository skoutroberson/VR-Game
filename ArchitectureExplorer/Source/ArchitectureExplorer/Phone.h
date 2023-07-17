// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Grabbable.h"
#include "Phone.generated.h"

UENUM(BlueprintType)
enum class PhoneState : uint8
{
	STATE_IDLE			UMETA(DisplayName = "Idle"),
	STATE_CALL1			UMETA(DisplayName = "Neighbor1"),
	STATE_HGGY			UMETA(DisplayName = "HGGY"),
	STATE_ALIEN1		UMETA(DisplayName = "Alien1"),
	STATE_ALIEN2		UMETA(DisplayName = "Alien2"),
	STATE_ALIEN3		UMETA(DisplayName = "Alien3"),
};

/**
 * 
 */
UCLASS()
class ARCHITECTUREEXPLORER_API APhone : public AGrabbable
{
	GENERATED_BODY()

public:
	APhone();

protected:
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Phone")
	void CallPhone();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Phone")
	void AnswerPhone();

	// for calling AnswerPhone() when the phone gets answered in Stage 4 or 6
	class HGGYScare *HGGYScare = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	PhoneState State = PhoneState::STATE_IDLE;
	
};
