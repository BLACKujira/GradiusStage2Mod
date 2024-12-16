#include "E1641_LandEff.h"

AE1641_LandEff::AE1641_LandEff(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE1641_LandEff = NULL;
    this->FireLength = 500.00f;
    this->FireExtendTime = 0.00f;
}


