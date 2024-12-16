#include "BS504.h"
#include "EnemyPathPlayerComponent.h"

ABS504::ABS504(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(5);
    this->PrimitiveComponentB.AddDefaulted(5);
    this->PrimitiveComponentC.AddDefaulted(5);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(14);
    this->AudioComponent.AddDefaulted(2);
}


