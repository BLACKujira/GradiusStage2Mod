#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS701_E7100.generated.h"

UCLASS(Blueprintable)
class ABS701_E7100 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    ABS701_E7100(const FObjectInitializer& ObjectInitializer);

};

