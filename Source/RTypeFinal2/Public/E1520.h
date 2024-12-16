#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E1520.generated.h"

class USplineCmdPlayer;

UCLASS(Blueprintable)
class AE1520 : public AEnemyActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineCmdPlayer* SplineCmdPlayer;
    
public:
    AE1520(const FObjectInitializer& ObjectInitializer);

};

