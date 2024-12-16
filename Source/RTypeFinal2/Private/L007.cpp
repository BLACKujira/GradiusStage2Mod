#include "L007.h"
#include "Components/SceneComponent.h"

AL007::AL007(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->lpSE = NULL;
    this->PartM.AddDefaulted(40);
    this->Env = NULL;
}


