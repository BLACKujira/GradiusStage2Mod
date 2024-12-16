#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3452.generated.h"

class AE3452Generator;

UCLASS(Blueprintable)
class AE3452 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE3452Generator* Generator;
    
public:
    AE3452(const FObjectInitializer& ObjectInitializer);

};

