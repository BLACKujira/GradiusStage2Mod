#include "E3505_2.h"

AE3505_2::AE3505_2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(3);
    this->PrimitiveComponentC.AddDefaulted(3);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE3505_2 = NULL;
    this->SerialNo = 0;
}


