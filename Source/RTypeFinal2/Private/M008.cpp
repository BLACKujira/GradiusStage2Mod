#include "M008.h"

AM008::AM008(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataAsset = NULL;
}

void AM008::OnOverlapEnemyBeginM008(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


