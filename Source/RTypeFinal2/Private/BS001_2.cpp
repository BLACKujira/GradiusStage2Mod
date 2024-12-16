#include "BS001_2.h"

ABS001_2::ABS001_2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(18);
    this->PrimitiveComponentB.AddDefaulted(17);
    this->MeshComponent.AddDefaulted(4);
    this->EffectComponent.AddDefaulted(10);
    this->bIsMapObject = true;
    this->ParamBS001_2 = NULL;
    this->AudioComponentCharge = NULL;
    this->AudioComponentBeam = NULL;
    this->CameraShake = NULL;
}

void ABS001_2::BeamOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


