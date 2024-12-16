#include "BS021.h"

ABS021::ABS021(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(10);
    this->PrimitiveComponentB.AddDefaulted(10);
    this->PrimitiveComponentC.AddDefaulted(10);
    this->MeshComponent.AddDefaulted(4);
    this->EffectComponent.AddDefaulted(12);
}


