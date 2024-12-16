#include "EL154.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "EnemyPathPlayerComponent.h"

AEL154::AEL154(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->NS_Body = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Body"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->PathPlayerComponent = CreateDefaultSubobject<UEnemyPathPlayerComponent>(TEXT("PathPlayer"));
    this->PathDataAsset = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
    this->NS_Body->SetupAttachment(LaserRoot);
}


