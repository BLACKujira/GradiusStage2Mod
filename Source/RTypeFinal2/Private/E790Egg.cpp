#include "E790Egg.h"

AE790Egg::AE790Egg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE790Egg = NULL;
}


