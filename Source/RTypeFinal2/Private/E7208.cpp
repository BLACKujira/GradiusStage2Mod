#include "E7208.h"

AE7208::AE7208(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->bIsMapObject = true;
    this->ParamE7208 = NULL;
    this->E7208BP = NULL;
    this->SerialNo = 0;
    this->DestroyPatternID = 0;
}


