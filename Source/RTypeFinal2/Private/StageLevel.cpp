#include "StageLevel.h"

UStageLevel::UStageLevel() {
}

bool UStageLevel::IsFinalStage(UObject* WorldContextObject, EStageId _inId) {
    return false;
}

bool UStageLevel::IsDevelope(UObject* WorldContextObject, EStageId _inId) {
    return false;
}

bool UStageLevel::IsCourseEdit(UObject* WorldContextObject, EStageId _inId) {
    return false;
}

bool UStageLevel::IsCompetitionStage(UObject* WorldContextObject, EStageId _inId) {
    return false;
}

bool UStageLevel::GetResourcesNum(UObject* WorldContextObject, EStageId _inId, int32& _outResourceA, int32& _outResourceB, int32& _outResourceC) {
    return false;
}

bool UStageLevel::GetNo(UObject* WorldContextObject, EStageId _inId, FString& _outNo) {
    return false;
}

bool UStageLevel::GetNameText(UObject* WorldContextObject, EStageId _inId, FText& _outName1, FText& _outName2) {
    return false;
}

bool UStageLevel::GetName(UObject* WorldContextObject, EStageId _inId, FName& _outName1, FName& _outName2) {
    return false;
}

bool UStageLevel::GetListCompByStageId(UObject* WorldContextObject, ECompStageId _inId, FStageListCompetition& _outList) {
    return false;
}

bool UStageLevel::GetListByStageId(UObject* WorldContextObject, EStageId _inId, FStageList& _outList) {
    return false;
}

bool UStageLevel::GetLevelPackageName(UObject* WorldContextObject, EStageId _inId, EStageListLevel _inLevel, FString& _outPackageName) {
    return false;
}

bool UStageLevel::GetLevelAssetId(UObject* WorldContextObject, EStageId _inId, EStageListLevel _inLevel, FPrimaryAssetId& _outPrimaryAssetId) {
    return false;
}

bool UStageLevel::GetLevel(UObject* WorldContextObject, EStageId _inId, EStageListLevel _inLevel, TSoftObjectPtr<UWorld>& _outLevel) {
    return false;
}

bool UStageLevel::GetFinalStageIdList(UObject* WorldContextObject, TArray<EStageId>& _outIds) {
    return false;
}

bool UStageLevel::GetDifficultyColor(UObject* WorldContextObject, EStageId _inId, FLinearColor& _outColor) {
    return false;
}

int32 UStageLevel::GetCourseEditSortNo(UObject* WorldContextObject, EStageId _inId) {
    return 0;
}

int32 UStageLevel::GetCompStageProgress(UObject* WorldContextObject, ECompStageId _inId) {
    return 0;
}

ECompStageId UStageLevel::GetCompStageId(UObject* WorldContextObject, EStageId _inId) {
    return ECompStageId::None;
}

int32 UStageLevel::GetChunkId(UObject* WorldContextObject, EStageId _inId) {
    return 0;
}


