#include "BS705.h"

ABS705::ABS705(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Tags.AddDefaulted(1);
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(22);
    this->PrimitiveComponentB.AddDefaulted(23);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(1);
    this->AudioComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamBS705 = NULL;
    this->BS705_Capsule = NULL;
}


