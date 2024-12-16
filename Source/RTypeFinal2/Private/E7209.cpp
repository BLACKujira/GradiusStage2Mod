#include "E7209.h"

AE7209::AE7209(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->bIsMapObject = true;
    this->ParamE7209 = NULL;
    this->E7209BP = NULL;
    this->SerialNo = 0;
}


