#include "E2504.h"
#include "Components/SceneComponent.h"

AE2504::AE2504(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(3);
    this->EffectComponent.AddDefaulted(3);
    // this->pSlot[0] = CreateDefaultSubobject<USceneComponent>(TEXT("EnemySlot"));
    // this->pSlot[1] = CreateDefaultSubobject<USceneComponent>(TEXT("EnemySlot"));
    // this->pSlot[2] = CreateDefaultSubobject<USceneComponent>(TEXT("EnemySlot"));
    // this->pSlot[3] = CreateDefaultSubobject<USceneComponent>(TEXT("EnemySlot"));
    // this->pSlot[4] = CreateDefaultSubobject<USceneComponent>(TEXT("EnemySlot"));
}


