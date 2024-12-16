#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EnemyExplosion.generated.h"

class UEnemyExplosionScatter;
class UEnemyExplosionSlice;

UCLASS(Blueprintable)
class UEnemyExplosion : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyExplosionSlice* Slice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyExplosionScatter* Scatter;
    
public:
    UEnemyExplosion();

};

