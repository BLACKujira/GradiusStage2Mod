#include "L066.h"
#include "Components/SceneComponent.h"

AL066::AL066(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->lpSE = NULL;
    this->NS_Fire = NULL;
    this->PartM.AddDefaulted(4);
    this->Env = NULL;
}


