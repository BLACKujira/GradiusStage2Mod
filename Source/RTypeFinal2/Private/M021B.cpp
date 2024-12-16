#include "M021B.h"
#include "Components/SceneComponent.h"

AM021B::AM021B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CurrentRoot"));
    this->CurrentRoot = (USceneComponent*)RootComponent;
    this->DataAsset = NULL;
}


