#include "E1703.h"
#include "EnemyPathPlayerComponent.h"

AE1703::AE1703(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(20);
    this->PrimitiveComponentB.AddDefaulted(20);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->StaticMeshComponent.AddDefaulted(1);
}


