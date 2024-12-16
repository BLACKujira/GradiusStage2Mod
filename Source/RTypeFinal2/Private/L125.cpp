#include "L125.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL125::AL125(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->Env = NULL;
    this->dAsset = NULL;
    this->SearchedActor = NULL;
    this->SearchedComponent = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
    this->NS_Base->SetupAttachment(LaserRoot);
}


