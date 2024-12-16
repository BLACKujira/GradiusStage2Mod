#include "Achievement.h"

UAchievement::UAchievement() {
}

void UAchievement::SetCacheProgress(EAchievementId _id, float _percent) {
}

void UAchievement::CopyCacheProgressAll(UObject* _worldContextObject, APlayerController* _playerController) {
}

bool UAchievement::CheckCondPlatinumAchievement(APlayerController* _playerController) {
    return false;
}

FString UAchievement::AchievementIdToFString(EAchievementId _id) {
    return TEXT("");
}

FName UAchievement::AchievementIdToFName(EAchievementId _id) {
    return NAME_None;
}

EAchievementId UAchievement::AchievementIdFromFString(const FString& _idStr) {
    return EAchievementId::ACH_00;
}


