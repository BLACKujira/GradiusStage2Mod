#include "L155.h"
#include "Components/SceneComponent.h"

AL155::AL155(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MountRoot"));
    this->MountRoot = (USceneComponent*)RootComponent;
    this->LaserRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->Parts.AddDefaulted(24);
    this->nowRoot = NULL;
    this->Env = NULL;
    this->LaserRoot->SetupAttachment(RootComponent);
}


