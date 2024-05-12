
#include "CreatorLavaFlows.h"
#include "Components/ArrowComponent.h"
//#include "Components/BillboardComponent.h"

// Sets default values
ACreatorLavaFlows::ACreatorLavaFlows()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	StartFlowDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("StartFlowDirection"));
	//Icon = CreateDefaultSubobject<UBillboardComponent>(TEXT("Icon"));
	//Icon->AttachToComponent(this->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	// Icon->SetSprite(UTexture2D("Image_Volcano"));
}

// Called when the game starts or when spawned
void ACreatorLavaFlows::BeginPlay() { Super::BeginPlay(); }
// Called every frame
void ACreatorLavaFlows::Tick(float DeltaTime) { Super::Tick(DeltaTime); }
