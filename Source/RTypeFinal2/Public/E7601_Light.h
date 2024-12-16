#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7601_Light.generated.h"

UCLASS(Blueprintable)
class AE7601_Light : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    AE7601_Light(const FObjectInitializer& ObjectInitializer);

};

