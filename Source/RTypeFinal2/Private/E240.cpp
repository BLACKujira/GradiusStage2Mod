#include "E240.h"
#include "EnemyPathPlayerComponent.h"

AE240::AE240(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(18);
    this->PrimitiveComponentB.AddDefaulted(18);
    this->PrimitiveComponentC.AddDefaulted(14);
    this->MeshComponent.AddDefaulted(6);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(6);
    this->AnimClass = NULL;
    this->AnimClassDecoy = NULL;
    this->MID_Damage = NULL;
}


