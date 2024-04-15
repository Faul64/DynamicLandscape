// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CreatorLavaFlows.generated.h"

//#include "Components/ArrowComponent.h"

UCLASS()
class MYDYNAMICLANDSCAPE_API ACreatorLavaFlows : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreatorLavaFlows();

//TODO: поправить доступность и параметры UPROPERTY

// ѕоток начинает движение в этом направленеи
	//UPROPERTY(VisibleDefaultsOnly, Category = "Starting Parameters")
	//class UArrowComponent* StartFlowDirection;


	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
