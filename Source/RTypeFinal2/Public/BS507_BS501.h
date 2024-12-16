#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS507_BS501.generated.h"

UCLASS(Blueprintable)
class ABS507_BS501 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    ABS507_BS501(const FObjectInitializer& ObjectInitializer);

};

