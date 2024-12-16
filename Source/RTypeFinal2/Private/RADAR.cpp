#include "RADAR.h"
#include "Components/SceneComponent.h"

ARADAR::ARADAR(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->Radars.AddDefaulted(2);
    this->Env = NULL;
    this->dAsset = NULL;
}


