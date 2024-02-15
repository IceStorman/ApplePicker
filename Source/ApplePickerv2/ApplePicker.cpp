// Fill out your copyright notice in the Description page of Project Settings.


#include "ApplePicker.h"

// Sets default values
AApplePicker::AApplePicker()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AApplePicker::BeginPlay()
{
	Super::BeginPlay();
	
}

void AApplePicker::InitBaskets()
{
	health = maxHealth;

	int spacing = 0;
	FVector pos = FVector(-500, 0, 800);

	for (int i = 0; i < maxHealth; i++)
	{
		pos.Z += 20;
		AActor* basket = GetWorld()->SpawnActor<AActor>(basketPrefab, pos, GetActorRotation());
		//spacing += 20;
		baskets.Add(basket);
	}
}

// Called every frame
void AApplePicker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AApplePicker::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

