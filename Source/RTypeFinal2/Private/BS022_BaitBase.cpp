#include "BS022_BaitBase.h"
#include "Components/PointLightComponent.h"

ABS022_BaitBase::ABS022_BaitBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->ParentEnemy = NULL;
    this->LightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("light"));
    this->LightComponent->SetupAttachment(RootComponent);
}


