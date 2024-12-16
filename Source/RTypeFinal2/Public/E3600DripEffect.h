#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3600DripEffect.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE3600DripEffect : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* EnemyCollision;
    
public:
    AE3600DripEffect(const FObjectInitializer& ObjectInitializer);

};

