#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "E7208Interface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UE7208Interface : public UInterface {
    GENERATED_BODY()
};

class IE7208Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void E7208_K2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void E7208_K1();
    
};

