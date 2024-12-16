#pragma once
#include "CoreMinimal.h"
#include "ScrollManagerInterface.h"
#include "SplineActor.h"
#include "E3311_rail.generated.h"

class AE3311;
class UCountData_Event;
class UE3311Param;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AE3311_rail : public ASplineActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SerialNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE3311Param* Param;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE3311* ChildArray;
    
public:
    AE3311_rail(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

