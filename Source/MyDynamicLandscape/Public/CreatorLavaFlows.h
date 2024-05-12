
#pragma once

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
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
#if 0
	-------------------------------------------------------
			begin main Parameters
#endif
	
protected:
	// TODO: icon for Visual
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	UBillboardComponent* Icon;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		class UArrowComponent* StartFlowDirection;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn System Parameters")
		FVector2D ParticleMassRange		{ 1.0, 2.0 };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn System Parameters")
		FVector2D StartVelocityRange	{ 10.0, 20.0 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn System Parameters")
		int32  NumberParticlesCreate = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn System Parameters")
		double MainDeltaTime = 0.1;	// DelayUpdate 
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn System Parameters")
	// 	double MainСoefficientElasticity = 0.1; 
// TODO: SpawnLava
// public:
// 	UFUNCTION(BlueprintCallable, Category = "Get Particle Parameters")
// 		void SpawnLava();
};
