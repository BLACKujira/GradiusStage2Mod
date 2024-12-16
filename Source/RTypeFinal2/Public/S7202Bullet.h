#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7202Bullet.generated.h"

class AE7202;

UCLASS(Blueprintable)
class AS7202Bullet : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AE7202* ParentActor;
    
public:
    AS7202Bullet(const FObjectInitializer& ObjectInitializer);

};

