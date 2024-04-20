// Fill out your copyright notice in the Description page of Project Settings.


#include "CreatorLavaFlows.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"

// Sets default values
ACreatorLavaFlows::ACreatorLavaFlows()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	StartFlowDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("StartFlowDirection"));
	// TODO: 2 priority
	//Icon = CreateDefaultSubobject<UBillboardComponent>(TEXT("Icon"));
	//Icon->AttachToComponent(this->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	// Icon->SetSprite(UTexture2D("Image_Volcano"));
}

// Called when the game starts or when spawned
void ACreatorLavaFlows::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ACreatorLavaFlows::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


#if 0
			begin main Function
#endif

void ACreatorLavaFlows::UpdateAcceleration(ALavaParticle* Particle){
	Particle->Acceleration = Particle->SumForces / Particle->Mass;
}

void ACreatorLavaFlows::UpdateVelocity(ALavaParticle* Particle, float DeltaTime){
	//v1 Euler's method 
//TODO:  min/max Velocity !
	//
	Particle->Velocity += (Particle->Acceleration * DeltaTime);

	//v2 Werle method
		//FVector HalfAcceleration = Particle.Acceleration * (0.5f * DeltaTime);
		//Particle.Velocity += HalfAcceleration;
}

/// <summary>
///  Update Particle Location
/// </summary>
bool ACreatorLavaFlows::UpdateLocation(ALavaParticle* Particle, float DeltaTime){
	if (Particle) {
		FVector Offset = FVector (Particle->Velocity * DeltaTime);
		Particle->SetActorLocation(Particle->GetActorLocation() + Offset);
		return 1;
	}
	return 0;
}
