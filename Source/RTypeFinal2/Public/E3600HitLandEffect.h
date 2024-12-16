#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3600HitLandEffect.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class AE3600HitLandEffect : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* EnemyCollision;
    
public:
    AE3600HitLandEffect(const FObjectInitializer& ObjectInitializer);

};

