#include "LibDisableFactor.h"

ULibDisableFactor::ULibDisableFactor() {
}

bool ULibDisableFactor::IsEnable(const FDisableFactor& _disableFactor) {
    return false;
}

bool ULibDisableFactor::IsDisable(const FDisableFactor& _disableFactor) {
    return false;
}

void ULibDisableFactor::Enable(FDisableFactor& _OutDisableFactor, EDisableFactorFlag _factor) {
}

void ULibDisableFactor::Disable(FDisableFactor& _OutDisableFactor, EDisableFactorFlag _factor) {
}


