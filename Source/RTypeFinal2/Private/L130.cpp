#include "L130.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AL130::AL130(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootNode"));
    this->RootNode = (USceneComponent*)RootComponent;
    this->SM_Body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SmBody"));
    this->Burner = NULL;
    this->Env = NULL;
    this->SM_Body->SetupAttachment(RootComponent);
}


