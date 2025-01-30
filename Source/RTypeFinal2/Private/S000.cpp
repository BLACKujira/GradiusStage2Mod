#include "S000.h"
#include "EEnemyType.h"
#include "ExSphereComponent.h"
#include "NiagaraComponent.h"

AS000::AS000(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UExSphereComponent>(TEXT("CollisionC"))) {
    UExSphereComponent* CollisionC = CreateDefaultSubobject<UExSphereComponent>(TEXT("CollisionC"));
    UExSphereComponent* CollisionA = CreateDefaultSubobject<UExSphereComponent>(TEXT("CollisionA"));
    UNiagaraComponent* EffBody = CreateDefaultSubobject<UNiagaraComponent>(TEXT("EffBody"));
    UNiagaraComponent* effHit = CreateDefaultSubobject<UNiagaraComponent>(TEXT("effHit"));

    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.Add(CollisionA);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.Add(CollisionC);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.Add(EffBody);
    this->EffectComponent.Add(effHit);
    this->ParentEnemy = NULL;

    // 设置 CollisionC 为根组件
    RootComponent = CollisionC;
}

void AS000::RejectOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AS000::RejectOnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit) {
}

void AS000::AttackOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


