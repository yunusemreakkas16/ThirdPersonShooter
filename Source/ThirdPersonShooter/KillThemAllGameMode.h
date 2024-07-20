// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ThirdPersonShooterGameModeBase.h"
#include "KillThemAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONSHOOTER_API AKillThemAllGameMode : public AThirdPersonShooterGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled)override;

private:
	void EndGame(bool bIsPlayerWinner);

};
