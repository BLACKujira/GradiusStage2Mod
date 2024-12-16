#include "E5605Bridge.h"

AE5605Bridge::AE5605Bridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(3);
    this->MapObjectFlag = false;
    this->EnemyParam = NULL;
    this->EnemySerialNo = 0;
}


