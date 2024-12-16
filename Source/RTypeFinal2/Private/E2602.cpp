#include "E2602.h"
#include "EnemyShoot.h"

AE2602::AE2602(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(3);
    this->EffectComponent.AddDefaulted(1);
    this->EnemyShoot = CreateDefaultSubobject<UEnemyShoot>(TEXT("SHOOT"));
    this->bIsMapObject = true;
    this->ParamE2602 = NULL;
    this->SerialNo = 0;
    this->Type = 0;
    this->ParentActor = NULL;
    this->GunMinRotParam = 0.00f;
    this->GunMaxRotParam = 0.00f;
}


