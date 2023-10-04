// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlataform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlataform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlataform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Moving")
	FVector PlataformVelocity = FVector(0, 100, 0);

	UPROPERTY(EditAnywhere, Category = "Moving")
	float MovedDistance = 100;

	UPROPERTY(EditAnywhere, Category = "Rotating")
	FRotator RotationVelocity;

	FVector StartLocation;


	// Functions
	void MovePlataform(float DeltaTime);
	void RotatePlataform(float DeltaTime);
	bool ShouldReturnPlataform() const;
	float GetDistanceMoved() const;

};
