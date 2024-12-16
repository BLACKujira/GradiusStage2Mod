#pragma once
#include "CoreMinimal.h"
#include "EnemyActor.h"
#include "E2404.generated.h"

class UEnemyLocus;
class USplineCmdPlayer;

UCLASS(Blueprintable)
class AE2404 : public AEnemyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnemyLocus* EnemyLocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineCmdPlayer* SplineCmdPlayer;
    
    AE2404(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void CmdEvent2(FName _eventName, int32 _zWorld);
    
};

