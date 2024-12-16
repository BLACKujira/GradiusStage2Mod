#include "BuildData.h"

UBuildData::UBuildData() {
}

bool UBuildData::IsTargetArcade() {
    return false;
}

bool UBuildData::IsEnableSteam() {
    return false;
}

EPublisherId UBuildData::GetPublisherId() {
    return EPublisherId::Granzella;
}

int32 UBuildData::GetProjectVersionToInt(const FString& _version) {
    return 0;
}

int32 UBuildData::GetProjectVersionInt() {
    return 0;
}

FString UBuildData::GetProjectVersion() {
    return TEXT("");
}

EGameVersionId UBuildData::GetGameVersionId() {
    return EGameVersionId::RTypeFinal2;
}

bool UBuildData::ChkSampleVer() {
    return false;
}


