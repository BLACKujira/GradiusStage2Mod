#include "L083.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL083::AL083(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("body"));
    this->BASE = NULL;
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


