#include "BS002.h"

ABS002::ABS002(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->bIsMapObject = true;
    this->ParamBS002 = NULL;
    this->PowCountData = NULL;
    this->Hangar = NULL;
    this->WarningAudioComponent = NULL;
    this->ContainerA = NULL;
    this->ContainerB = NULL;
    this->CombinationTable = NULL;
}


