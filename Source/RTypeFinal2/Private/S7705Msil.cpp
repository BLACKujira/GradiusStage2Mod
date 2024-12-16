#include "S7705Msil.h"

AS7705Msil::AS7705Msil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->ParentEnemy = NULL;
}


