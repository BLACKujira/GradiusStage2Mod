#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibShowStoreUIParams.generated.h"

UCLASS(Blueprintable)
class ULibShowStoreUIParams : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULibShowStoreUIParams();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStoreCategorySubscription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStoreCategoryConsumable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStoreCategoryApplication();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStoreCategoryAddOn();
    
};

