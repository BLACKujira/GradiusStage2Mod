#include "E2900.h"

AE2900::AE2900(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(9);
    this->PrimitiveComponentC.AddDefaulted(9);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(2);
    this->bIsMapObject = true;
    this->ParamE2900 = NULL;
    this->Serial = 0;
}


