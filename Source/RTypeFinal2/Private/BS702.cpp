#include "BS702.h"

ABS702::ABS702(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Tags.AddDefaulted(1);
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(9);
    this->PrimitiveComponentB.AddDefaulted(9);
    this->PrimitiveComponentC.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(6);
    this->bIsMapObject = true;
    this->ParamBS702 = NULL;
    this->CameraShake = NULL;
    this->AudioComponentHand = NULL;
    this->AudioComponentSign = NULL;
    this->AudioComponentShot = NULL;
}


