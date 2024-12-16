#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3451.generated.h"

class AE3451Generator;

UCLASS(Blueprintable)
class AE3451 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE3451Generator* Generator;
    
public:
    AE3451(const FObjectInitializer& ObjectInitializer);

};

