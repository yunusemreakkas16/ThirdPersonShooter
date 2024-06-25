// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAiController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

void AShooterAiController::BeginPlay()
{
    Super::BeginPlay();

    if(AIBehavior != nullptr){RunBehaviorTree(AIBehavior);}

    GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());

}

void AShooterAiController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

        APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        FVector PlayerLocation = PlayerPawn->GetActorLocation();
    
    if(LineOfSightTo(PlayerPawn))
    {

        GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerLocation);
        GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLocation"), PlayerLocation);   

    }
    else
    {
        GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
        UE_LOG(LogTemp, Warning, TEXT("I've lost you"));
    } 

}