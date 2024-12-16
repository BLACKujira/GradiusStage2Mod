#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S1802Beam.generated.h"

UCLASS(Blueprintable)
class AS1802Beam : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AS1802Beam(const FObjectInitializer& ObjectInitializer);

};

