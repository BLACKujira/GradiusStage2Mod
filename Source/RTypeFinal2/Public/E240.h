#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "Templates/SubclassOf.h"
#include "E240.generated.h"

class UAnimInstance;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class AE240 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClassDecoy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDynamics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_Damage;
    
    AE240(const FObjectInitializer& ObjectInitializer);

};

