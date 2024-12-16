#include "E2600.h"

AE2600::AE2600(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(20);
    this->PrimitiveComponentC.AddDefaulted(20);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(2);
    this->ParamE2600 = NULL;
}


