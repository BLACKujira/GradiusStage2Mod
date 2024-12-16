#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E384.generated.h"

UCLASS(Blueprintable)
class AE384 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE384(const FObjectInitializer& ObjectInitializer);

};

