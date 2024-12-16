#include "E5105.h"

AE5105::AE5105(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(7);
    this->PrimitiveComponentB.AddDefaulted(7);
    this->PrimitiveComponentC.AddDefaulted(7);
    this->MeshComponent.AddDefaulted(14);
    this->EffectComponent.AddDefaulted(5);
}


