#include "E1020.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "EnemyLocus.h"
#include "EnemyPathPlayerComponent.h"

AE1020::AE1020(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponentBudgeted>(TEXT("BoneMesh_0"))) {
    this->Life.AddDefaulted(14);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(14);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(14);
    this->PrimitiveComponentA.AddDefaulted(18);
    this->PrimitiveComponentB.AddDefaulted(18);
    this->PrimitiveComponentC.AddDefaulted(18);
    this->MeshComponent.AddDefaulted(32);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EnemyDamage.AddDefaulted(14);
    this->EffectComponent.AddDefaulted(15);
    this->PartsWorks.AddDefaulted(18);
    this->EnemyLocus = CreateDefaultSubobject<UEnemyLocus>(TEXT("LOCUS"));
}

void AE1020::AttackOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


