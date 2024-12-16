#include "E7207.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

AE7207::AE7207(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->bIsMapObject = true;
    this->Mesh = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Mesh"));
    this->BlockPatternData = NULL;
    this->ParamData = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}


