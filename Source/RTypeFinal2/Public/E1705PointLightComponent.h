#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "E1705PointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UE1705PointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UE1705PointLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void E1705PointLight_NotifyKilled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void E1705PointLight_NotifyDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void E1705PointLight_NotifyBorned();
    
};

