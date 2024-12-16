#include "E3504_3.h"

AE3504_3::AE3504_3(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(6);
    this->PrimitiveComponentC.AddDefaulted(6);
    this->MeshComponent.AddDefaulted(4);
    this->EffectComponent.AddDefaulted(3);
    this->bIsMapObject = true;
    this->ParamE3504_3 = NULL;
    this->SerialNo = 0;
    this->SoundFlag = false;
    this->AudioComponentMove = NULL;
}


