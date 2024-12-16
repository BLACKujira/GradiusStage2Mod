#include "BS307.h"

ABS307::ABS307(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(14);
    this->PrimitiveComponentB.AddDefaulted(13);
    this->MeshComponent.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(9);
    this->bIsMapObject = true;
    this->ParamBS307 = NULL;
    this->AudioComponentCharge = NULL;
    this->AudioComponentBeam = NULL;
    this->CameraShake = NULL;
    this->SporeBtmActor = NULL;
    this->SporeTopActor = NULL;
    this->TentacleBtmActor = NULL;
    this->TentacleTopActor = NULL;
}

void ABS307::BeamOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


