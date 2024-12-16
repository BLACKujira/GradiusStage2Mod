#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS307Spore.generated.h"

UCLASS(Blueprintable)
class ABS307Spore : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS307Spore(const FObjectInitializer& ObjectInitializer);

};

