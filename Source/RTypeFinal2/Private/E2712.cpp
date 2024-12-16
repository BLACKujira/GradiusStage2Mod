#include "E2712.h"
#include "EnemyHit.h"
#include "EnemyLand.h"

AE2712::AE2712(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EnemyLand = CreateDefaultSubobject<UEnemyLand>(TEXT("Land"));
    this->EnemyHit = CreateDefaultSubobject<UEnemyHit>(TEXT("hit"));
}


