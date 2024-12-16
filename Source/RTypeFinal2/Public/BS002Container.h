#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS002Container.generated.h"

class UBS002Turret;

UCLASS(Blueprintable)
class ABS002Container : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBS002Turret*> Turrets;
    
public:
    ABS002Container(const FObjectInitializer& ObjectInitializer);

};

