#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS705_ShinenhaPart.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class ABS705_ShinenhaPart : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
public:
    ABS705_ShinenhaPart(const FObjectInitializer& ObjectInitializer);

};

