#include "L160.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL160::AL160(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->body = CreateDefaultSubobject<UChildActorComponent>(TEXT("body"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->Env = NULL;
    this->body->SetupAttachment(RootComponent);
    this->NS_Base->SetupAttachment(RootComponent);
}


