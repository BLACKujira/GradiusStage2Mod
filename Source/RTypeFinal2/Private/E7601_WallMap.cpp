#include "E7601_WallMap.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

AE7601_WallMap::AE7601_WallMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->bIsMapObject = true;
    this->Mesh = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Mesh"));
    this->BlockPatternData = NULL;
    this->ParamData = NULL;
    this->IsBroke = false;
    this->Mesh->SetupAttachment(RootComponent);
}


