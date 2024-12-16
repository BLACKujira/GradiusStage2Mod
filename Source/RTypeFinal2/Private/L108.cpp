#include "L108.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL108::AL108(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->dAsset = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
    this->NS_Base->SetupAttachment(LaserRoot);
}


