#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E387.generated.h"

UCLASS(Blueprintable)
class AE387 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE387(const FObjectInitializer& ObjectInitializer);

};

