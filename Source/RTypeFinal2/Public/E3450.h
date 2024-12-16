#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3450.generated.h"

class AE3450Generator;

UCLASS(Blueprintable)
class AE3450 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE3450Generator* Generator;
    
public:
    AE3450(const FObjectInitializer& ObjectInitializer);

};

