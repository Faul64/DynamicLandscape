// Fill out your copyright notice in the Description page of Project Settings.


#include "LavaParticle.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ALavaParticle::ALavaParticle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachToComponent(this->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	SetActorTickEnabled(false);
}



// Called when the game starts or when spawned
void ALavaParticle::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALavaParticle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

