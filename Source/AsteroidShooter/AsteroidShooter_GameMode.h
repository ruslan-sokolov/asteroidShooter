// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "SpaceShipPawn.h"
#include "Asteroid.h"

#include "AsteroidShooter_GameMode.generated.h"


/**
 * 
 */
UCLASS()
class ASTEROIDSHOOTER_API AAsteroidShooter_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	// Sets default values for this pawn's properties
	AAsteroidShooter_GameMode();
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AAsteroid>> Asteroids;

};
