#include "E1641.h"
#include "SplineCmdPlayer.h"

AE1641::AE1641(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(2);
    this->EffectComponent.AddDefaulted(2);
    this->SplineCmdPlayer = CreateDefaultSubobject<USplineCmdPlayer>(TEXT("SplineCmdPlayer"));
    this->StaticMeshComponent.AddDefaulted(1);
}

void AE1641::CmdEvent2(FName _eventName, int32 _value) {
}

void AE1641::AttackOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


