#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BS706StageInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBS706StageInterface : public UInterface {
    GENERATED_BODY()
};

class IBS706StageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BS706_Death();
    
};

