#include "L082.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL082::AL082(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Head = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsHead"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->Env = NULL;
    this->NS_Head->SetupAttachment(RootComponent);
    this->NS_Base->SetupAttachment(RootComponent);
}


