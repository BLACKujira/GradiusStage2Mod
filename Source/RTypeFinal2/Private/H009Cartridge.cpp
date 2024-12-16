#include "H009Cartridge.h"
#include "Components/StaticMeshComponent.h"

AH009Cartridge::AH009Cartridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}


