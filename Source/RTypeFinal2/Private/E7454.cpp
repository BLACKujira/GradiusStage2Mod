#include "E7454.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

AE7454::AE7454(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->bIsMapObject = true;
    this->Mesh = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh_Destroy = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Mesh_Destroy"));
    this->BlockPatternData = NULL;
    this->ParamData = NULL;
    this->Mesh->SetupAttachment(RootComponent);
    this->Mesh_Destroy->SetupAttachment(RootComponent);
}


