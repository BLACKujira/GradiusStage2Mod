#include "E2924.h"

AE2924::AE2924(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(9);
    this->PrimitiveComponentB.AddDefaulted(9);
    this->PrimitiveComponentC.AddDefaulted(9);
    this->MeshComponent.AddDefaulted(7);
    this->EffectComponent.AddDefaulted(12);
    this->bIsMapObject = true;
    this->ParamE2924 = NULL;
    this->Serial = 0;
    this->ShootRangeBegin = 0.00f;
    this->ShootRangeEnd = 360.00f;
    this->FirstShootTime = 0.00f;
    this->E2900Manager = NULL;
}


