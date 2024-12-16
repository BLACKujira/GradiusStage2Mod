#include "E1920.h"

AE1920::AE1920(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(14);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(14);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(14);
    this->PrimitiveComponentA.AddDefaulted(18);
    this->PrimitiveComponentB.AddDefaulted(18);
    this->PrimitiveComponentC.AddDefaulted(18);
    this->MeshComponent.AddDefaulted(32);
    this->EnemyDamage.AddDefaulted(14);
    this->EffectComponent.AddDefaulted(15);
    this->PartsWorks.AddDefaulted(18);
}


