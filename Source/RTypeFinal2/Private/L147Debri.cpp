#include "L147Debri.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AL147Debri::AL147Debri(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("body"));
    this->Mi_Body = NULL;
    this->body->SetupAttachment(RootComponent);
}


