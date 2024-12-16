#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E7100.generated.h"

class AE7100Force;

UCLASS(Blueprintable)
class AE7100 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE7100Force* ForceActor;
    
public:
    AE7100(const FObjectInitializer& ObjectInitializer);

};

