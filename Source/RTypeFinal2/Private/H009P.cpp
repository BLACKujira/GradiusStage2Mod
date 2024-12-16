#include "H009P.h"
#include "NiagaraComponent.h"

AH009P::AH009P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->NS_Body->SetupAttachment(RootComponent);
}


