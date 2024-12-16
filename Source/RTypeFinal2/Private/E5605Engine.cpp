#include "E5605Engine.h"

AE5605Engine::AE5605Engine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(12);
    this->EffectComponent.AddDefaulted(12);
    this->AudioComponent.AddDefaulted(1);
    this->MapObjectFlag = false;
    this->EnemyParam = NULL;
    this->ParentMesh = NULL;
}


