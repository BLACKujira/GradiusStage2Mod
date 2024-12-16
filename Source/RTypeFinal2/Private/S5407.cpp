#include "S5407.h"
#include "EEnemyType.h"
#include "EnemyHit.h"

AS5407::AS5407(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(6);
    this->EffectComponent.AddDefaulted(1);
    this->EnemyHit = CreateDefaultSubobject<UEnemyHit>(TEXT("hit"));
    this->ParentEnemy = NULL;
}


