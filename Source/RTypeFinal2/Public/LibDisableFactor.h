#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DisableFactor.h"
#include "EDisableFactorFlag.h"
#include "LibDisableFactor.generated.h"

UCLASS(Blueprintable)
class ULibDisableFactor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibDisableFactor();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnable(const FDisableFactor& _disableFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDisable(const FDisableFactor& _disableFactor);
    
    UFUNCTION(BlueprintCallable)
    static void Enable(FDisableFactor& _OutDisableFactor, EDisableFactorFlag _factor);
    
    UFUNCTION(BlueprintCallable)
    static void Disable(FDisableFactor& _OutDisableFactor, EDisableFactorFlag _factor);
    
};

