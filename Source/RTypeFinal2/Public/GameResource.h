#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EGameResourceType.h"
#include "GameResource.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UGameResource : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameResource();

    UFUNCTION(BlueprintCallable)
    bool SubResource(EGameResourceType _type, int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetResourceTotal(EGameResourceType _type, int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void SetResource(EGameResourceType _type, int32 _value);
    
    UFUNCTION(BlueprintCallable)
    void ResetResourceTotal(EGameResourceType _type);
    
    UFUNCTION(BlueprintCallable)
    void ResetResource(EGameResourceType _type);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllResourcesTotal();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllResources();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceTotal(EGameResourceType _type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResource(EGameResourceType _type);
    
    UFUNCTION(BlueprintCallable)
    bool AddResource(EGameResourceType _type, int32 _value);
    
};

