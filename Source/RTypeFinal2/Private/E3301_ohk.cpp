#include "E3301_ohk.h"

AE3301_ohk::AE3301_ohk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
}


