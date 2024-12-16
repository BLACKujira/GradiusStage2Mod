#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E071.generated.h"

class AI002;

UCLASS(Blueprintable)
class AE071 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AI002*> BornedItems;
    
public:
    AE071(const FObjectInitializer& ObjectInitializer);

};

