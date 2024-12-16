#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S5104Ice.generated.h"

UCLASS(Blueprintable)
class AS5104Ice : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AS5104Ice(const FObjectInitializer& ObjectInitializer);

};

