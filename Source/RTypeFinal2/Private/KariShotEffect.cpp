#include "KariShotEffect.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AKariShotEffect::AKariShotEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->NS_EffBody = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsEffBody"));
    this->PointLight = NULL;
    this->RefComponentL = NULL;
    this->RefComponentW = NULL;
    this->PreActor = NULL;
    this->NS_EffBody->SetupAttachment(RootComponent);
}


