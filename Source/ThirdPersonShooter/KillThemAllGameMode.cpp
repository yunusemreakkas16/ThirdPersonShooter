// Fill out your copyright notice in the Description page of Project Settings.


#include "KillThemAllGameMode.h"


void AKillThemAllGameMode::PawnKilled(APawn* PawnKilled)
{
    Super::PawnKilled(PawnKilled);
    UE_LOG(LogTemp, Display, TEXT("Player Has Gottten fucked"));
}