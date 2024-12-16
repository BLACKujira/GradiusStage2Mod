#include "FrameCaptureComponent.h"

UFrameCaptureComponent::UFrameCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCaptureEveryFrame = true;
    this->TextureTarget = NULL;
}

void UFrameCaptureComponent::CaptureScene() {
}


