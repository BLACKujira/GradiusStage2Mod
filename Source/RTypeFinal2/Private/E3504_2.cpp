#include "E3504_2.h"

AE3504_2::AE3504_2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(20);
    this->PrimitiveComponentC.AddDefaulted(20);
    this->MeshComponent.AddDefaulted(6);
    this->EffectComponent.AddDefaulted(5);
    this->bIsMapObject = true;
    this->ParamE3504_2 = NULL;
    this->SerialNo = 0;
    this->SoundFlag = false;
    this->AudioComponentMove = NULL;
}


