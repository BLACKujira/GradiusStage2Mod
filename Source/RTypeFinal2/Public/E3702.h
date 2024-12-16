#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "E3702.generated.h"

class AE3702_CHILD;
class UCountData_Event;

UCLASS(Blueprintable)
class AE3702 : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE3702_CHILD*> ChildArray;
    
public:
    AE3702(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

