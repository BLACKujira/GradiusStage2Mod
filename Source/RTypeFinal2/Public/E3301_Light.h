#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3301_Light.generated.h"

UCLASS(Blueprintable)
class AE3301_Light : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AE3301_Light(const FObjectInitializer& ObjectInitializer);

};

