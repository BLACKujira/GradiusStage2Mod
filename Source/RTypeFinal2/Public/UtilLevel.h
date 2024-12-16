#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUtilLevelMethod.h"
#include "UtilLevelInfo.h"
#include "UtilLevel.generated.h"

class ULevelStreaming;
class ULevelStreamingDynamic;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class UUtilLevel : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilLevel();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnloadLevelInstance(UObject* WorldContextObject, ULevelStreamingDynamic* StreamingLevel, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, const bool bShouldBeVisible, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreamingDynamic* LoadLevelInstanceByName(UObject* WorldContextObject, FName LevelName, FVector Location, FRotator Rotation, const bool bShouldBeVisible, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLightingScenario(ULevelStreaming* _levelStreaming);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetSubLevelNames(ULevelStreaming* LevelStreaming, EUtilLevelMethod Method);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FUtilLevelInfo> GetSubLevelInfos(ULevelStreaming* LevelStreaming);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FName> GetLevelNames(UObject* WorldContextObject, EUtilLevelMethod Method);
    
};

