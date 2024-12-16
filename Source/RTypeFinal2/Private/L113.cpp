#include "L113.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL113::AL113(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->Env = NULL;
    this->NS_Base->SetupAttachment(RootComponent);
}


