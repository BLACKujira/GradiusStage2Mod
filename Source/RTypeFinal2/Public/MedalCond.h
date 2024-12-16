#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMCOND.h"
#include "MedalCond.generated.h"

class UObject;

UCLASS(Blueprintable)
class UMedalCond : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMedalCond();

    UFUNCTION(BlueprintCallable)
    static bool isDiscloseMedal(UObject* _wctxt, EMCOND _cond, const FString& _detail);
    
    UFUNCTION(BlueprintCallable)
    static void CheckGetMedals(UObject* _wctxt);
    
};

