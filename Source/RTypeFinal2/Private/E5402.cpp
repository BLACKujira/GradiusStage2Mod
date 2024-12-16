#include "E5402.h"

AE5402::AE5402(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentB.AddDefaulted(2);
    this->PrimitiveComponentC.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE5402 = NULL;
    this->SerialNo = 0;
    this->modelId = 0;
    this->MoveDegree = 0.00f;
    this->MoveVelocity = 0.00f;
    this->RotSpeed = 0.00f;
    this->ReflectActor = NULL;
}


