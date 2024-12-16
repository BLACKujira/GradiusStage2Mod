#include "H021B.h"
#include "NiagaraComponent.h"

AH021B::AH021B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->NS_Body->SetupAttachment(RootComponent);
}


