#include "StageManager.h"

UStageManager::UStageManager() {
    this->StageCommonDataAsset = NULL;
    this->StageDataAsset = NULL;
    this->StageBgm = NULL;
}

void UStageManager::SetStageDataAsset(UStageDataAsset* _inStage) {
}

void UStageManager::SetStageBgm(AStageBgm* _stageBgm) {
}

void UStageManager::SetBranchFlag(EStageBranchType _type, bool _flag) {
}

TArray<EStageBranchType> UStageManager::GetUseBranchTypes() {
    return TArray<EStageBranchType>();
}

UStageDataAsset* UStageManager::GetStageDataAsset() {
    return NULL;
}

UStageCommonDataAsset* UStageManager::GetStageCommonDataAsset() {
    return NULL;
}

AStageBgm* UStageManager::GetStageBgm() {
    return NULL;
}

int32 UStageManager::GetBranchTypeNum() const {
    return 0;
}

EStageBranchType UStageManager::GetBranchTypeFlagOn() const {
    return EStageBranchType::None;
}

FName UStageManager::GetBranchFlagName(EStageBranchType _type) const {
    return NAME_None;
}

bool UStageManager::GetBranchFlag(EStageBranchType _type) const {
    return false;
}

void UStageManager::ClearUseBranchTypes() {
}

void UStageManager::ClarBranchFlagAll() {
}

void UStageManager::AddUseBranchType(EStageBranchType _type) {
}


