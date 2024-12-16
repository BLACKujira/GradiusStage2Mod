#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7102.generated.h"

UCLASS(Blueprintable)
class AS7102 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS7102(const FObjectInitializer& ObjectInitializer);

};

