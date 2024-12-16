#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2203.generated.h"

class USpotLightComponent;

UCLASS(Blueprintable)
class AE2203 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComponent;
    
public:
    AE2203(const FObjectInitializer& ObjectInitializer);

};

