#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "E7209Interface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UE7209Interface : public UInterface {
    GENERATED_BODY()
};

class IE7209Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void E7209_K1();
    
};

