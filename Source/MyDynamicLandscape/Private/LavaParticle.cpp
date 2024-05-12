
#include "LavaParticle.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ALavaParticle::ALavaParticle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//TODO: Set visual; collision; size
	CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	CollisionMesh->AttachToComponent(this->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	// MVisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	// MVisualMesh->AttachToComponent(this->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	
	//SetActorTickEnabled(false);
}


// Called when the game starts or when spawned
void ALavaParticle::BeginPlay() { Super::BeginPlay(); }
// Called every frame
void ALavaParticle::Tick(float DeltaTime) { Super::Tick(DeltaTime); }


#pragma region MainLogick

double  ALavaParticle::GetMainMass()		 { return this->MainMass; }
FVector ALavaParticle::GetMainVelocity()	 { return this->MainVelocity; }
//FVector ALavaParticle::GetMainAcceleration() { return this->MainAcceleration; }

void ALavaParticle::SetBeginParameters(double NewMass, FVector NewVelocity)
{
	this->MainMass		= NewMass;
	this->MainVelocity	= NewVelocity;
}

void ALavaParticle::SetMainMass(double NewMass)			 { this->MainMass = NewMass; }
void ALavaParticle::SetMainVelocity(FVector NewVelocity) { this->MainVelocity = NewVelocity; }


void ALavaParticle::CalculateAcceleration()
{
	
}

//TODO: min/max Velocity 
void ALavaParticle::CalculateVelocity(float DeltaTime)
{
		//V1: Euler's method 
	this->MainVelocity += (this->MainAcceleration * DeltaTime);

		//V2: Werle method
	//FVector HalfAcceleration = this->Acceleration * (0.5f * DeltaTime);
	//this->Velocity += HalfAcceleration;
}

void ALavaParticle::Movement(float DeltaTime)
{
	FVector NewLocation = this->GetActorLocation() + (this->MainVelocity * DeltaTime);
	FHitResult* HitResult = nullptr;
	this->SetActorLocation(NewLocation,true, HitResult, ETeleportType::None);

	if (HitResult->bBlockingHit)
	{
		// TODO: 111
	}
	
}


#pragma endregion MainLogick
