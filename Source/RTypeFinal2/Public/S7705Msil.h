#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7705Msil.generated.h"

UCLASS(Blueprintable)
class AS7705Msil : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    AS7705Msil(const FObjectInitializer& ObjectInitializer);

};

