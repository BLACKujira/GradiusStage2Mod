#include "BS025Head.h"

ABS025Head::ABS025Head(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(2);
    this->AudioComponent.AddDefaulted(2);
    this->Path = NULL;
    this->BossActor = NULL;
    this->TailActor = NULL;
    this->CameraShake = NULL;
}


