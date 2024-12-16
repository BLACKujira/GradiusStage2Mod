#include "L035.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL035::AL035(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Body"));
    this->NS_Body2 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Body2"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->SearchedActor = NULL;
    this->SearchedComponent = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
    this->NS_Body->SetupAttachment(LaserRoot);
    this->NS_Body2->SetupAttachment(RootComponent);
}


