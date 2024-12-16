#include "E5201.h"

AE5201::AE5201(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE5201 = NULL;
    this->SerialNo = 0;
    this->modelId = 0;
    this->MoveDegree = 0.00f;
    this->MoveVelocity = 0.00f;
    this->RotSpeed = 0.00f;
}


