#include "E3504_1.h"

AE3504_1::AE3504_1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(6);
    this->PrimitiveComponentC.AddDefaulted(6);
    this->MeshComponent.AddDefaulted(7);
    this->EffectComponent.AddDefaulted(6);
    this->bIsMapObject = true;
    this->ParamE3504_1 = NULL;
    this->SerialNo = 0;
    this->SoundFlag = false;
    this->AudioComponentMove = NULL;
}


