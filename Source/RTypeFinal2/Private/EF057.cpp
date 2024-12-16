#include "EF057.h"
#include "NiagaraComponent.h"

AEF057::AEF057(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->NC_Shoot2 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NcShoot2"));
    this->GhostPool = NULL;
    this->NC_Shoot2->SetupAttachment(RootComponent);
}


