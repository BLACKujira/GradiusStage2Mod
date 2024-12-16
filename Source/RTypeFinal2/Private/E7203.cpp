#include "E7203.h"

AE7203::AE7203(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(6);
    this->PrimitiveComponentB.AddDefaulted(7);
    this->PrimitiveComponentC.AddDefaulted(6);
    this->MeshComponent.AddDefaulted(4);
    this->EffectComponent.AddDefaulted(11);
}


