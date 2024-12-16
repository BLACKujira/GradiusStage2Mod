#include "BS010.h"

ABS010::ABS010(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(10);
    this->PrimitiveComponentB.AddDefaulted(5);
    this->PrimitiveComponentC.AddDefaulted(13);
    this->MeshComponent.AddDefaulted(3);
    this->EffectComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamBS010 = NULL;
}


