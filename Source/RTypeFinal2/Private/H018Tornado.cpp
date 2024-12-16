#include "H018Tornado.h"
#include "NiagaraComponent.h"

AH018Tornado::AH018Tornado(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->ShotAudio = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


