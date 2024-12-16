#include "BS501.h"

ABS501::ABS501(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(13);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(13);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(8);
    this->bIsMapObject = true;
    this->ParamBS501 = NULL;
    this->AudioComponentCharge = NULL;
    this->AudioComponentShot = NULL;
}


