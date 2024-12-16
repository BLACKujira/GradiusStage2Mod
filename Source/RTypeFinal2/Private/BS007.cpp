#include "BS007.h"

ABS007::ABS007(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(10);
    this->PrimitiveComponentB.AddDefaulted(10);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(27);
    this->EffectComponent.AddDefaulted(9);
    this->DeathExpandCurve = NULL;
    this->DeathShrinkCurve = NULL;
    this->AudioExpand = NULL;
    this->AudioShrink = NULL;
    this->CameraShake = NULL;
}


