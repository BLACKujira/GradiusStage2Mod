#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SplineManager.generated.h"

class ASplineActor;

UCLASS(Blueprintable, NotPlaceable, Transient)
class USplineManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, ASplineActor*> MapActor;
    
    USplineManager();

    UFUNCTION(BlueprintCallable)
    ASplineActor* GetSpline(const FName _id);
    
    UFUNCTION(BlueprintCallable)
    void AddSpline(ASplineActor* _inActor);
    
};

