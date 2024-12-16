#include "E7609.h"
#include "EnemyHit.h"

AE7609::AE7609(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(5);
    this->PrimitiveComponentB.AddDefaulted(5);
    this->PrimitiveComponentC.AddDefaulted(10);
    this->MeshComponent.AddDefaulted(3);
    this->EnemyDamage.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(9);
    this->EnemyHit = CreateDefaultSubobject<UEnemyHit>(TEXT("hit"));
    this->bIsMapObject = false;
    this->SetE7609Param = NULL;
    this->MeshType = 0;
    this->SetStartRotation = 0;
    this->bTestRotation = false;
}

void AE7609::AttackOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


