#include "E5502.h"

AE5502::AE5502(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->AudioComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE5502 = NULL;
    this->SerialNo = 0;
}


