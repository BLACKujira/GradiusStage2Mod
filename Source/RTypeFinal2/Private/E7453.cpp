#include "E7453.h"
#include "EnemyHit.h"

AE7453::AE7453(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EnemyDamage.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(4);
    this->EnemyHit = CreateDefaultSubobject<UEnemyHit>(TEXT("hit"));
    this->bIsMapObject = false;
    this->SetE7453Param = NULL;
    this->LinkE7408Data = NULL;
    this->AudioComponentMove = NULL;
}


