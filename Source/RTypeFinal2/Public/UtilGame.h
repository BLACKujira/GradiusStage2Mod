#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilGame.generated.h"

class AE28GameTick_Competition;
class AScreenActor;
class UConfigGame;
class UObject;

UCLASS(Blueprintable)
class UUtilGame : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilGame();

    UFUNCTION(BlueprintCallable)
    static void SetFixedFrameRate(bool _use, float _frameRate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void PlayerDead(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static bool IsCompetitionGameMode(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContext"))
    static bool IsCompetition(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static AScreenActor* GetScreenActor(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static AE28GameTick_Competition* GetGameTickCompetition(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFixedFrameRate(bool& _use, float& _frameRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UConfigGame* GetConfigGame();
    
};

