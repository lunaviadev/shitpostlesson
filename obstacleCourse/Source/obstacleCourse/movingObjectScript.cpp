// Fill out your copyright notice in the Description page of Project Settings.


#include "movingObjectScript.h"

// Sets default values for this component's properties
UmovingObjectScript::UmovingObjectScript()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	StartLocation = FVector(0.f, 0.f, 0.f); // adjust values as need be for each object !! (starting ver)
	EndLocation = FVector(1000.f, 0.f, 0.f); // adjust values as need be for each object !! (ending ver)
	MoveSpeed = 200.f; 
}


// Called when the game starts
void UmovingObjectScript::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocation(StartLocation); // sets the actors start location upon running the game
	
}


// Called every frame
void UmovingObjectScript::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector CurrentLocation = GetActorLocation(); // calls the actors current location
	FVector TargetLocation = bMovingToEnd ? EndLocation : StartLocation; // finds the target location of said actor
	FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal(); // starts moving in the correct direction
	
	FVector NewLocation = CurrentLocation + Direction * MoveSpeed * DeltaTime; 
	
	if (FVector::Dist(NewLocation, TargetLocation) <= MoveSpeed * DeltaTime) // moving the actor if all is fine
	{
		NewLocation = TargetLocation;
		bMovingToEnd = !bMovingToEnd;
	}
	
	SetActorLocation(NewLocation);
}

