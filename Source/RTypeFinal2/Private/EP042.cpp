#include "EP042.h"
#include "EH002Env.h"

AEP042::AEP042(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->AudioComponent.AddDefaulted(1);
    this->ExtraNodes.AddDefaulted(5);
    this->WCannonEnv = CreateDefaultSubobject<UEH002Env>(TEXT("ShockwaveEnv"));
}


