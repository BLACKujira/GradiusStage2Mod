#include "E1294Engine.h"

AE1294Engine::AE1294Engine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(12);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(12);
    this->AudioComponent.AddDefaulted(1);
    this->MapObjectFlag = false;
    this->EnemyParam = NULL;
    this->EnemySerialNo = 0;
}


