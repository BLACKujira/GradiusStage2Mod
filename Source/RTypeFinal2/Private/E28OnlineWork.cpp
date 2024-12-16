#include "E28OnlineWork.h"

UE28OnlineWork::UE28OnlineWork() {
    this->LoginIndexLock = false;
    this->LoginIndex = 0;
}

void UE28OnlineWork::SetPilotName(const FString& _value) {
}

void UE28OnlineWork::SetLoginIndexLock(bool _value) {
}

void UE28OnlineWork::SetLoginIndex(int32 _value) {
}

void UE28OnlineWork::SetCustomizeSettingOnline(const FCustomizeSettingOnline& _value) {
}

FString UE28OnlineWork::GetPilotName() const {
    return TEXT("");
}

bool UE28OnlineWork::GetLoginIndexLock() const {
    return false;
}

int32 UE28OnlineWork::GetLoginIndex() const {
    return 0;
}

FCustomizeSettingOnline UE28OnlineWork::GetCustomizeSettingOnline() const {
    return FCustomizeSettingOnline{};
}

void UE28OnlineWork::BackupData() {
}


