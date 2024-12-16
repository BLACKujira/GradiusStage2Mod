#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S1186.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class AS1186 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
public:
    AS1186(const FObjectInitializer& ObjectInitializer);

};

