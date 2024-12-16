#include "E1195.h"

AE1195::AE1195(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(2);
    this->bIsMapObject = true;
    this->ParamE1195 = NULL;
    this->SerialNo = -1;
    this->CameraShake = NULL;
    this->AudioBeam = NULL;
}


