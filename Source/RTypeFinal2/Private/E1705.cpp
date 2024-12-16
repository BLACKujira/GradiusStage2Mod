#include "E1705.h"
#include "EnemyPathPlayerComponent.h"

AE1705::AE1705(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(8);
    this->PrimitiveComponentB.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PointLightComponent = NULL;
}


