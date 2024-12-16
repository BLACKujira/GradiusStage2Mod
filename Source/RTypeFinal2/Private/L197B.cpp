#include "L197B.h"
#include "Components/SceneComponent.h"

AL197B::AL197B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->BodyEff = NULL;
    this->Env = NULL;
}


