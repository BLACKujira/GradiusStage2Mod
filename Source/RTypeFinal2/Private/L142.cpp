#include "L142.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/SceneComponent.h"

AL142::AL142(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->Po_Body = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("PoBody"));
    this->Env = NULL;
    this->ShotAudio = NULL;
    this->Po_Body->SetupAttachment(RootComponent);
}


