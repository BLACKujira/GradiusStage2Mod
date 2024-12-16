#include "E5501.h"

AE5501::AE5501(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(6);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(6);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(3);
    this->bIsMapObject = true;
    this->ParamE5501 = NULL;
    this->Path = NULL;
    this->AudioComponentMove = NULL;
    this->AudioComponentShoot = NULL;
}


