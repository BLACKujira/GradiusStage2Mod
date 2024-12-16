#include "E230.h"

AE230::AE230(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(4);
    this->PrimitiveComponentB.AddDefaulted(4);
    this->PrimitiveComponentC.AddDefaulted(4);
    this->MeshComponent.AddDefaulted(11);
    this->EffectComponent.AddDefaulted(1);
    this->AudioComponentAttack = NULL;
}


