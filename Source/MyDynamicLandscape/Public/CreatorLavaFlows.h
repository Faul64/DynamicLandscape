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
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	UBillboardComponent* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Starting System Parameters")
		class UArrowComponent* StartFlowDirection;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//TArray<ALavaParticle> ParticlArray; //int32 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Starting System Parameters")
		FVector2D ParticleMassRange		{ 1.0, 2.0 };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Starting System Parameters")
		FVector2D StartVelocityRange	{ 10.0, 20.0 };

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Starting System Parameters")
	//	double NumberParticles = 5.0;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Starting System Parameters")
	//	double CreationTime = 5.0;



//#pragma region CalculateAllParameters

	UFUNCTION(BlueprintCallable, Category = "LavaFlows")
		void UpdateAcceleration(ALavaParticle* Particle);
	UFUNCTION(BlueprintCallable, Category = "LavaFlows")
		void UpdateVelocity(ALavaParticle* Particle, float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "LavaFlows")
		bool UpdateLocation(ALavaParticle* Particle, float DeltaTime);

//#pragma endregion CalculateAllParameters

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
