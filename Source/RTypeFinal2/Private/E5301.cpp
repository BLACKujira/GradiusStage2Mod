#include "E5301.h"
#include "ExBoxComponent.h"

AE5301::AE5301(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UExBoxComponent>(TEXT("CollisionC"))) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(2);
    this->PrimitiveComponentC.AddDefaulted(1);
    this->MeshComponent.AddDefaulted(1);
    this->bIsMapObject = true;
    this->ParamData = NULL;
    this->EnemySerialNo = 0;
    this->bScreenHant = false;
    this->bMove = false;
    this->MoveDirection = 0.00f;
    this->MoveSpeed = 900.00f;
}

void AE5301::OnOverlapBeginBox(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


