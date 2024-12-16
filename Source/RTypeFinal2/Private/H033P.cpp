#include "H033P.h"
#include "Components/StaticMeshComponent.h"

AH033P::AH033P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UrokoMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UrokoMesh"));
    this->UrokoMeshComponent->SetupAttachment(RootComponent);
}


