#include "E1193.h"

AE1193::AE1193(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(6);
    this->bIsMapObject = true;
    this->ParamE1193 = NULL;
    this->SerialNo = -1;
    this->CameraShake = NULL;
    this->AudioJet = NULL;
}


