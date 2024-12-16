#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilDebugAudio.generated.h"

class UObject;

UCLASS(Blueprintable)
class UUtilDebugAudio : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUtilDebugAudio();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void Disp(UObject* _worldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void Capture(UObject* _worldContext);
    
};

