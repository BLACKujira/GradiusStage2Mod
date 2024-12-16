#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "PointManager.generated.h"

class APointActor;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UPointManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FTransform> Transforms;
    
public:
    UPointManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPoint(const FName _id) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPoint(APointActor* _inActor);
    
};

