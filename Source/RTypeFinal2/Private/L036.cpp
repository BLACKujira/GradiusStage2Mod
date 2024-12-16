#include "L036.h"
#include "Components/SceneComponent.h"

AL036::AL036(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->lpSE = NULL;
    this->PartM.AddDefaulted(40);
    this->Env = NULL;
}


