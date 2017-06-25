// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto myPawn = GetControlledTank();
	if (myPawn) {
		UE_LOG(LogTemp, Warning, TEXT("ATankAIController controlling %s"), *myPawn->GetName());
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("ATankAIController is not controlling any ATank"));
	}
}
