// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ApplePicker.generated.h"

UCLASS()
class APPLEPICKERV2_API AApplePicker : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AApplePicker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Initialization")
	void InitBaskets();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	int health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	int maxHealth = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float speed = 2.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	TSubclassOf<AActor> basketPrefab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	TArray<AActor*> baskets;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
