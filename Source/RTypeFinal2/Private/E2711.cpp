#include "E2711.h"
#include "EnemyHit.h"
#include "EnemyLand.h"
#include "EnemyShoot.h"

AE2711::AE2711(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(3);
    this->EnemyShoot = CreateDefaultSubobject<UEnemyShoot>(TEXT("SHOOT"));
    this->EnemyLand = CreateDefaultSubobject<UEnemyLand>(TEXT("Land"));
    this->EnemyHit = CreateDefaultSubobject<UEnemyHit>(TEXT("hit"));
}


