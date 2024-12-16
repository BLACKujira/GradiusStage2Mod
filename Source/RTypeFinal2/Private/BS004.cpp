#include "BS004.h"

ABS004::ABS004(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(11);
    this->PrimitiveComponentB.AddDefaulted(3);
    this->PrimitiveComponentC.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(9);
    this->EffectComponent.AddDefaulted(8);
    this->bIsMapObject = true;
    this->ParamBS004 = NULL;
    this->BioActor = NULL;
    this->PowCountData = NULL;
    this->CameraShake = NULL;
    this->AudioJet = NULL;
    this->AudioCore = NULL;
}


