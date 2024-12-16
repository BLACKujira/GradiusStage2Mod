#include "L114.h"
#include "Components/SceneComponent.h"

AL114::AL114(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->lpSE = NULL;
    this->Env = NULL;
}


