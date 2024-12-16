#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "E7106Interface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UE7106Interface : public UInterface {
    GENERATED_BODY()
};

class IE7106Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Act4_MeshLarge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Act3_EffectLarge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Act2_MeshSmall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Act1_EffectSmall();
    
};

