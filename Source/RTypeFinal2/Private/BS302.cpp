#include "BS302.h"
#include "EnemyPathPlayerComponent.h"

ABS302::ABS302(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(15);
    this->PrimitiveComponentB.AddDefaulted(10);
    this->PrimitiveComponentC.AddDefaulted(4);
    this->MeshComponent.AddDefaulted(9);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(21);
    this->Path = NULL;
    this->AudioComponentVernier = NULL;
    this->AudioComponentBeam = NULL;
    this->PowCountData = NULL;
    this->ParentEnemy = NULL;
}


