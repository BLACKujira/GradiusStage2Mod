#include "PlayerSettings.h"

UPlayerSettings::UPlayerSettings() {
    this->CurrentHangarNo = 0;
    this->FavoriteHangarNo = 0;
    this->bOnlinePilotNameFiltered = false;
}

void UPlayerSettings::UnlockTitle(ETITLE_ID _id) {
}

void UPlayerSettings::UnlockSuitList(const TArray<ESUIT_ID>& _ids) {
}

void UPlayerSettings::UnlockSuit(ESUIT_ID _id) {
}

void UPlayerSettings::UnlockRecord(ERECORD_ID _id) {
}

void UPlayerSettings::UnlockPPoseList(const TArray<EPPOSE_ID>& _ids) {
}

void UPlayerSettings::UnlockPPose(EPPOSE_ID _id) {
}

void UPlayerSettings::UnlockMedal(EMEDAL_ID _id) {
}

void UPlayerSettings::UnlockHelmList(const TArray<EHELM_ID>& _ids) {
}

void UPlayerSettings::UnlockHelm(EHELM_ID _id) {
}

void UPlayerSettings::UnlockFighterBase(EBODY_NO _id) {
}

void UPlayerSettings::UnlockFighter(EBODY_NO _id) {
}

void UPlayerSettings::UnlockDecal(FName _id) {
}

void UPlayerSettings::SetTitleEditInfo(FTitleEditInfo _setting) {
}

void UPlayerSettings::SetPilotSetting(FPilotSetting _setting) {
}

void UPlayerSettings::SetOptionSetting(FOptionSetting _setting) {
}

void UPlayerSettings::SetOnlinePilotNameOriginal(const FString& _pilotName) {
}

void UPlayerSettings::SetOnlinePilotNameFiltered(bool _filtered) {
}

void UPlayerSettings::SetOnlinePilotName(const FString& _pilotName) {
}

void UPlayerSettings::SetLatestSetting(FCustomizeSetting _setting) {
}

void UPlayerSettings::SetGallerySetting(FGallerySetting _setting) {
}

void UPlayerSettings::SetFavoriteSettingLocked(bool _isLocked) {
}

void UPlayerSettings::SetFavoriteSetting(FCustomizeSetting _setting, int32 _no) {
}

void UPlayerSettings::SetCustomStageNameInfo(FCustomStageNameInfo _setting) {
}

void UPlayerSettings::SetCustomizeSettings(TArray<FCustomizeSetting>& _settings) {
}

void UPlayerSettings::SetCustomizeSettingForGameByID(int32 _idx, EBODY_NO _id) {
}

void UPlayerSettings::SetCustomizeSettingForGame(int32 _idx, FCustomizeSetting _settings) {
}

void UPlayerSettings::SetCustomizeSettingByID(int32 _idx, EBODY_NO _id) {
}

void UPlayerSettings::SetCustomizeSetting(int32 _idx, FCustomizeSetting _settings) {
}

void UPlayerSettings::SetCurrentSettingByID(EBODY_NO _id) {
}

void UPlayerSettings::SetCurrentSetting(FCustomizeSetting _setting) {
}

void UPlayerSettings::SetCurrentHangarNo(int32 _no) {
}

void UPlayerSettings::SetCourseEditInfo(FCourseEditInfo _setting) {
}

void UPlayerSettings::SetClass(ECLASS_ID _id) {
}

void UPlayerSettings::ReflectSoundOptionSetting() {
}

void UPlayerSettings::ReflectOptionSetting() {
}

void UPlayerSettings::MakeDefaultSettingByID(FCustomizeSetting& _tgt, EBODY_NO _id) {
}

void UPlayerSettings::LockFighterBase(EBODY_NO _id) {
}

void UPlayerSettings::LockFighter(EBODY_NO _id) {
}

bool UPlayerSettings::IsUnlockedFighterBase(EBODY_NO _id) {
    return false;
}

bool UPlayerSettings::IsUnlockedFighter(EBODY_NO _id) {
    return false;
}

bool UPlayerSettings::IsEnableBodyID(UObject* _wctx, EBODY_NO _bodyID, bool bConfidential) {
    return false;
}

bool UPlayerSettings::IsConfirmedFighter(EBODY_NO _id) {
    return false;
}

bool UPlayerSettings::IsBirthday_Today() {
    return false;
}

