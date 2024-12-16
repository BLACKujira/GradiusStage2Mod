#include "L030.h"
#include "Components/SceneComponent.h"

AL030::AL030(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->Env = NULL;
    this->ShotEffect = NULL;
    this->HitEffect = NULL;
    this->ShotAudio = NULL;
}


