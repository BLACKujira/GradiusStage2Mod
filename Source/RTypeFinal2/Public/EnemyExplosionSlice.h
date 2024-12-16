#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EnemyExplosionInterface.h"
#include "EnemyExplosionSlice.generated.h"

class AEnemyActor;
class UMaterialInterface;

UCLASS(Blueprintable)
class UEnemyExplosionSlice : public UObject, public IEnemyExplosionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CapMaterial;
    
public:
    UEnemyExplosionSlice();


    // Fix for true pure virtual functions not being implemented
};