void UPlayerSettings::InitSystemOptionSetting() {
}

void UPlayerSettings::InitSoundOptionSetting() {
}

void UPlayerSettings::GetUnlockTitleList(TArray<ETITLE_ID>& _ref) {
}

void UPlayerSettings::GetUnlockMedalList(TArray<EMEDAL_ID>& _ref) {
}

void UPlayerSettings::GetUnlockedSuitList(TArray<ESUIT_ID>& _ref) {
}

void UPlayerSettings::GetUnlockedPPoseList(TArray<EPPOSE_ID>& _ref) {
}

void UPlayerSettings::GetUnlockedHelmList(TArray<EHELM_ID>& _ref) {
}

void UPlayerSettings::GetUnlockedDecalList(TArray<FName>& _ref) {
}

FTitleEditInfo UPlayerSettings::GetTitleEditInfo() const {
    return FTitleEditInfo{};
}

FString UPlayerSettings::GetTitleEditGameTitle() {
    return TEXT("");
}

FPilotSetting UPlayerSettings::GetRefPilotSetting() {
    return FPilotSetting{};
}

FOptionSetting UPlayerSettings::GetRefOptionSetting() {
    return FOptionSetting{};
}

FGallerySetting UPlayerSettings::GetRefGallerySetting() {
    return FGallerySetting{};
}

FCustomizeSetting UPlayerSettings::GetRefCustomizeSettingForGame(int32 _idx) {
    return FCustomizeSetting{};
}

FCustomizeSetting UPlayerSettings::GetRefCustomizeSetting(int32 _idx) {
    return FCustomizeSetting{};
}

FCustomizeSetting UPlayerSettings::GetRefCurrentSetting() {
    return FCustomizeSetting{};
}

FPilotSetting UPlayerSettings::GetPilotSetting() const {
    return FPilotSetting{};
}

FOptionSetting UPlayerSettings::GetOptionSetting() const {
    return FOptionSetting{};
}

FString UPlayerSettings::GetOnlinePilotNameOriginal() const {
    return TEXT("");
}

bool UPlayerSettings::GetOnlinePilotNameFiltered() const {
    return false;
}

FString UPlayerSettings::GetOnlinePilotName() const {
    return TEXT("");
}

FGallerySetting UPlayerSettings::GetGallerySetting() const {
    return FGallerySetting{};
}

int32 UPlayerSettings::GetFavoriteHangarNo() const {
    return 0;
}

FCustomStageNameInfo UPlayerSettings::GetCustomStageNameInfo() const {
    return FCustomStageNameInfo{};
}

TArray<FCustomizeSetting> UPlayerSettings::GetCustomizeSettingsForGame() {
    return TArray<FCustomizeSetting>();
}

TArray<FCustomizeSetting> UPlayerSettings::GetCustomizeSettings() {
    return TArray<FCustomizeSetting>();
}

FCustomizeSetting UPlayerSettings::GetCustomizeSettingForGame(int32 _idx) const {
    return FCustomizeSetting{};
}

FCustomizeSetting UPlayerSettings::GetCustomizeSetting(int32 _idx) const {
    return FCustomizeSetting{};
}

FCustomizeSetting UPlayerSettings::GetCurrentSetting() const {
    return FCustomizeSetting{};
}

int32 UPlayerSettings::GetCurrentHangarNo() const {
    return 0;
}

FCourseEditInfo UPlayerSettings::GetCourseEditInfo() const {
    return FCourseEditInfo{};
}

void UPlayerSettings::DisplaySuit(ESUIT_ID _id) {
}

void UPlayerSettings::DisplayPPose(EPPOSE_ID _id) {
}

void UPlayerSettings::DisplayHelm(EHELM_ID _id) {
}

void UPlayerSettings::DisplayDecal(FName _id) {
}

void UPlayerSettings::DisappearSuit(ESUIT_ID _id) {
}

void UPlayerSettings::DisappearHelm(EHELM_ID _id) {
}

void UPlayerSettings::CopyCustomizeSettingsForGame() {
}

void UPlayerSettings::ConfirmFighter(EBODY_NO _id) {
}

void UPlayerSettings::CheckFighterDevelopTitle() {
}

void UPlayerSettings::CheckFighterDevelopArchievement() {
}

void UPlayerSettings::ApplyDLC() {
}


