#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1802Parts.generated.h"

class AE1802;

UCLASS(Blueprintable)
class AE1802Parts : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE1802* ParentActor;
    
public:
    AE1802Parts(const FObjectInitializer& ObjectInitializer);

};

