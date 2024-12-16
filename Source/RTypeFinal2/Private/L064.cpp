#include "L064.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL064::AL064(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
    this->NS_Body->SetupAttachment(LaserRoot);
    this->NS_Base->SetupAttachment(LaserRoot);
}


