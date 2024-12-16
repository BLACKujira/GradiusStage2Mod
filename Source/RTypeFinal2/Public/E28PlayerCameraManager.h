#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "E28PlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class AE28PlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AE28PlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

