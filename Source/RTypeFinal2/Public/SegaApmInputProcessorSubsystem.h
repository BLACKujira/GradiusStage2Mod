#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SegaApmInputProcessorSubsystem.generated.h"

UCLASS(Blueprintable)
class USegaApmInputProcessorSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    USegaApmInputProcessorSubsystem();

};

