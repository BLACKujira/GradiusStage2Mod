#include "BS025Sec.h"

ABS025Sec::ABS025Sec(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(7);
    this->TargetSec = NULL;
    this->ShotActor = NULL;
    this->TargetShotActor = NULL;
    this->ParentActor = NULL;
}


