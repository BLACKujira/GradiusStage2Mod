#include "L068.h"
#include "Components/SceneComponent.h"

AL068::AL068(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->lpSE = NULL;
    this->NS_Fire = NULL;
    this->PartM.AddDefaulted(4);
    this->Env = NULL;
}


