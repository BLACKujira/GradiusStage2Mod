#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7201.generated.h"

UCLASS(Blueprintable)
class AS7201 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS7201(const FObjectInitializer& ObjectInitializer);

};

