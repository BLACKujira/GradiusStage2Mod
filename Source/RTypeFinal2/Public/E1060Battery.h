#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1060Battery.generated.h"

class AE1060;

UCLASS(Blueprintable)
class AE1060Battery : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE1060* Pactor;
    
public:
    AE1060Battery(const FObjectInitializer& ObjectInitializer);

};

