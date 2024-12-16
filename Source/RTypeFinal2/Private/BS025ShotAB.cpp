#include "BS025ShotAB.h"

ABS025ShotAB::ABS025ShotAB(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(3);
    this->ParentSecActor = NULL;
    this->TargetSecActor = NULL;
}


