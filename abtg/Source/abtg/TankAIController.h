// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABTG_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:
	void BeginPlay() override;

	ATank* GetControlledTank() const
	{
		return Cast<ATank>(GetPawn());
	}

	ATank* GetPlayerControlledTank() const;
};
