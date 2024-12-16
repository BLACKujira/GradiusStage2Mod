#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1946.generated.h"

class AE1946Body;

UCLASS(Blueprintable)
class AE1946 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE1946Body* BpActor;
    
public:
    AE1946(const FObjectInitializer& ObjectInitializer);

};

