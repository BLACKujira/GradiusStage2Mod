#include "L067.h"
#include "Components/SceneComponent.h"

AL067::AL067(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->lpSE = NULL;
    this->NS_Fire = NULL;
    this->PartM.AddDefaulted(4);
    this->Env = NULL;
}


