#include "ScreenCameraActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

AScreenCameraActor::AScreenCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenCameraRoot"));
    this->TransformComponent = (USceneComponent*)RootComponent;
    this->ScreenCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ScreenCamera"));
    this->ScreenCamera->SetupAttachment(RootComponent);
}


