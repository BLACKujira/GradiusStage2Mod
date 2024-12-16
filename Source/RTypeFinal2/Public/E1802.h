#pragma once
#include "CoreMinimal.h"
#include "EE1802_PARTS_STATE.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "E1802.generated.h"

class AE1802Parts;
class UCountData_Event;
class UE1802Param;

UCLASS(Blueprintable)
class AE1802 : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1802Param* E1802Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE1802Parts* TopPartsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE1802Parts* BottomPartsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE1802_PARTS_STATE TopPartsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EE1802_PARTS_STATE BottomPartsState;
    
public:
    AE1802(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

