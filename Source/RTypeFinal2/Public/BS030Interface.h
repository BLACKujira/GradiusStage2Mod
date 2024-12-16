#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BS030Interface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBS030Interface : public UInterface {
    GENERATED_BODY()
};

class IBS030Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void B030_DeathGroundEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void B030_DeathGround();
    
};

