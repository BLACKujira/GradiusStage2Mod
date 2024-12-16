#include "H035P.h"
#include "NiagaraComponent.h"
#include "EnemyPathPlayerComponent.h"

AH035P::AH035P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


