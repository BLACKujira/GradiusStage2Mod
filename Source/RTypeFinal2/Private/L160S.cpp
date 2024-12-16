#include "L160S.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL160S::AL160S(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->NS_ShotBody = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->Env = NULL;
    this->NS_ShotBody->SetupAttachment(RootComponent);
}


