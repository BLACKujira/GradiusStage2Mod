#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1186.generated.h"

class AS1186;
class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class AE1186 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AS1186*> PartsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyPathDataAsset* PathData;
    
public:
    AE1186(const FObjectInitializer& ObjectInitializer);

};

