#include "UtilInput.h"

UUtilInput::UUtilInput() {
}

void UUtilInput::NpadEnableConnectUI(UObject* _wco) {
}

void UUtilInput::InputActionRemoveAndAdd(const FName& _actionName, const TArray<FKey>& _keyRemoves, const TArray<FKey>& _keyAdds) {
}

FKey UUtilInput::GetGamepadBackKey() {
    return FKey{};
}

FKey UUtilInput::GetGamepadAcceptKey() {
    return FKey{};
}

bool UUtilInput::GetAcceptKeyIsCircle() {
    return false;
}


