// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	auto myPawn = GetControlledTank();
	if (myPawn) {
		UE_LOG(LogTemp, Warning, TEXT("ATankPlayerController controlling %s"), *myPawn->GetName());
	} else {
		UE_LOG(LogTemp, Error, TEXT("ATankPlayerController is not controlling any ATank"));
	}
}