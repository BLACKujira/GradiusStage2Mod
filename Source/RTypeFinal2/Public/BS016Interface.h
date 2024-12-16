#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BS016Interface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBS016Interface : public UInterface {
    GENERATED_BODY()
};

class IBS016Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BS504_SetRad(float rad);
    
};

