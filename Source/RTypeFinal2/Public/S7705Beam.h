#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7705Beam.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class AS7705Beam : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ParentEnemyCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS7705Beam(const FObjectInitializer& ObjectInitializer);

};

