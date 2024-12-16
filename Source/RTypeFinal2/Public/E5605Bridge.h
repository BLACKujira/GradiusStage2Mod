#pragma once
#include "CoreMinimal.h"
#include "E5605Parts.h"
#include "ScrollManagerInterface.h"
#include "E5605Bridge.generated.h"

class UCountData_Event;
class UE5605BridgeParam;

UCLASS(Blueprintable)
class AE5605Bridge : public AE5605Parts, public IScrollManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MapObjectFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE5605BridgeParam* EnemyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemySerialNo;
    
public:
    AE5605Bridge(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

