#include "L047.h"
#include "Components/SceneComponent.h"

AL047::AL047(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->nowRoot = NULL;
    this->Env = NULL;
    this->SearchedActor = NULL;
    this->SearchedComponent = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
}


