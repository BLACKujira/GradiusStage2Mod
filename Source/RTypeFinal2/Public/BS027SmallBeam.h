#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS027SmallBeam.generated.h"

class ABS027;

UCLASS(Blueprintable)
class ABS027SmallBeam : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABS027* ParentActor;
    
public:
    ABS027SmallBeam(const FObjectInitializer& ObjectInitializer);

};

