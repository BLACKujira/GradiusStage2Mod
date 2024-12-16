#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1511Tail.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class AE1511Tail : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
public:
    AE1511Tail(const FObjectInitializer& ObjectInitializer);

};

