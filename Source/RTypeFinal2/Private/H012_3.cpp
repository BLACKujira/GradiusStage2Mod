#include "H012_3.h"
#include "NiagaraComponent.h"
#include "EnemyPathPlayerComponent.h"

AH012_3::AH012_3(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->SearchedActor = NULL;
    this->SearchedComponent = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


