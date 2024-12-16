#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MissionManager.generated.h"

class UMissionData;

UCLASS(Blueprintable, NotPlaceable, Transient)
class UMissionManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionData* MissionData;
    
public:
    UMissionManager();

    UFUNCTION(BlueprintCallable)
    UMissionData* GetMissionData();
    
};

