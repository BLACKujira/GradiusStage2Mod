#include "L099.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

AL099::AL099(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->NS_Fire = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Fire"));
    this->NS_Hit = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Hit"));
    this->ST_BODY = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ST_BODY"));
    this->St_Tip = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("St_Tip"));
    this->St_Lens = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("St_Lens"));
    this->AudioShot = NULL;
    this->Env = NULL;
    this->NS_Fire->SetupAttachment(RootComponent);
    this->NS_Hit->SetupAttachment(RootComponent);
    this->ST_BODY->SetupAttachment(RootComponent);
    this->St_Tip->SetupAttachment(ST_BODY);
    this->St_Lens->SetupAttachment(ST_BODY);
}


