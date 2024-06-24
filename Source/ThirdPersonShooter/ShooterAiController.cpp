// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAiController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

void AShooterAiController::BeginPlay()
{
    Super::BeginPlay();

    if(AIBehavior != nullptr){RunBehaviorTree(AIBehavior);}

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);


    GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
    GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
}

void AShooterAiController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    /* APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    
    if(LineOfSightTo(PlayerPawn))
    {
        SetFocus(PlayerPawn);
        MoveToActor(PlayerPawn, AcceptanceRadius);

    }
    else
    {
        ClearFocus(EAIFocusPriority::Gameplay);
        StopMovement();
    } */

}