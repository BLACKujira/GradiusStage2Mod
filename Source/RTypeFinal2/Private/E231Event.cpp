#include "E231Event.h"
#include "Components/SceneComponent.h"

AE231Event::AE231Event(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
}


