#pragma once
#include "CoreMinimal.h"
#include "E1294Parts.h"
#include "ScrollManagerInterface.h"
#include "E1294Maingun.generated.h"

class UCountData_Event;
class UE1294MaingunParam;

UCLASS(Blueprintable)
class AE1294Maingun : public AE1294Parts, public IScrollManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MapObjectFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE1294MaingunParam* EnemyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemySerialNo;
    
public:
    AE1294Maingun(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

