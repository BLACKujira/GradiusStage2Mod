#include "E3006.h"
#include "Components/SceneComponent.h"

AE3006::AE3006(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(1);
    this->PrimitiveComponentC.AddDefaulted(3);
    this->MeshComponent.AddDefaulted(2);
    this->ParamE3006 = NULL;
    this->SerialNo = 0;
}


