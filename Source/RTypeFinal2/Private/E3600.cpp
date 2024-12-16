#include "E3600.h"
#include "EnemyPathPlayerComponent.h"

AE3600::AE3600(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(29);
    this->PrimitiveComponentC.AddDefaulted(29);
    this->MeshComponent.AddDefaulted(1);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(13);
    this->bIsMapObject = true;
    this->ParamE3600 = NULL;
    this->VernierEnv = NULL;
}


