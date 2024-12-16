#include "E3305.h"

AE3305::AE3305(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE3305 = NULL;
    this->StaticMeshComponent.AddDefaulted(1);
    this->AudioComponentOpen = NULL;
}


