#include "L084.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL084::AL084(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->NS_Hit = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsHit"));
    this->lpSE = NULL;
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
    this->NS_Base->SetupAttachment(RootComponent);
    this->NS_Hit->SetupAttachment(RootComponent);
}


