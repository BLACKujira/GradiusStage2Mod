#include "E2404.h"
#include "EnemyLocus.h"
#include "SplineCmdPlayer.h"

AE2404::AE2404(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(10);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(10);
    this->PrimitiveComponentA.AddDefaulted(19);
    this->PrimitiveComponentB.AddDefaulted(19);
    this->PrimitiveComponentC.AddDefaulted(19);
    this->MeshComponent.AddDefaulted(19);
    this->EffectComponent.AddDefaulted(11);
    this->EnemyLocus = CreateDefaultSubobject<UEnemyLocus>(TEXT("LOCUS"));
    this->SplineCmdPlayer = CreateDefaultSubobject<USplineCmdPlayer>(TEXT("SplineCmdPlayer"));
}

void AE2404::CmdEvent2(FName _eventName, int32 _zWorld) {
}


