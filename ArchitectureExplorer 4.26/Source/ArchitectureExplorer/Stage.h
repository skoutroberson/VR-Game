// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <vector>
#include "Components/BoxComponent.h"
#include "TriggerManager.h"
#include "Stage.generated.h"

using namespace std;

UCLASS()
class ARCHITECTUREEXPLORER_API AStage : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStage();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// I think I can make these variables static but they can't be static if I want to see them in editor/blueprints

	UPROPERTY(VisibleAnywhere, Category = "Flags")
	TArray<bool> Flags;
	//bool Flags[16];

	UPROPERTY(VisibleAnywhere, Category = "Flags")
	int FlagCount = 0;

public:
	// Trigger virtual stuff

	ATriggerManager * TriggerManager;
	TArray<UBoxComponent*> * Triggers;
	
	UFUNCTION()
	void BeginOverlapTrigger0(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void EndOverlapTrigger0(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	virtual void BOTrigger0() { UE_LOG(LogTemp, Warning, TEXT("BOTrigger0 base class function")); }
	virtual void EOTrigger0(){ UE_LOG(LogTemp, Warning, TEXT("EOTrigger0 base class function")); }

	UFUNCTION()
	void BeginOverlapTrigger1(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void EndOverlapTrigger1(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	virtual void BOTrigger1() { UE_LOG(LogTemp, Warning, TEXT("BOTrigger1 base class function")); }
	virtual void EOTrigger1() { UE_LOG(LogTemp, Warning, TEXT("EOTrigger1 base class function")); }

	UFUNCTION()
	void BeginOverlapTrigger2(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void EndOverlapTrigger2(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	virtual void BOTrigger2() { UE_LOG(LogTemp, Warning, TEXT("BOTrigger2 base class function")); }
	virtual void EOTrigger2() { UE_LOG(LogTemp, Warning, TEXT("EOTrigger2 base class function")); }

	UFUNCTION()
	void BeginOverlapTrigger3(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void EndOverlapTrigger3(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	virtual void BOTrigger3() { UE_LOG(LogTemp, Warning, TEXT("BOTrigger3 base class function")); }
	virtual void EOTrigger3() { UE_LOG(LogTemp, Warning, TEXT("EOTrigger3 base class function")); }

	UFUNCTION()
	void BeginOverlapTrigger4(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void EndOverlapTrigger4(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	virtual void BOTrigger4() { UE_LOG(LogTemp, Warning, TEXT("BOTrigger4 base class function")); }
	virtual void EOTrigger4() { UE_LOG(LogTemp, Warning, TEXT("EOTrigger4 base class function")); }

	UFUNCTION()
	void BeginOverlapTrigger5(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void EndOverlapTrigger5(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	virtual void BOTrigger5() { UE_LOG(LogTemp, Warning, TEXT("BOTrigger5 base class function")); }
	virtual void EOTrigger5() { UE_LOG(LogTemp, Warning, TEXT("EOTrigger5 base class function")); }

	UFUNCTION()
	void BeginOverlapTrigger6(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void EndOverlapTrigger6(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	virtual void BOTrigger6() { UE_LOG(LogTemp, Warning, TEXT("BOTrigger6 base class function")); }
	virtual void EOTrigger6() { UE_LOG(LogTemp, Warning, TEXT("EOTrigger6 base class function")); }

	UFUNCTION()
	void BeginOverlapTrigger7(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void EndOverlapTrigger7(class UPrimitiveComponent* FirstComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	virtual void BOTrigger7() { UE_LOG(LogTemp, Warning, TEXT("BOTrigger7 base class function")); }
	virtual void EOTrigger7() { UE_LOG(LogTemp, Warning, TEXT("EOTrigger7 base class function")); }

protected:
	// Flag combo for next stage
	//UPROPERTY(VisibleAnywhere)
	//TArray<TArray<bool>> FlagCombos;
	

protected:
	// called in BeginPlay()
	virtual void AddTriggerDelegates();
	// called in Stage destructor
	virtual void RemoveTriggerDelegates();
};
