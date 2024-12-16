#include "H022P.h"
#include "NiagaraComponent.h"

AH022P::AH022P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->NS_Ohiki = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsOhiki"));
    this->NS_Body->SetupAttachment(RootComponent);
    this->NS_Ohiki->SetupAttachment(RootComponent);
}


