#include "WelcomeDialog.h"

AWelcomeDialog::AWelcomeDialog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetWelcome = NULL;
    this->WelcomeDialogUI = NULL;
}

void AWelcomeDialog::BpStartDialog(const FText& _message, bool _skipButtonFlag) {
}

void AWelcomeDialog::BpEndDialog() {
}


