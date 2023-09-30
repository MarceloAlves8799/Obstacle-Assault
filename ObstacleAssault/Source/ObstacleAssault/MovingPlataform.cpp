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

	FVector CurrentLocation = GetActorLocation();

	CurrentLocation += PlataformVelocity * DeltaTime;

	SetActorLocation(CurrentLocation);

	float DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);

	if (DistanceMoved >= MovedDistance) 
	{
		float OverShoot = DistanceMoved - MovedDistance;
		FString Name = GetName();
		UE_LOG(LogTemp, Display, TEXT("%s Plataform overshot by %f"), *Name, OverShoot);

		FVector MoveDirection = PlataformVelocity.GetSafeNormal();
		StartLocation += MoveDirection * MovedDistance;
		SetActorLocation(StartLocation);
		PlataformVelocity = -PlataformVelocity;
	}
}

