#include "E1294Hatch.h"

AE1294Hatch::AE1294Hatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->MapObjectFlag = false;
    this->EnemyParam = NULL;
    this->EnemySerialNo = 0;
}


