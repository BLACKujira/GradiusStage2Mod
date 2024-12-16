#include "BS307Tentacle.h"

ABS307Tentacle::ABS307Tentacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(20);
    this->PrimitiveComponentB.AddDefaulted(20);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->ParentEnemy = NULL;
}


