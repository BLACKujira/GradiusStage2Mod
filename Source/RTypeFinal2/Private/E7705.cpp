#include "E7705.h"
#include "Components/SceneComponent.h"

AE7705::AE7705(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->PrimitiveComponentA.AddDefaulted(8);
    this->PrimitiveComponentB.AddDefaulted(9);
    this->PrimitiveComponentC.AddDefaulted(6);
    this->MeshComponent.AddDefaulted(4);
    this->EffectComponent.AddDefaulted(10);
    this->LeftSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LeftScene"));
    this->RightSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RightScene"));
    this->LeftSceneComponent->SetupAttachment(RootComponent);
    this->RightSceneComponent->SetupAttachment(RootComponent);
}


