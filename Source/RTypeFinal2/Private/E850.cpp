#include "E850.h"

AE850::AE850(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(4);
    this->PrimitiveComponentB.AddDefaulted(4);
    this->PrimitiveComponentC.AddDefaulted(5);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(4);
}


