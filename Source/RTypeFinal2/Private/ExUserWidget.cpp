#include "ExUserWidget.h"

UExUserWidget::UExUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bFocusPriorityHigh = false;
}

void UExUserWidget::SetOwnerPlayerFocus() {
}

void UExUserWidget::ReleaseKeyboardFocus() {
}

bool UExUserWidget::IsOwnerKeyboardFocus() {
    return false;
}

bool UExUserWidget::HasOwnerPlayerFocus() {
    return false;
}

void UExUserWidget::ExListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, bool bExecPaused, FOnInputAction Callback) {
}

bool UExUserWidget::AllocKeyboardFocus() {
    return false;
}


