// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LavaParticle.h"


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CreatorLavaFlows.generated.h"


UCLASS()
class MYDYNAMICLANDSCAPE_API ACreatorLavaFlows : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreatorLavaFlows();

//TODO: https://docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/GameplayArchitecture/Properties/
	UPROPERTY()	// (VisibleDefaultsOnly, Category = "Starting Parameters")
	class UArrowComponent* StartFlowDirection;

	UPROPERTY(EditAnywhere)
	UBillboardComponent* Icon;

	UPROPERTY(EditAnywhere, Category = "Starting Parameters")
	float StartPulsePower = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Starting Parameters")
	float NumberParticles = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Starting Parameters")
	float CreationTime = 5.0f;


	TArray<ALavaParticle> ParticlArray;

	// foo calculate all count

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//void UpdateParticles() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
