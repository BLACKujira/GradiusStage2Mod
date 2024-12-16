#include "L102.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "EnemyPathPlayerComponent.h"

AL102::AL102(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Body"));
    this->NS_Body2 = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Body2"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
    this->NS_Body->SetupAttachment(LaserRoot);
    this->NS_Body2->SetupAttachment(RootComponent);
}


