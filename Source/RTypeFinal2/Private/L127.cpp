#include "L127.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL127::AL127(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->lpSE = NULL;
    this->Env = NULL;
    this->NS_Base->SetupAttachment(RootComponent);
}


