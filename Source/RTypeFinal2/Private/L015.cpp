#include "L015.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL015::AL015(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("body"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
    this->NS_Base->SetupAttachment(RootComponent);
}


