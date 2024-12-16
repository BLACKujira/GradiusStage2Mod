#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "BS705_Capsule.generated.h"

class UBS705_CapsuleParam;

UCLASS(Blueprintable)
class ABS705_Capsule : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBS705_CapsuleParam* ParamBS705_Capsule;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyActor* ParentEnemy;
    
public:
    ABS705_Capsule(const FObjectInitializer& ObjectInitializer);

};

