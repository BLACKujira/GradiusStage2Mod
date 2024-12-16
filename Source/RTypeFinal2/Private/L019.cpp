#include "L019.h"
#include "Components/SceneComponent.h"

AL019::AL019(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->lpSE = NULL;
    this->Env = NULL;
}


