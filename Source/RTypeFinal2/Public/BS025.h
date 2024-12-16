#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS025.generated.h"

UCLASS(Blueprintable)
class ABS025 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* HeadActor;
    
public:
    ABS025(const FObjectInitializer& ObjectInitializer);

};

