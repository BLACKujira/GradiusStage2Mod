#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2551.generated.h"

class UE2551Param;

UCLASS(Blueprintable)
class AE2551 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UE2551Param* ParamE2551;
    
    AE2551(const FObjectInitializer& ObjectInitializer);

};

