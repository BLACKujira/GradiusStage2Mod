#include "BS704.h"
#include "EnemyHit.h"
#include "EnemyShoot.h"

ABS704::ABS704(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(6);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(6);
    this->MeshComponent.AddDefaulted(2);
    this->EnemyDamage.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(6);
    this->AudioComponent.AddDefaulted(2);
    this->EnemyShoot = CreateDefaultSubobject<UEnemyShoot>(TEXT("SHOOT"));
    this->EnemyHit = CreateDefaultSubobject<UEnemyHit>(TEXT("hit"));
    this->bIsMapObject = false;
    this->SetBS704Param = NULL;
}


