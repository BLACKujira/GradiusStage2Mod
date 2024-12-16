#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E389.generated.h"

class AE384;

UCLASS(Blueprintable)
class AE389 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE384* Child1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE384* Child2;
    
public:
    AE389(const FObjectInitializer& ObjectInitializer);

};

