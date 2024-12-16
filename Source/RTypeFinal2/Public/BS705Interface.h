#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BS705Interface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBS705Interface : public UInterface {
    GENERATED_BODY()
};

class IBS705Interface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void Phase2LoopExpSoundStart_1() PURE_VIRTUAL(Phase2LoopExpSoundStart_1,);
    
    UFUNCTION(BlueprintCallable)
    virtual void Phase2LoopExpSoundFadeout_1() PURE_VIRTUAL(Phase2LoopExpSoundFadeout_1,);
    
};

