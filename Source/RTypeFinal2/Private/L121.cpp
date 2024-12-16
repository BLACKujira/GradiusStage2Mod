#include "L121.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL121::AL121(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBody"));
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


