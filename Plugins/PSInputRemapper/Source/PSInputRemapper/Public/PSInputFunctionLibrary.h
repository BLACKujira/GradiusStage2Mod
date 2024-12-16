#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "EPSInputType.h"
#include "PSInputWrapper.h"
#include "PSInputFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class PSINPUTREMAPPER_API UPSInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPSInputFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UpdateActionMapping(const FString& ActionName, const FKey NewInputKey, const EPSInputType InputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAllActionMappingName(TArray<FPSInputWrapper>& InputArray);
    
    UFUNCTION(BlueprintCallable)
    static void FindCurrentActionMappings(const FString& ActionName, TArray<FPSInputWrapper>& InputArray);
    
    UFUNCTION(BlueprintCallable)
    static void FindCurrentActionMapping(const FString& ActionName, FPSInputWrapper& Input, const EPSInputType InputType);
    
};

