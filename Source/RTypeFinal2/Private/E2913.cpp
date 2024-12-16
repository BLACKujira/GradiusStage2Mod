#include "E2913.h"

AE2913::AE2913(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(9);
    this->PrimitiveComponentB.AddDefaulted(9);
    this->PrimitiveComponentC.AddDefaulted(9);
    this->MeshComponent.AddDefaulted(6);
    this->EffectComponent.AddDefaulted(15);
    this->bIsMapObject = true;
    this->ParamE2913 = NULL;
    this->Serial = 0;
    this->ShootRangeBegin = 0.00f;
    this->ShootRangeEnd = 360.00f;
    this->FirstShootTime = 0.00f;
    this->E2900Manager = NULL;
}


