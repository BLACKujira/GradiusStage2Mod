#include "GameCounterManager.h"

UGameCounterManager::UGameCounterManager() {
    this->bIsEnable = false;
    this->speed = 1.00f;
    this->Counter = 0.00f;
    this->CounterExecuted = 0.00f;
}

void UGameCounterManager::BpSetSpeed(float _speed) {
}

void UGameCounterManager::BpSetEnable(bool _flag) {
}

void UGameCounterManager::BpSetCounter(float _value) {
}

void UGameCounterManager::BpRegisterCountData(const UCountDataAsset* _countDataAsset) {
}

float UGameCounterManager::BpGetSpeed() const {
    return 0.0f;
}

bool UGameCounterManager::BpGetEnable() const {
    return false;
}

float UGameCounterManager::BpGetCounter() const {
    return 0.0f;
}


