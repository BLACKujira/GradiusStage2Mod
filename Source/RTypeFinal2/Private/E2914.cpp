#include "E2914.h"

AE2914::AE2914(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(9);
    this->PrimitiveComponentB.AddDefaulted(9);
    this->PrimitiveComponentC.AddDefaulted(9);
    this->MeshComponent.AddDefaulted(9);
    this->EffectComponent.AddDefaulted(2);
    this->bIsMapObject = true;
    this->ParamE2914 = NULL;
    this->Serial = 0;
    this->RotateSpeed = 0.00f;
    this->bIsMainGear = false;
    this->E2900Manager = NULL;
    this->StartWaitShootTimeLength = 0.00f;
    this->ShootStartAngle_0 = 0.00f;
    this->ShootStartAngle_1 = 0.00f;
    this->ShootEndAngle_0 = 0.00f;
    this->ShootEndAngle_1 = 0.00f;
}

void AE2914::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AE2914::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


