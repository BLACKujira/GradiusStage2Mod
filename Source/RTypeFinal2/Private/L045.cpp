#include "L045.h"
#include "Components/SceneComponent.h"

AL045::AL045(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->ST_BODY.AddDefaulted(5);
    this->Env = NULL;
}


