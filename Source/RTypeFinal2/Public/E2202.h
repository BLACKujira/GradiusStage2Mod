#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2202.generated.h"

class USpotLightComponent;

UCLASS(Blueprintable)
class AE2202 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComponent;
    
public:
    AE2202(const FObjectInitializer& ObjectInitializer);

};

