#include "BS016Fish.h"
#include "EnemyPathPlayerComponent.h"

ABS016Fish::ABS016Fish(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(5);
    this->PrimitiveComponentB.AddDefaulted(5);
    this->MeshComponent.AddDefaulted(2);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(1);
    this->ParentEnemy = NULL;
    this->Spline = NULL;
}


