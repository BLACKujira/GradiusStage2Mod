#include "S5206.h"
#include "EEnemyType.h"

AS5206::AS5206(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(2);
    this->AudioComponent.AddDefaulted(1);
    this->ParentActor = NULL;
    this->ParentMesh = NULL;
}


