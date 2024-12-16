#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EnemyExplosionInterface.h"
#include "EnemyExplosionScatterWork.h"
#include "EnemyExplosionScatter.generated.h"

class AEnemyActor;

UCLASS(Blueprintable)
class UEnemyExplosionScatter : public UObject, public IEnemyExplosionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyExplosionScatterWork> Works;
    
public:
    UEnemyExplosionScatter();


    // Fix for true pure virtual functions not being implemented
};

