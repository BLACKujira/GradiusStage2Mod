#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3203_laser.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class AE3203_laser : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponentLaser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE3203_laser(const FObjectInitializer& ObjectInitializer);

};

