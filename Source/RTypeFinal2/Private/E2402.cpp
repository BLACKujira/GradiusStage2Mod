#include "E2402.h"
#include "GroomComponent.h"
#include "EnemyPathPlayerComponent.h"
#include "EnemyShoot.h"

AE2402::AE2402(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EnemyDamage.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(3);
    this->EnemyShoot = CreateDefaultSubobject<UEnemyShoot>(TEXT("SHOOT"));
    this->body = NULL;
    this->Hair = CreateDefaultSubobject<UGroomComponent>(TEXT("Hair"));
}


