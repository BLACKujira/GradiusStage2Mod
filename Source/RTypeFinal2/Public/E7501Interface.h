#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "E7501Interface.generated.h"

class AActor;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UE7501Interface : public UInterface {
    GENERATED_BODY()
};

class IE7501Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void LegHitLand() PURE_VIRTUAL(LegHitLand,);
    
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetE7501() PURE_VIRTUAL(GetE7501, return NULL;);
    
};

