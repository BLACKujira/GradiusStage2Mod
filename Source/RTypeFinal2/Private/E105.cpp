#include "E105.h"
#include "EEnemyConfigBits.h"
#include "ExBoxComponent.h"

AE105::AE105(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UExBoxComponent>(TEXT("CollisionC"))) {
    this->ConfigFlags = EEnemyConfigBits::PHYSICS;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
}

void AE105::RejectOnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit) {
}


