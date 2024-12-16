#include "PawnBase.h"

APawnBase::APawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APawnBase::SetNodeathEffectEnable(bool _enable) {
}

void APawnBase::SetNodeathEffectDuringNoDeath(bool _enable) {
}

bool APawnBase::NodeathEnabled() const {
    return false;
}

bool APawnBase::IsEnableNodeathEffect() const {
    return false;
}

bool APawnBase::IsEnableNodeath() const {
    return false;
}

bool APawnBase::IsEnableInfiniteLife() const {
    return false;
}

bool APawnBase::IsEnableDeathEffectDuringNoDeath() const {
    return false;
}

EDisableFactorFlag APawnBase::GetDisableFactorNodeath() const {
    return EDisableFactorFlag::None;
}

EDisableFactorFlag APawnBase::GetDisableFactorInfiniteLife() const {
    return EDisableFactorFlag::None;
}

void APawnBase::EnableFactorNodeath(EDisableFactorFlag _factor) {
}

void APawnBase::EnableFactorInfiniteLife(EDisableFactorFlag _factor) {
}

void APawnBase::DisableFactorNodeath(EDisableFactorFlag _factor) {
}

void APawnBase::DisableFactorInfiniteLife(EDisableFactorFlag _factor) {
}


