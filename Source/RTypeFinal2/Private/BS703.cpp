#include "BS703.h"

ABS703::ABS703(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->bIsMapObject = true;
    this->ParamBS703 = NULL;
    this->PartAActor = NULL;
    this->PartBActor = NULL;
    this->PartCActor = NULL;
}


