#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H051B.generated.h"

class UMatineeCameraShake;

UCLASS(Blueprintable)
class AH051B : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* CameraShake;
    
public:
    AH051B(const FObjectInitializer& ObjectInitializer);

};

