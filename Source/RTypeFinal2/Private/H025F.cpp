#include "H025F.h"
#include "Components/StaticMeshComponent.h"

AH025F::AH025F(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mid = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}


