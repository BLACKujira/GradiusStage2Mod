#include "GzKeyboardComponent.h"

UGzKeyboardComponent::UGzKeyboardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UGzKeyboardComponent::start(int32 _inUserIndex, EGzKeyboardType _inInputType, int32 _inInputOptions, int32 _inInputLength, const FString& _inTitle, const FString& _inSubTitle, const FString& _inPlaceHolder, const FString& _inInputText) {
    return false;
}

bool UGzKeyboardComponent::IsRunning() {
    return false;
}

void UGzKeyboardComponent::GetResult(EGzKeyboardResult& _outResult) {
}

void UGzKeyboardComponent::GetInputString(FString& _outString) {
}


