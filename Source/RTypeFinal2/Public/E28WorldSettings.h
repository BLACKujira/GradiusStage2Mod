#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "E28WorldSettings.generated.h"

UCLASS(Blueprintable)
class AE28WorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    AE28WorldSettings(const FObjectInitializer& ObjectInitializer);

};

