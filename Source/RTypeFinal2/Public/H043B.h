#pragma once
#include "CoreMinimal.h"
#include "HActor.h"
#include "H043B.generated.h"

class UMatineeCameraShake;

UCLASS(Blueprintable)
class AH043B : public AHActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* CameraShake;
    
public:
    AH043B(const FObjectInitializer& ObjectInitializer);

};

