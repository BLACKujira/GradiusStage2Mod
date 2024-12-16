#include "L177.h"
#include "Components/SceneComponent.h"

AL177::AL177(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->Env = NULL;
    this->ShotEffect = NULL;
    this->HitEffect = NULL;
    this->ShotAudio = NULL;
}


