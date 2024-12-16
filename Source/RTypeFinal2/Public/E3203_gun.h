#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E3203_gun.generated.h"

UCLASS(Blueprintable)
class AE3203_gun : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
public:
    AE3203_gun(const FObjectInitializer& ObjectInitializer);

};

