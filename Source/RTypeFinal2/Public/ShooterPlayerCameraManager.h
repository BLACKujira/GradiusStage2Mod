#pragma once
#include "CoreMinimal.h"
#include "E28PlayerCameraManager.h"
#include "ShooterPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class AShooterPlayerCameraManager : public AE28PlayerCameraManager {
    GENERATED_BODY()
public:
    AShooterPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

