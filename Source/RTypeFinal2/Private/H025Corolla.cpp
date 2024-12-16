#include "H025Corolla.h"
#include "Components/StaticMeshComponent.h"

AH025Corolla::AH025Corolla(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}


