#include "GameDlc.h"

UGameDlc::UGameDlc() {
}

void UGameDlc::SetLockContents(bool _isLock) {
}

bool UGameDlc::IsEnableDlcId(FSafeInt _dlcId) {
    return false;
}

bool UGameDlc::GetEnableDlcIdList(TArray<FSafeInt>& _dlcIdList, EDlcType _dlcType) {
    return false;
}

FSafeInt UGameDlc::GetDlcIdByName(FName _dataName, EDlcType _dlcType) {
    return FSafeInt{};
}

FSafeInt UGameDlc::GetDlcId(int32 _dataId, EDlcType _dlcType) {
    return FSafeInt{};
}

bool UGameDlc::GetDlcDataNames(FSafeInt _dlcId, TArray<FName>& _outNames) const {
    return false;
}

bool UGameDlc::GetDlcDataIds(FSafeInt _dlcId, TArray<int32>& _outIds) const {
    return false;
}

void UGameDlc::AddEnableContentTable(UGameDlcContentAsset* _contentAsset) {
}

void UGameDlc::AddEnableContentIdList(const TArray<FName>& _contentIdList) {
}

void UGameDlc::AddEnableContentId(FName _contentId) {
}


