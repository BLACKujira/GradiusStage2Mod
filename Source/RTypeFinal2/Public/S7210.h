#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7210.generated.h"

UCLASS(Blueprintable)
class AS7210 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* BS702Actor;
    
    AS7210(const FObjectInitializer& ObjectInitializer);

};

