#include "E5405.h"

AE5405::AE5405(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(4);
    this->PrimitiveComponentB.AddDefaulted(3);
    this->PrimitiveComponentC.AddDefaulted(4);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(5);
    this->bIsMapObject = true;
    this->ParamE5405 = NULL;
    this->AudioComponentVernier = NULL;
    this->AudioComponentHatch = NULL;
}


