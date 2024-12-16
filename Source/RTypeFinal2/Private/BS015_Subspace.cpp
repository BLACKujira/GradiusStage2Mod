#include "BS015_Subspace.h"
#include "EEnemyType.h"

ABS015_Subspace::ABS015_Subspace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->ParentEnemy = NULL;
    this->StaticMeshComponent.AddDefaulted(1);
}


