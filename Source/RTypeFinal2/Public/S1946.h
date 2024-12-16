#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S1946.generated.h"

UCLASS(Blueprintable)
class AS1946 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AS1946(const FObjectInitializer& ObjectInitializer);

};

