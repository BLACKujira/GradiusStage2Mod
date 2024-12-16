#include "L112B.h"
#include "Components/SceneComponent.h"

AL112B::AL112B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->BodyEff = NULL;
    this->Env = NULL;
}


