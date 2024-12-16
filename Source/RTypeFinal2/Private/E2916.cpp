#include "E2916.h"

AE2916::AE2916(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(9);
    this->PrimitiveComponentB.AddDefaulted(9);
    this->PrimitiveComponentC.AddDefaulted(9);
    this->MeshComponent.AddDefaulted(7);
    this->EffectComponent.AddDefaulted(2);
    this->bIsMapObject = true;
    this->ParamE2916 = NULL;
    this->Serial = 0;
    this->RotateSpeed = 0.00f;
    this->E2900Manager = NULL;
}


