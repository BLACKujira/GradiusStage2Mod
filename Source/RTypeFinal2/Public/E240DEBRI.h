#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E240DEBRI.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class AE240DEBRI : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDynamics;
    
    AE240DEBRI(const FObjectInitializer& ObjectInitializer);

};

