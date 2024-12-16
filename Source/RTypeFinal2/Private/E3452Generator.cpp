#include "E3452Generator.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AE3452Generator::AE3452Generator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
    this->Pole = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Param = NULL;
    this->SerialNo = 0;
    this->AttackStartTime = 0.00f;
    this->Pole->SetupAttachment(RootComponent);
}


