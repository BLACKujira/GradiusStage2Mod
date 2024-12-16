#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E5404_laser.generated.h"

UCLASS(Blueprintable)
class AE5404_laser : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE5404_laser(const FObjectInitializer& ObjectInitializer);

};

