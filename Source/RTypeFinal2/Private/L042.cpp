#include "L042.h"
#include "Components/PoseableMeshComponent.h"
#include "Components/SceneComponent.h"

AL042::AL042(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("LaserRoot"));
    this->LaserRoot = (USceneComponent*)RootComponent;
    this->Po_Body = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("PoBody"));
    this->Env = NULL;
}


