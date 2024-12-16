#include "H002.h"
#include "Components/PointLightComponent.h"
#include "NiagaraComponent.h"

AH002::AH002(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsShot"));
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->H002Asset = NULL;
    this->MiniSW_SequencePlayer = NULL;
    this->MiniSW_SequenceActor = NULL;
    this->MiniSW_Timer = 0.00f;
    this->MiniSW_CollisionTimer = 0.00f;
    this->MiniSW_Mode = EH002MiniSWMODE::IDLE;
    this->NS_Body->SetupAttachment(RootComponent);
    this->LightComponent->SetupAttachment(RootComponent);
}


