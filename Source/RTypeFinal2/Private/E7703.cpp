#include "E7703.h"
#include "EnemyShoot.h"

AE7703::AE7703(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentB.AddDefaulted(2);
    this->PrimitiveComponentC.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(2);
    this->EnemyShoot = CreateDefaultSubobject<UEnemyShoot>(TEXT("SHOOT"));
    this->AudioComponentCharge = NULL;
}


