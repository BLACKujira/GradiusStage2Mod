#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E233_BG.generated.h"

class AE233_BG_BODY;
class ASplineActor;

UCLASS(Blueprintable)
class AE233_BG : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineActor* Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AE233_BG_BODY*> ChildArray;
    
public:
    AE233_BG(const FObjectInitializer& ObjectInitializer);

};

