#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "E7209.generated.h"

class AActor;
class UCountData_Event;
class UE7209Param;

UCLASS(Blueprintable)
class AE7209 : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE7209Param* ParamE7209;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* E7209BP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SerialNo;
    
    AE7209(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

