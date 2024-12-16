#include "S5204.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "EEnemyType.h"

AS5204::AS5204(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponentBudgeted>(TEXT("BodyMesh"))) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(2);
    this->ParentEnemy = NULL;
}


