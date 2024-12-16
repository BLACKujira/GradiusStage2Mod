#include "E3614.h"
#include "EnemyPathPlayerComponent.h"

AE3614::AE3614(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->ParentEnemy = NULL;
}


