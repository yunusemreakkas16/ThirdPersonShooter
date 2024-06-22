// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAiController.h"
#include "Kismet/GameplayStatics.h"


void AShooterAiController::BeginPlay()
{
    Super::BeginPlay();

}

void AShooterAiController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    
    if(LineOfSightTo(PlayerPawn))
    {
        SetFocus(PlayerPawn);
        MoveToActor(PlayerPawn, AcceptanceRadius);

    }
    else
    {
        ClearFocus(EAIFocusPriority::Gameplay);

    }
}