#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1821.generated.h"

class AE1821Generator;

UCLASS(Blueprintable)
class AE1821 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE1821Generator* Generator;
    
public:
    AE1821(const FObjectInitializer& ObjectInitializer);

};

