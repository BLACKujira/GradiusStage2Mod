#include "BS006.h"
#include "EnemyPathPlayerComponent.h"

ABS006::ABS006(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(17);
    this->PrimitiveComponentB.AddDefaulted(7);
    this->PrimitiveComponentC.AddDefaulted(21);
    this->MeshComponent.AddDefaulted(6);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->bIsMapObject = true;
    this->ParamBS006 = NULL;
    this->AudioRotate = NULL;
}


