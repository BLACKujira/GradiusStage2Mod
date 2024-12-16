#include "E3501Land.h"

AE3501Land::AE3501Land(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentC.AddDefaulted(3);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(3);
    this->bIsMapObject = true;
    this->ParamE3501 = NULL;
    this->SerialNo = 0;
    this->Type = 0;
    this->SoundFlag = false;
    this->AudioComponentOpen = NULL;
}


