// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Math/Vector.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LavaParticle.generated.h"

UCLASS()
class MYDYNAMICLANDSCAPE_API ALavaParticle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALavaParticle();


	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Mesh;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particle Parameters")
		double Mass = 1.0;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particle Parameters")
		FVector SumForces;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particle Parameters")
		FVector Acceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particle Parameters")
		FVector Velocity;




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
