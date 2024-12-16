#include "E2611.h"
#include "EnemyPathPlayerComponent.h"

AE2611::AE2611(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(4);
    this->PrimitiveComponentB.AddDefaulted(3);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(4);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(2);
    this->bIsMapObject = false;
    this->ParamE2611 = NULL;
    this->Serial = 0;
    this->PathData = NULL;
    this->Acceleration = 0.00f;
    this->MaxSpeed = 0.00f;
}


