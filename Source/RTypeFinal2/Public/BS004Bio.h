#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS004Bio.generated.h"

class UBS004Param;

UCLASS(Blueprintable)
class ABS004Bio : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBS004Param* ParamBS004;
    
public:
    ABS004Bio(const FObjectInitializer& ObjectInitializer);

};

