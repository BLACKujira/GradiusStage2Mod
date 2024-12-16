#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EDisableFactorFlag.h"
#include "PawnBase.generated.h"

UCLASS(Blueprintable)
class APawnBase : public APawn {
    GENERATED_BODY()
public:
    APawnBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNodeathEffectEnable(bool _enable);
    
    UFUNCTION(BlueprintCallable)
    void SetNodeathEffectDuringNoDeath(bool _enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NodeathEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableNodeathEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableNodeath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableInfiniteLife() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDeathEffectDuringNoDeath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDisableFactorFlag GetDisableFactorNodeath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDisableFactorFlag GetDisableFactorInfiniteLife() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableFactorNodeath(EDisableFactorFlag _factor);
    
    UFUNCTION(BlueprintCallable)
    void EnableFactorInfiniteLife(EDisableFactorFlag _factor);
    
    UFUNCTION(BlueprintCallable)
    void DisableFactorNodeath(EDisableFactorFlag _factor);
    
    UFUNCTION(BlueprintCallable)
    void DisableFactorInfiniteLife(EDisableFactorFlag _factor);
    
};

