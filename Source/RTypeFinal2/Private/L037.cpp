#include "L037.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL037::AL037(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Hit = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Hit"));
    this->lpSE = NULL;
    this->partN.AddDefaulted(15);
    this->Env = NULL;
    this->NS_Hit->SetupAttachment(RootComponent);
}


