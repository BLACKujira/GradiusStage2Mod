#include "E3205_SandSmoke.h"
#include "Components/SceneComponent.h"

AE3205_SandSmoke::AE3205_SandSmoke(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
    this->Life.AddDefaulted(8);
    this->LifeMax.AddDefaulted(8);
    this->Defence.AddDefaulted(8);
    this->Power.AddDefaulted(8);
    this->Score.AddDefaulted(8);
    this->EffectComponent.AddDefaulted(1);
    this->SmokeEffect = NULL;
    this->SmokeSound = NULL;
    this->SerialNo = 0;
    this->SmokeTime = 0;
}


