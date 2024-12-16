#include "E7606.h"
#include "EnemyShoot.h"
#include "ExSphereComponent.h"

AE7606::AE7606(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UExSphereComponent>(TEXT("CollisionC"))) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(3);
    this->EffectComponent.AddDefaulted(6);
    this->EnemyShoot = CreateDefaultSubobject<UEnemyShoot>(TEXT("SHOOT"));
}


