#include "EP031.h"
#include "EH008Env.h"

AEP031::AEP031(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->AudioComponent.AddDefaulted(1);
    this->ExtraNodes.AddDefaulted(5);
    this->WCannonEnv = CreateDefaultSubobject<UEH008Env>(TEXT("ShockwaveEnv"));
}


