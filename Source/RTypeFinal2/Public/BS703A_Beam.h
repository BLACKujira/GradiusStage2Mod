#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS703A_Beam.generated.h"

UCLASS(Blueprintable)
class ABS703A_Beam : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    ABS703A_Beam(const FObjectInitializer& ObjectInitializer);

};

