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
