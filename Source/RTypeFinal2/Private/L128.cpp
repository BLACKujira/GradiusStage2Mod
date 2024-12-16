#include "L128.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"

AL128::AL128(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->SM_Bodys.AddDefaulted(16);
    this->Collision_B = CreateDefaultSubobject<USphereComponent>(TEXT("Collision_B"));
    this->NS_Base = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NsBase"));
    this->lpSE = NULL;
    this->Env = NULL;
    this->Mi_Bodys.AddDefaulted(16);
    this->NS_Base->SetupAttachment(RootComponent);
    this->Collision_B->SetupAttachment(RootComponent);
}


