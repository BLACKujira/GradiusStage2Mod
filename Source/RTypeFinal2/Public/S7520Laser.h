#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "S7520Laser.generated.h"

class UEnemyPathDataAsset;

UCLASS(Blueprintable)
class AS7520Laser : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEnemyPathDataAsset*> Path;
    
public:
    AS7520Laser(const FObjectInitializer& ObjectInitializer);

};

