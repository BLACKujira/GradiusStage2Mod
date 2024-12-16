#include "E2609.h"

AE2609::AE2609(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(2);
    this->bIsMapObject = false;
    this->ParamE2609 = NULL;
    this->Serial = 0;
}


