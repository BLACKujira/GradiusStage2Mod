#include "L167B.h"
#include "Components/SceneComponent.h"

AL167B::AL167B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->BodyEff = NULL;
    this->Env = NULL;
}


