#pragma once
#include "CoreMinimal.h"
#include "BS705BulletInterface.h"
#include "EnemyActor.h"
#include "BS705_Shinenha.generated.h"

class ABS705_ShinenhaPart;

UCLASS(Blueprintable)
class ABS705_Shinenha : public AEnemyActor, public IBS705BulletInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABS705_ShinenhaPart*> ShinenhaParts;
    
public:
    ABS705_Shinenha(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

