#include "E3206.h"
#include "Components/ChildActorComponent.h"

AE3206::AE3206(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->bIsMapObject = true;
    this->ParamE3206 = NULL;
    this->SerialNo = 0;
    this->body = CreateDefaultSubobject<UChildActorComponent>(TEXT("body"));
    this->body->SetupAttachment(RootComponent);
}


