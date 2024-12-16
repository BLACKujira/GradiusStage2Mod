#include "ScrollManager.h"
#include "Components/SceneComponent.h"

UScrollManager::UScrollManager() {
    this->TransformComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent"));
    this->bIsScrollEnable = false;
    this->ScrollValue = 0.00f;
    this->ScrollLength = 0.00f;
    this->ScrollDataIndex = 0;
    this->ScrollLengthTotal = 0.00f;
    this->CounterExecuted = 0.00f;
    this->CountDataScale = 100.00f;
    this->bCommandSkip = false;
    this->ScreenCoordInterRotMax = 45.00f;
    this->ScreenRotAxis = EScrollManager_ScreenRotAxis::None;
    this->ItemScrollDir = ECountData_ItemScrollDir::L;
    this->ItemScrollSpeed = 900.00f;
}

void UScrollManager::BpSetScrollValueScaled(float _value) {
}

void UScrollManager::BpSetScrollValue(float _value) {
}

void UScrollManager::BpSetScrollSpeed(float _speed) {
}

void UScrollManager::BpSetScrollEnable(bool _flag) {
}

void UScrollManager::BpSetScrollCount(float _value) {
}

void UScrollManager::BpSetCountDataScale(float _value) {
}

void UScrollManager::BpResetScroll() {
}

void UScrollManager::BpRegisterScrollCountDatas(const TArray<FScrollManager_ScrollCountData>& _datas) {
}

void UScrollManager::BpRegisterCountData(const UCountDataAsset* _data) {
}

float UScrollManager::BpGetScrollValueScaled() const {
    return 0.0f;
}

float UScrollManager::BpGetScrollValue() const {
    return 0.0f;
}

float UScrollManager::BpGetScrollSpeed() const {
    return 0.0f;
}

bool UScrollManager::BpGetScrollEnable() const {
    return false;
}

float UScrollManager::BpGetScrollCount() const {
    return 0.0f;
}

FString UScrollManager::BpGetCurrentScrollActorName() const {
    return TEXT("");
}

float UScrollManager::BpGetCountDataScale() const {
    return 0.0f;
}


