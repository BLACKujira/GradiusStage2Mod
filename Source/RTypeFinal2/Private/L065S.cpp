#include "L065S.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL065S::AL065S(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->Env = NULL;
    this->NS_Body->SetupAttachment(RootComponent);
}


