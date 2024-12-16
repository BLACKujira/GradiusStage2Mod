#include "GameMatching.h"

UGameMatching::UGameMatching() {
    this->SubsystemHelper = NULL;
    this->PendingInviteDisableFactor = 0;
}

void UGameMatching::UpdateSessionJoinability(bool _bPublicSearchable, bool _bAllowJoinInProgress, bool _bAllowInvites, bool _bJoinViaPresence, bool _bJoinViaPresenceFriendsOnly) {
}

void UGameMatching::SetUsingMultiplayerFeatures(bool _using) {
}

void UGameMatching::SetPendingInvite_PrivilegesCheckedAndAllowed(bool _result) {
}

void UGameMatching::SetPendingInvite_Disable(int32 _factor) {
}

void UGameMatching::SetNumStartPlayer(int32 _num) {
}

void UGameMatching::SetMultiplayStageSetting(const FMultiplayStageSetting& _setting) {
}

void UGameMatching::SetEnableLan(bool _flag) {
}

void UGameMatching::SetConnectionNum(int32 _num) {
}

bool UGameMatching::IsPendingInvite_Disable() const {
    return false;
}

bool UGameMatching::IsEnableLan() const {
    return false;
}

bool UGameMatching::HasPendingInvite() const {
    return false;
}

bool UGameMatching::GetSessionJoinability(bool& _bPublicSearchable, bool& _bAllowJoinInProgress, bool& _bAllowInvites, bool& _bJoinViaPresence, bool& _bJoinViaPresenceFriendsOnly) {
    return false;
}

bool UGameMatching::GetPendingInvite_PrivilegesCheckedAndAllowed() const {
    return false;
}

//void UGameMatching::GetPendingInvite_OnlineSessionSearchResult(FBlueprintSessionResult& _sessionResult) const {
//}

void UGameMatching::GetPendingInvite_ControllerId(int32& _controllerId) const {
}

int32 UGameMatching::GetNumStartPlayer() const {
    return 0;
}

FMultiplayStageSetting UGameMatching::GetMultiplayStageSetting() const {
    return FMultiplayStageSetting{};
}

int32 UGameMatching::GetConnectionNum() const {
    return 0;
}

void UGameMatching::ClearPendingInvite_Disable(int32 _factor) {
}

bool UGameMatching::CleanupSessionIsRunning() const {
    return false;
}

void UGameMatching::CleanupSession() {
}

bool UGameMatching::CheckUsingMultiplayerFeaturesByJoinedPlayerNum(int32 _playerNum) {
    return false;
}


