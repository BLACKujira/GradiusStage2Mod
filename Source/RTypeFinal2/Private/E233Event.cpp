#include "E233Event.h"
#include "Components/SceneComponent.h"

AE233Event::AE233Event(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
}


