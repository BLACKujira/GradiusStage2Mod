#include "E272.h"

AE272::AE272(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(5);
    this->PrimitiveComponentB.AddDefaulted(5);
    this->PrimitiveComponentC.AddDefaulted(5);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(15);
    this->bIsMapObject = true;
    this->ParamE272 = NULL;
    this->SerialNo = 0;
    this->WaterLineZ = 0.00f;
}


