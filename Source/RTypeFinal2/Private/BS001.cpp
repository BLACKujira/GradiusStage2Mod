#include "BS001.h"

ABS001::ABS001(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(3);
    this->PrimitiveComponentB.AddDefaulted(2);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(3);
    this->bIsMapObject = true;
    this->ParamBS001 = NULL;
    this->AudioComponentCharge = NULL;
    this->AudioComponentBeam = NULL;
    this->AudioComponentPreShoot = NULL;
    this->CameraShake = NULL;
    this->S006Param = NULL;
    this->S007Param = NULL;
}

void ABS001::BeamOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


