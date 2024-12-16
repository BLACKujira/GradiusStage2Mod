#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS013.generated.h"

class UAudioComponent;
class UMatineeCameraShake;

UCLASS(Blueprintable)
class ABS013 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioJet;
    
public:
    ABS013(const FObjectInitializer& ObjectInitializer);

};

