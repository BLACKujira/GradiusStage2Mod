#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "E28GameWork.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class UE28GameWork : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UE28GameWork();

};

