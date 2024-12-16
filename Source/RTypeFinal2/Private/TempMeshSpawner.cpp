#include "TempMeshSpawner.h"
#include "Components/InstancedStaticMeshComponent.h"

ATempMeshSpawner::ATempMeshSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Mesh"));
    this->MeshVisibility = false;
}


