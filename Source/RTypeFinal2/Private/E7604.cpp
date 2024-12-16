#include "E7604.h"

AE7604::AE7604(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(3);
    this->PrimitiveComponentB.AddDefaulted(3);
    this->PrimitiveComponentC.AddDefaulted(6);
    this->MeshComponent.AddDefaulted(2);
    this->EnemyDamage.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
}


