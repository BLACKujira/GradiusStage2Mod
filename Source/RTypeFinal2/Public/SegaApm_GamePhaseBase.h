#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SegaApm_GamePhaseBase.generated.h"

UCLASS(Abstract, Blueprintable)
class USegaApm_GamePhaseBase : public UObject {
    GENERATED_BODY()
public:
    USegaApm_GamePhaseBase();

};

