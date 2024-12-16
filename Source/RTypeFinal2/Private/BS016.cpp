#include "BS016.h"

ABS016::ABS016(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentB.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(3);
    this->EffectComponent.AddDefaulted(20);
    this->bIsMapObject = true;
    this->ParamBS016 = NULL;
    this->ParamCroc = NULL;
    this->ParamBug = NULL;
    this->ParamBird = NULL;
    this->ParamFish = NULL;
}


