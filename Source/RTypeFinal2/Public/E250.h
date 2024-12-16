#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "Templates/SubclassOf.h"
#include "E250.generated.h"

class UAnimInstance;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class AE250 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClassEgg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDynamics;
    
    AE250(const FObjectInitializer& ObjectInitializer);

};

