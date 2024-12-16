#include "BS705_CapsuleBullet.h"
#include "EEnemyType.h"

ABS705_CapsuleBullet::ABS705_CapsuleBullet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(2);
    this->ParentEnemy = NULL;
}


