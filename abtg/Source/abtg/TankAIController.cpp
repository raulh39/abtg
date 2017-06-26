// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "TankPlayerController.h"
#include "Engine/World.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	{
		auto myPawn = GetControlledTank();
		if (myPawn) {
			UE_LOG(LogTemp, Warning, TEXT("ATankAIController controlling %s"), *myPawn->GetName());
		}
		else {
			UE_LOG(LogTemp, Error, TEXT("ATankAIController is not controlling any ATank"));
		}
	}
	{
		auto playerPawn = GetPlayerControlledTank();
		if (playerPawn) {
			UE_LOG(LogTemp, Warning, TEXT("ATankAIController enemy is %s"), *playerPawn->GetName());
		}
		else {
			UE_LOG(LogTemp, Error, TEXT("ATankAIController has no enemy"));
		}
	}
}

ATank* ATankAIController::GetPlayerControlledTank() const
{
	auto first_player_controller = GetWorld()->GetFirstPlayerController();
	ATankPlayerController * tank_player_controller = Cast<ATankPlayerController>(first_player_controller);
	if (!tank_player_controller) return nullptr;
	return tank_player_controller->GetControlledTank();
}
