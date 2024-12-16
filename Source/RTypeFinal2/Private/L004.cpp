#include "L004.h"
#include "Components/SceneComponent.h"

AL004::AL004(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->lpSE = NULL;
    this->PartM.AddDefaulted(24);
    this->partN.AddDefaulted(3);
    this->Env = NULL;
}


