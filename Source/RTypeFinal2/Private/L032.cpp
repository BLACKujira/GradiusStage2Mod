#include "L032.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AL032::AL032(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->SM_Body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SM_Body"));
    this->Env = NULL;
    this->SM_Body->SetupAttachment(RootComponent);
}


