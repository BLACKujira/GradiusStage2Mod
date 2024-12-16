#include "BS705_Capsule.h"
#include "EnemyPathPlayerComponent.h"

ABS705_Capsule::ABS705_Capsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Tags.AddDefaulted(1);
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(15);
    this->bIsMapObject = true;
    this->ParamBS705_Capsule = NULL;
    this->ParentEnemy = NULL;
}


