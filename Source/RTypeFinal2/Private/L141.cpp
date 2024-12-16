#include "L141.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL141::AL141(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->NS_Hit = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsHit"));
    this->Env = NULL;
    this->NS_Hit->SetupAttachment(RootComponent);
    this->NS_Body->SetupAttachment(RootComponent);
}


