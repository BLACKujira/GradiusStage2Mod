#include "E1191.h"
#include "EnemyHit.h"
#include "EnemyLand.h"
#include "ExSphereComponent.h"

AE1191::AE1191(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UExSphereComponent>(TEXT("CollisionC"))) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(4);
    this->EnemyLand = CreateDefaultSubobject<UEnemyLand>(TEXT("EnemyLand"));
    this->EnemyHit = CreateDefaultSubobject<UEnemyHit>(TEXT("EnemyHit"));
    this->ArmActors.AddDefaulted(3);
}


