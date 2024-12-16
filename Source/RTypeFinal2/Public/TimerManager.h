#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "TimerManager.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UTimerManager : public UWorldSubsystem {
    GENERATED_BODY()
};

