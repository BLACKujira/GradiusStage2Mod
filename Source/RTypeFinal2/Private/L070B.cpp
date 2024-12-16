#include "L070B.h"
#include "Components/SceneComponent.h"

AL070B::AL070B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->BodyEff = NULL;
    this->Env = NULL;
}


