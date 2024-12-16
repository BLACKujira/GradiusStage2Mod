#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S442.generated.h"

UCLASS(Blueprintable)
class AS442 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS442(const FObjectInitializer& ObjectInitializer);

};

