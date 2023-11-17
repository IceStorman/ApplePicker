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

