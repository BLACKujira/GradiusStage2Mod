#include "E104.h"
#include "EnemyPathPlayerComponent.h"

AE104::AE104(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(3);
    this->PrimitiveComponentB.AddDefaulted(3);
    this->MeshComponent.AddDefaulted(4);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(6);
    this->AnimClass = NULL;
    this->Explosion = NULL;
}

void AE104::ScatterCallback(FEnemyExplosionScatterEventParam& _event) {
}


