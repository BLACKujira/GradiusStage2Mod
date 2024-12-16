#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScrollManagerInterface.h"
#include "E3453Generator.generated.h"

class UCountData_Event;
class UExSplineComponent;

UCLASS(Blueprintable)
class AE3453Generator : public AActor, public IScrollManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExSplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SerialNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BirthNum;
    
    AE3453Generator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void FillSpline();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void EventExec(UCountData_Event* _event) override PURE_VIRTUAL(EventExec,);
    
};

