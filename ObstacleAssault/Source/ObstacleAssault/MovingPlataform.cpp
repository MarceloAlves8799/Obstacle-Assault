// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlataform.h"

// Sets default values
AMovingPlataform::AMovingPlataform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlataform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlataform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlataform(DeltaTime);
	RotatePlataform(DeltaTime);
}

void AMovingPlataform::MovePlataform(float DeltaTime) 
{
	
	if (ShouldReturnPlataform())
	{
		FVector MoveDirection = PlataformVelocity.GetSafeNormal();
		StartLocation += MoveDirection * MovedDistance;
		SetActorLocation(StartLocation);
		PlataformVelocity = -PlataformVelocity;
	}

	else 
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation += PlataformVelocity * DeltaTime;
		SetActorLocation(CurrentLocation);
	}
}

void AMovingPlataform::RotatePlataform(float DeltaTime)
{
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}

bool AMovingPlataform::ShouldReturnPlataform() const 
{
	return GetDistanceMoved() >= MovedDistance;
}

float AMovingPlataform::GetDistanceMoved() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}

