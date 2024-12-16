#include "E5720.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "EnemyLocus.h"
#include "EnemyPathPlayerComponent.h"

AE5720::AE5720(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponentBudgeted>(TEXT("BoneMesh_0"))) {
    this->Life.AddDefaulted(15);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(15);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(15);
    this->PrimitiveComponentA.AddDefaulted(19);
    this->PrimitiveComponentB.AddDefaulted(19);
    this->PrimitiveComponentC.AddDefaulted(19);
    this->MeshComponent.AddDefaulted(34);
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->EffectComponent.AddDefaulted(16);
    this->PartsWorks.AddDefaulted(19);
    this->EnemyLocus = CreateDefaultSubobject<UEnemyLocus>(TEXT("LOCUS"));
}


