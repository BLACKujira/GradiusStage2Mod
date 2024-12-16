#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E385.generated.h"

UCLASS(Blueprintable)
class AE385 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE385(const FObjectInitializer& ObjectInitializer);

};

