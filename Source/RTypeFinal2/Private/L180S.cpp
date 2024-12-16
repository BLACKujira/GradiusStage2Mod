#include "L180S.h"
#include "Components/SceneComponent.h"

AL180S::AL180S(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->Env = NULL;
}


