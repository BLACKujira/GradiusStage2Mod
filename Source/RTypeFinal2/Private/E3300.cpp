#include "E3300.h"

AE3300::AE3300(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE3300 = NULL;
    this->SerialNo = 0;
    this->StaticMeshComponent.AddDefaulted(1);
}


