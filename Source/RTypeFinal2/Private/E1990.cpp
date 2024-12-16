#include "E1990.h"
#include "EnemyPathPlayerComponent.h"

AE1990::AE1990(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentB.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
}


