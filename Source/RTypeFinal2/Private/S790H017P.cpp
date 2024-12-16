#include "S790H017P.h"
#include "NiagaraComponent.h"
#include "EnemyPathPlayerComponent.h"

AS790H017P::AS790H017P(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->DataAsset = NULL;
    this->ParentEnemy = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


