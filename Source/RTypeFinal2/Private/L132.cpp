#include "L132.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL132::AL132(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


