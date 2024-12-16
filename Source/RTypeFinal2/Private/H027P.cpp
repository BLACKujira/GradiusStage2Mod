#include "H027P.h"
#include "Components/StaticMeshComponent.h"

AH027P::AH027P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SearchedActor = NULL;
    this->SearchedComponent = NULL;
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh->SetupAttachment(RootComponent);
}


