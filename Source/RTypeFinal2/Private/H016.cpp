#include "H016.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

AH016::AH016(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SearchedActor = NULL;
    this->SearchedComponent = NULL;
    this->MeshBody = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Mesh"));
    this->ShotSE = NULL;
    this->ShotEff = NULL;
}


