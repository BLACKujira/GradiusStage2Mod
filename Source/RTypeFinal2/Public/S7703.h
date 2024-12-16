#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7703.generated.h"

UCLASS(Blueprintable)
class AS7703 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS7703(const FObjectInitializer& ObjectInitializer);

};

