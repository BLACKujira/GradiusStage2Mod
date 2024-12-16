#include "E7104.h"
#include "EnemyPathPlayerComponent.h"

AE7104::AE7104(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(34);
    this->PrimitiveComponentB.AddDefaulted(35);
    this->PrimitiveComponentC.AddDefaulted(34);
    this->MeshComponent.AddDefaulted(7);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(46);
    this->AudioComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamE7104 = NULL;
    this->SerialNoE7104 = 1;
    this->ActorE7106 = NULL;
}


