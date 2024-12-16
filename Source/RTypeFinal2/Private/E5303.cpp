#include "E5303.h"

AE5303::AE5303(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(29);
    this->MapObjectFlag = false;
    this->NoCollisionFlag = false;
    this->EnemyParam = NULL;
    this->EnemySerialNo = 0;
    this->DeathAllFlag = false;
}


