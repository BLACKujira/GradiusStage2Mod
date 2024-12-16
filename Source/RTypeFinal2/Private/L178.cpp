#include "L178.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL178::AL178(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->NS_Hit = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsHit"));
    this->lpSE = NULL;
    this->nowRoot = NULL;
    this->Env = NULL;
    this->dAsset = NULL;
    this->NS_Base->SetupAttachment(LaserRoot);
    this->NS_Hit->SetupAttachment(LaserRoot);
    this->LaserRoot->SetupAttachment(RootComponent);
}


