#include "ScreenActor.h"
#include "Components/SceneComponent.h"

AScreenActor::AScreenActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
    this->TransformComponent = (USceneComponent*)RootComponent;
    this->ScreenCameraActor = NULL;
}

void AScreenActor::UpdateAnim(float _deltaTime) {
}

void AScreenActor::StopAnim() {
}

void AScreenActor::StartAnimRoll(const FScreenAnimParamRoll& _param) {
}

void AScreenActor::SetVisibleScreenFrame(bool _display) {
}

bool AScreenActor::IsVisibleScreenFrame() const {
    return false;
}

void AScreenActor::InitAnim() {
}

FRotator AScreenActor::GetAnimRotation() const {
    return FRotator{};
}


