#pragma once
#include "CoreMinimal.h"
#include "BS705Interface.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "BS705.generated.h"

class ABS705_Capsule;
class UBS705Param;
class UCountData_Event;

UCLASS(Blueprintable)
class ABS705 : public AEnemyActor, public IScrollManagerInterface, public IBS705Interface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBS705Param* ParamBS705;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABS705_Capsule* BS705_Capsule;
    
    ABS705(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
    UFUNCTION(BlueprintCallable)
    void Phase2LoopExpSoundStart_1() override PURE_VIRTUAL(Phase2LoopExpSoundStart_1,);
    
    UFUNCTION(BlueprintCallable)
    void Phase2LoopExpSoundFadeout_1() override PURE_VIRTUAL(Phase2LoopExpSoundFadeout_1,);
    
};

