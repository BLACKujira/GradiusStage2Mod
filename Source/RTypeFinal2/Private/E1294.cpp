#include "E1294.h"

AE1294::AE1294(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(1);
    this->MapObjectFlag = false;
    this->NoCollisionFlag = false;
    this->EnemyParam = NULL;
    this->EnemySerialNo = 0;
    this->DeathAllFlag = false;
}


