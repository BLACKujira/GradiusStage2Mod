#include "BS304.h"

ABS304::ABS304(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(4);
    this->PrimitiveComponentB.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(4);
    this->bIsMapObject = true;
    this->ParamBS304 = NULL;
    this->AudioComponentCharge = NULL;
    this->AudioComponentBeam = NULL;
    this->CameraShake = NULL;
}

void ABS304::BeamOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


