#pragma once
#include "CoreMinimal.h"
#include "E5303Parts.h"
#include "ScrollManagerInterface.h"
#include "E5303Bridge.generated.h"

class UCountData_Event;
class UE5303BridgeParam;

UCLASS(Blueprintable)
class AE5303Bridge : public AE5303Parts, public IScrollManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MapObjectFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE5303BridgeParam* EnemyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemySerialNo;
    
public:
    AE5303Bridge(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

