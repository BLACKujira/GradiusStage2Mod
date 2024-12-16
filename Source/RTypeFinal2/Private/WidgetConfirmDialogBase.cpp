#include "WidgetConfirmDialogBase.h"

UWidgetConfirmDialogBase::UWidgetConfirmDialogBase() {
}


void UWidgetConfirmDialogBase::SetSingle(bool _flag) {
}

void UWidgetConfirmDialogBase::SetDisableInput(bool _flag) {
}


bool UWidgetConfirmDialogBase::IsSingle() const {
    return false;
}

bool UWidgetConfirmDialogBase::IsDisableInput() const {
    return false;
}


void UWidgetConfirmDialogBase::CbGetKeyboardFocus() {
}

