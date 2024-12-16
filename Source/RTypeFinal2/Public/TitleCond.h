#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EDEMO_SELECTED.h"
#include "TitleCond.generated.h"

class UObject;

UCLASS(Blueprintable)
class UTitleCond : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTitleCond();

    UFUNCTION(BlueprintCallable)
    static void FireShockWave(UObject* _wctxt, int32 _loop);
    
    UFUNCTION(BlueprintCallable)
    static void DemoSelected(UObject* _wctxt, EDEMO_SELECTED _selected);
    
    UFUNCTION(BlueprintCallable)
    static void CheckConditionScore(UObject* _wctxt, int32 _score);
    
    UFUNCTION(BlueprintCallable)
    static void CheckCondition(UObject* _wctxt);
    
};

