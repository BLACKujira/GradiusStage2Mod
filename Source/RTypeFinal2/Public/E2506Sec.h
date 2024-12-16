#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2506Sec.generated.h"

class AE2501;
class AS2501yellow;

UCLASS(Blueprintable)
class AE2506Sec : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE2501* TargetEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AS2501yellow* s2501;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE2506Sec(const FObjectInitializer& ObjectInitializer);

};

