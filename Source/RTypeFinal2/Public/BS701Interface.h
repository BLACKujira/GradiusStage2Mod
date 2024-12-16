#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BS701Interface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBS701Interface : public UInterface {
    GENERATED_BODY()
};

class IBS701Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void B701_death();
    
};

