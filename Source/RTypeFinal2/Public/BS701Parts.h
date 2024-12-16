#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "ScrollManagerInterface.h"
#include "BS701Parts.generated.h"

class ASplineActor;
class UCountData_Event;

UCLASS(Blueprintable)
class ABS701Parts : public AEnemyActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path_Ofs[2];
    
public:
    ABS701Parts(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

