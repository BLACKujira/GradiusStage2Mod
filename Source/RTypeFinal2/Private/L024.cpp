#include "L024.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL024::AL024(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->lpSE = NULL;
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Base"));
    this->PartU.AddDefaulted(8);
    this->PartD.AddDefaulted(8);
    this->Env = NULL;
    this->NS_Base->SetupAttachment(RootComponent);
}


