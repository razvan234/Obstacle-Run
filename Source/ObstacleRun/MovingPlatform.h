// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLERUN_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int32 MyInt = 10;

	UPROPERTY(EditAnywhere)
	int32 IntegerA = 0;


	UPROPERTY(EditAnywhere)
	int32 IntegerB= 0;

	UPROPERTY(EditAnywhere)
	int32 APlusB = 0;


	UPROPERTY(EditAnywhere)
	float MyFloat = 4.20;

	UPROPERTY(EditAnywhere)
	float MyFloatA = 0;

	UPROPERTY(EditAnywhere)
	float MyFloatB = 0;

	UPROPERTY(EditAnywhere)
	float MyFloatAPlusB = 0;


};
