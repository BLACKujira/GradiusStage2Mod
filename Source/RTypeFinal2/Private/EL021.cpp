#include "EL021.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AEL021::AEL021(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->lpSE = NULL;
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Base"));
    this->PartU.AddDefaulted(10);
    this->PartD.AddDefaulted(10);
    this->Env = NULL;
    this->NS_Base->SetupAttachment(RootComponent);
}


