#include "L017.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

AL017::AL017(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->Head = CreateDefaultSubobject<USceneComponent>(TEXT("Head"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->Env = NULL;
    this->Head->SetupAttachment(RootComponent);
    this->NS_Base->SetupAttachment(RootComponent);
}


