#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E233.generated.h"

class AE233_BODY;

UCLASS(Blueprintable)
class AE233 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE233_BODY*> ChildArray;
    
public:
    AE233(const FObjectInitializer& ObjectInitializer);

};

