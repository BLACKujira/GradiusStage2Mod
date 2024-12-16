#include "S790L073.h"
#include "Components/SceneComponent.h"

AS790L073::AS790L073(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->NS_Base = NULL;
    this->nowRoot = NULL;
    this->Env = NULL;
    this->ParentEnemy = NULL;
    this->DataAsset = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
}


