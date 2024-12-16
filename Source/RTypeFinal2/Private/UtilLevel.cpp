#include "UtilLevel.h"

UUtilLevel::UUtilLevel() {
}

void UUtilLevel::UnloadLevelInstance(UObject* WorldContextObject, ULevelStreamingDynamic* StreamingLevel, bool& bOutSuccess) {
}

ULevelStreamingDynamic* UUtilLevel::LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, const bool bShouldBeVisible, bool& bOutSuccess) {
    return NULL;
}

ULevelStreamingDynamic* UUtilLevel::LoadLevelInstanceByName(UObject* WorldContextObject, FName LevelName, FVector Location, FRotator Rotation, const bool bShouldBeVisible, bool& bOutSuccess) {
    return NULL;
}

bool UUtilLevel::IsLightingScenario(ULevelStreaming* _levelStreaming) {
    return false;
}

TArray<FName> UUtilLevel::GetSubLevelNames(ULevelStreaming* LevelStreaming, EUtilLevelMethod Method) {
    return TArray<FName>();
}

TArray<FUtilLevelInfo> UUtilLevel::GetSubLevelInfos(ULevelStreaming* LevelStreaming) {
    return TArray<FUtilLevelInfo>();
}

TArray<FName> UUtilLevel::GetLevelNames(UObject* WorldContextObject, EUtilLevelMethod Method) {
    return TArray<FName>();
}


