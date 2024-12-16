#include "E5107.h"

AE5107::AE5107(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(3);
    this->bIsMapObject = true;
    this->ParamE5107 = NULL;
    this->PushSpeed = 0.00f;
    this->SibukiSize = 0.00f;
    this->SoundOn = false;
    this->AudioComponentWater = NULL;
    this->AudioComponentSibuki = NULL;
}


