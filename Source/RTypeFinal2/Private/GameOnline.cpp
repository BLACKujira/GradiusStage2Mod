#include "GameOnline.h"

UGameOnline::UGameOnline() {
    this->isLogin = false;
    this->bRestrictCommunication = false;
}

bool UGameOnline::TestPrivilegeResults(int32 _result, EGameOnline_PrivilegeResults _cause) {
    return false;
}

bool UGameOnline::ShowPlatformMessageBox(int32 _localUserIndex, EGameOnline_PlatformMessageType _platformMessageType) {
    return false;
}

void UGameOnline::SetRestrictCommunication(bool _disable) {
}

void UGameOnline::SetPresence(int32 _localUserIndex, const FString& _statusStr, UGameOnline_VariantData* _presenceData) {
}

void UGameOnline::SetIsLogin(bool _isLogin) {
}

FString UGameOnline::PrivilegeResultsToDebugString(int32 _result) {
    return TEXT("");
}

UGameOnline_VariantData* UGameOnline::NewVariantData() {
    return NULL;
}

void UGameOnline::LoginRequest(int32 _localUserIndex, FGameOnline_LoginCompleteDelegate _delegate) {
}

bool UGameOnline::IsOnlineEnvironmentProduction() {
    return false;
}

bool UGameOnline::IsOnlineEnvironmentDevelopment() {
    return false;
}

bool UGameOnline::IsOnlineEnvironmentCertification() {
    return false;
}

void UGameOnline::GetUserPrivilegesRequest(int32 _localUserIndex, EGameOnline_UserPrivileges _privilege, FGameOnline_GetUserPrivilegesCompleteDelegate _delegate) {
}

bool UGameOnline::GetRestrictCommunication() const {
    return false;
}

bool UGameOnline::GetIsLogin() {
    return false;
}


