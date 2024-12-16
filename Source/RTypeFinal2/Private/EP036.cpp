#include "EP036.h"
#include "EH010Env.h"

AEP036::AEP036(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->AudioComponent.AddDefaulted(1);
    this->ExtraNodes.AddDefaulted(5);
    this->WCannonEnv = CreateDefaultSubobject<UEH010Env>(TEXT("ShockwaveEnv"));
}


