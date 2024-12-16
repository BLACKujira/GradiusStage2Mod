#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "E7104Interface.generated.h"

class AActor;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UE7104Interface : public UInterface {
    GENERATED_BODY()
};

class IE7104Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void LegHitLand_R3() PURE_VIRTUAL(LegHitLand_R3,);
    
    UFUNCTION(BlueprintCallable)
    virtual void LegHitLand_R2() PURE_VIRTUAL(LegHitLand_R2,);
    
    UFUNCTION(BlueprintCallable)
    virtual void LegHitLand_R1() PURE_VIRTUAL(LegHitLand_R1,);
    
    UFUNCTION(BlueprintCallable)
    virtual void LegHitLand_L3() PURE_VIRTUAL(LegHitLand_L3,);
    
    UFUNCTION(BlueprintCallable)
    virtual void LegHitLand_L2() PURE_VIRTUAL(LegHitLand_L2,);
    
    UFUNCTION(BlueprintCallable)
    virtual void LegHitLand_L1() PURE_VIRTUAL(LegHitLand_L1,);
    
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetE7106() PURE_VIRTUAL(GetE7106, return NULL;);
    
};

