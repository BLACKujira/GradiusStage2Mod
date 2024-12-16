#include "L133.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL133::AL133(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


