#include "BS706.h"

ABS706::ABS706(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(3);
    this->PrimitiveComponentB.AddDefaulted(3);
    this->PrimitiveComponentC.AddDefaulted(5);
    this->MeshComponent.AddDefaulted(5);
    this->EffectComponent.AddDefaulted(22);
    this->bIsMapObject = false;
    this->SetBS706Param = NULL;
    this->SetE7609Param = NULL;
    this->StageEffectAct = NULL;
    this->LaserData = NULL;
}


