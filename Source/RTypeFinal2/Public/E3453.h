#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3453.generated.h"

class AE3453Generator;

UCLASS(Blueprintable)
class AE3453 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE3453Generator* Generator;
    
public:
    AE3453(const FObjectInitializer& ObjectInitializer);

};

