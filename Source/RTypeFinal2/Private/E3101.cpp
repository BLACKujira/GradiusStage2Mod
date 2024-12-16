#include "E3101.h"
#include "EnemyShoot.h"

AE3101::AE3101(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EnemyShoot = CreateDefaultSubobject<UEnemyShoot>(TEXT("SHOOT"));
    this->Comp = NULL;
    this->ParentActor = NULL;
}


