#include "S1294Missile.h"
#include "EEnemyType.h"

AS1294Missile::AS1294Missile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyType = EEnemyType::BULLET;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->HitEffect = NULL;
}

void AS1294Missile::RejectOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AS1294Missile::RejectOnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit) {
}

void AS1294Missile::AttackOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


