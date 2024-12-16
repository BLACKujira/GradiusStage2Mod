#include "E383.h"

AE383::AE383(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(3);
    this->PrimitiveComponentB.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(2);
    this->AudioComponentCharge = NULL;
    this->AudioComponentBeam = NULL;
    this->CameraShake = NULL;
    this->ParentActor = NULL;
}


