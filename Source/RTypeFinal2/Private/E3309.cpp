#include "E3309.h"

AE3309::AE3309(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentB.AddDefaulted(4);
    this->PrimitiveComponentC.AddDefaulted(4);
    this->MeshComponent.AddDefaulted(4);
    this->EffectComponent.AddDefaulted(2);
    this->bIsMapObject = true;
    this->ParamE3309 = NULL;
}

void AE3309::AttackOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


