#include "E100.h"
#include "EnemyHit.h"
#include "EnemyPathPlayerComponent.h"
#include "ExCapsuleComponent.h"

AE100::AE100(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UExCapsuleComponent>(TEXT("CollisionC"))) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(4);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(9);
    this->AudioComponent.AddDefaulted(1);
    this->EnemyHit = CreateDefaultSubobject<UEnemyHit>(TEXT("hit"));
    this->Explosion = NULL;
}

void AE100::ScatterCallback(FEnemyExplosionScatterEventParam& _event) {
}


