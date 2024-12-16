#include "E2101_SandSmoke.h"

AE2101_SandSmoke::AE2101_SandSmoke(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->EffectComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->BodyEffect = NULL;
    this->SerialNo = 0;
    this->E2101Param = NULL;
    this->PathData = NULL;
}


