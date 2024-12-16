#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7601_Wall.generated.h"

UCLASS(Blueprintable)
class AE7601_Wall : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AE7601_Wall(const FObjectInitializer& ObjectInitializer);

};

