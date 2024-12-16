#include "EFXXXX.h"
#include "Components/SceneComponent.h"

AEFXXXX::AEFXXXX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->MeshComponent.AddDefaulted(1);
    this->EffectComponent.AddDefaulted(1);
    this->BodyNode = CreateDefaultSubobject<USceneComponent>(TEXT("BodyNode"));
    this->ParentActor = NULL;
    this->LaserEnvR = NULL;
    this->LaserEnvB = NULL;
    this->LaserEnvY = NULL;
    this->BodyNode->SetupAttachment(RootComponent);
}


