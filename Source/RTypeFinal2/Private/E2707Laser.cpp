#include "E2707Laser.h"
#include "EEnemyType.h"

AE2707Laser::AE2707Laser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(3);
    this->EffectComponent.AddDefaulted(2);
    this->ParentEnemy = NULL;
}


