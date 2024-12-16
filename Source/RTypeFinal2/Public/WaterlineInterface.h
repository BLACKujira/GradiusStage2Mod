#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WaterlineInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UWaterlineInterface : public UInterface {
    GENERATED_BODY()
};

class IWaterlineInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPushedSurface() const;
    
};

