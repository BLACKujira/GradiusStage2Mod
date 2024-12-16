#include "S1186.h"
#include "EEnemyType.h"
#include "EnemyPathPlayerComponent.h"

AS1186::AS1186(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(1);
    this->ParentEnemy = NULL;
    this->PathData = NULL;
}


