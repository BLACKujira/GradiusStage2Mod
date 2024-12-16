#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS507_Breathe.generated.h"

UCLASS(Blueprintable)
class ABS507_Breathe : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    ABS507_Breathe(const FObjectInitializer& ObjectInitializer);

};

