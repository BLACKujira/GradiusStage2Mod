#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3501.generated.h"

UCLASS(Blueprintable)
class AE3501 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE3501(const FObjectInitializer& ObjectInitializer);

};

