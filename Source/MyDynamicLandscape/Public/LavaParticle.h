
// TODO: delete for UE TPL?
#pragma once	

#include "Math/Vector.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LavaParticle.generated.h"

UCLASS()
class MYDYNAMICLANDSCAPE_API ALavaParticle : public AActor
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	ALavaParticle();	// set spawn Stats

//-----------------------------------------------------------------------------------------
//TODO: https://docs.unrealengine.com/4.26/en-US/ProgrammingAndScripting/GameplayArchitecture/Properties/

#pragma region MainLogick
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		UStaticMeshComponent*CollisionMesh;
	// TODO: add second Mesh for Visual
	// UPROPERTY(EditAnywhere)
	// 	UStaticMeshComponent* MVisualMesh;

	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Particle Parameters")
	UPROPERTY()
		FVector MainSumForces {0.0, 0.0, 0.0 };
	UPROPERTY()
	// TODO: "const double MainMass"
		double MainMass { 1.0 };	
	UPROPERTY()
		FVector MainAcceleration {0.0, 0.0, 0.0 };
	UPROPERTY()
		FVector MainVelocity {0.0, 0.0, 0.0 };
	// UPROPERTY()
	// 	const FVector GravityForce {0.0, 0.0, -9.8 };
	// UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	TArray<ALavaParticle*> ArrayOverlapParticl; 


	// set spawn parametr
	UFUNCTION(BlueprintCallable, Category = "Update System Function")
		void CalculateAcceleration();
	UFUNCTION(BlueprintCallable, Category = "Update System Function")
		void CalculateVelocity(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "Update System Function")
		void Movement(float DeltaTime);
	
public:	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Get Particle Parameters")
		double GetMainMass();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Get Particle Parameters")
		FVector GetMainVelocity();
	// UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Get Particle Parameters")
	// 	FVector GetMainAcceleration();

	UFUNCTION(BlueprintCallable, Category = "Set Particle Parameters")
	void SetBeginParameters(double NewMass, FVector NewVelocity);
	
	UFUNCTION(BlueprintCallable, Category = "Set Particle Parameters")
		void SetMainMass(double NewMass);
	UFUNCTION(BlueprintCallable, Category = "Set Particle Parameters")
		void SetMainVelocity(FVector NewVelocity);
	
#pragma endregion MainLogick
};
