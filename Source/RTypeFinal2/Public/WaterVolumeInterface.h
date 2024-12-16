#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WaterVolumeInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UWaterVolumeInterface : public UInterface {
    GENERATED_BODY()
};

class IWaterVolumeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UnregistSimTarget(AActor* _actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RegistSimTarget(AActor* _actor) const;
    
};

