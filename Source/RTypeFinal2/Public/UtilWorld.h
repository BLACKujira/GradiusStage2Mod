#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilWorld.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUtilWorld : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilWorld();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetShouldSimulatePhysics(UObject* WorldContextObject, bool _enable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPlayersOnly(UObject* WorldContextObject, bool _enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWorldTypePIE(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetShouldSimulatePhysics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetPlayersOnly(UObject* WorldContextObject);
    
};

