#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGameVersionId.h"
#include "EPublisherId.h"
#include "BuildData.generated.h"

UCLASS(Blueprintable)
class UBuildData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTargetArcade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnableSteam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPublisherId GetPublisherId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetProjectVersionToInt(const FString& _version);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetProjectVersionInt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGameVersionId GetGameVersionId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ChkSampleVer();
    
};

