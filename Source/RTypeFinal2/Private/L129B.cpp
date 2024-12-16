#include "L129B.h"
#include "Components/SceneComponent.h"

AL129B::AL129B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->BodyEff = NULL;
    this->Env = NULL;
}


