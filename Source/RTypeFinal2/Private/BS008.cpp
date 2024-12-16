#include "BS008.h"
#include "EnemyPathPlayerComponent.h"

ABS008::ABS008(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(23);
    this->PrimitiveComponentB.AddDefaulted(11);
    this->PrimitiveComponentC.AddDefaulted(16);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(21);
    this->bIsMapObject = true;
    this->ParamBS008 = NULL;
    this->BomActor = NULL;
}


