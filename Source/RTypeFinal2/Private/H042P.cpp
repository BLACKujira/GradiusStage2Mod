#include "H042P.h"
#include "NiagaraComponent.h"

AH042P::AH042P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->H042Asset = NULL;
    this->SearchedActor = NULL;
    this->SearchedComponent = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


