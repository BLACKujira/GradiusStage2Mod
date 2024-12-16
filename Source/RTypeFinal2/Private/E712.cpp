#include "E712.h"
#include "EnemyShoot.h"

AE712::AE712(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentB.AddDefaulted(2);
    this->PrimitiveComponentC.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(1);
    this->EnemyShoot = CreateDefaultSubobject<UEnemyShoot>(TEXT("SHOOT"));
}


