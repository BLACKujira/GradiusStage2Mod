#include "EH010Cartridge.h"
#include "Components/SkeletalMeshComponent.h"

AEH010Cartridge::AEH010Cartridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Param = NULL;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
}


