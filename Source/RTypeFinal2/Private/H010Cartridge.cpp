#include "H010Cartridge.h"
#include "Components/SkeletalMeshComponent.h"

AH010Cartridge::AH010Cartridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
}


