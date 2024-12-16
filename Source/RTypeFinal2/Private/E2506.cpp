#include "E2506.h"

AE2506::AE2506(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->AudioComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE2506 = NULL;
    this->Path = NULL;
    this->StartDir = 0;
    this->E2506Serial = 0;
}


